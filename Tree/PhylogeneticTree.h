#ifndef PHYLOGENETICTREE_H
#define PHYLOGENETICTREE_H

#include "PhylogeneticTreeNode.h"
#include "../Newick/NewickParser.h"
#include "../Newick/NewickLexer.h"


class PhylogeneticTree{
    public:
        PhylogeneticTree(std::string newickString);
        void buildTree();

        std::string getError() const { return error; }
        void printTree() const { root->print();}

    private: 
        NewickParser::ProgContext* progTree;
        antlr4::ANTLRInputStream* input;
        NewickLexer* lexer;
        antlr4::CommonTokenStream* tokens;
        NewickParser* parser;


        std::shared_ptr<PhylogeneticTreeNode> root;
        std::string error = ""; 
};

#endif // PHYLOGENETICTREE_H
