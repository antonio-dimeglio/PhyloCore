#ifndef NEWICKTREE_H
#define NEWICKTREE_H

#include "NewickTreeNode.h"
#include "../Newick/NewickParser.h"
#include "../Newick/NewickLexer.h"


class NewickTree{
    public:
        NewickTree(std::string newickString);
        void buildTree();

        std::string getError() const { return error; }
        

    private: 
        NewickParser::ProgContext* progTree;
        antlr4::ANTLRInputStream* input;
        NewickLexer* lexer;
        antlr4::CommonTokenStream* tokens;
        NewickParser* parser;


        std::unique_ptr<NewickTreeNode> root; 
        std::string error = ""; 
};

#endif