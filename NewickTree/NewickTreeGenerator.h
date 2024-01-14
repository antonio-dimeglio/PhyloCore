#ifndef NEWICKTREEGENERATOR_H
#define NEWICKTREEGENERATOR_H

#include "NewickTree.h"
#include "NewickTreeNode.h"
#include "../Newick/NewickBaseListener.h"

#include <memory>   

class NewickTreeGenerator : public NewickBaseListener{
    private:
        std::string currentName; 
        float currentBranchLength;
        bool isInternal = false;

        std::stack<std::unique_ptr<NewickTreeNode>> nodeStack;
        


    public:
        void enterRootinternal(NewickParser::RootinternalContext *ctx) override;
        void exitRootinternal(NewickParser::RootinternalContext *ctx) override;

        void exitLength(NewickParser::LengthContext *ctx) override;

        void exitName(NewickParser::NameContext *ctx) override;

        void exitBranch(NewickParser::BranchContext *ctx) override;

        void exitLeaf(NewickParser::LeafContext *ctx) override;

        void enterInternal(NewickParser::InternalContext *ctx) override;
        void exitInternal(NewickParser::InternalContext *ctx) override;        
        std::unique_ptr<NewickTreeNode> root;

};

#endif // NEWICKTREEGENERATOR_H