#include "NewickTreeGenerator.h"

void NewickTreeGenerator::enterRootinternal(NewickParser::RootinternalContext *ctx){
    auto node = std::make_unique<NewickTreeNode>(std::string(""), 0.0f);
    nodeStack.push(std::move(node));
}

void NewickTreeGenerator::exitRootinternal(NewickParser::RootinternalContext *ctx){
    root = std::move(nodeStack.top());
    root->name = currentName;
    root->length = 0.0f;
    nodeStack.pop();
}


void NewickTreeGenerator::exitLength(NewickParser::LengthContext *ctx){
    if (ctx->FLOAT() != nullptr && ctx->FLOAT()->getText() != ""){
        currentBranchLength = std::stof(ctx->FLOAT()->getText());
    } else{
        currentBranchLength = 0.0f;
    }
}

void NewickTreeGenerator::exitName(NewickParser::NameContext *ctx){
    currentName = ctx->getText();
}

void NewickTreeGenerator::exitBranch(NewickParser::BranchContext *ctx){
    if (isInternal){
        auto node = std::move(nodeStack.top());
        nodeStack.pop();
        node->name = currentName;
        node->length = currentBranchLength;
        nodeStack.top()->children.push_back(std::move(node)); 
        
    } else{
        auto node = std::make_unique<NewickTreeNode>(currentName, currentBranchLength);    
        nodeStack.top()->children.push_back(std::move(node));
    }
}

void NewickTreeGenerator::enterInternal(NewickParser::InternalContext *ctx){
    auto node = std::make_unique<NewickTreeNode>("", 0.0);
    nodeStack.push(std::move(node));
}

void NewickTreeGenerator::exitInternal(NewickParser::InternalContext *ctx){
    isInternal = true; 
}

void NewickTreeGenerator::exitLeaf(NewickParser::LeafContext *ctx){
    isInternal = false;
}