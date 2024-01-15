#ifndef NEWICKTREEGENERATOR_H
#define NEWICKTREEGENERATOR_H

#include "../Tree/PhylogeneticTree.h"
#include "../Tree/PhylogeneticTreeNode.h"
#include "../Newick/NewickBaseListener.h"

#include <memory>   

class NewickTreeGenerator : public NewickBaseListener{
    private:
        std::string currentName; 
        float currentBranchLength;
        bool isInternal = false;

        std::stack<std::shared_ptr<PhylogeneticTreeNode>> nodeStack;
        


    public:
        void enterRootinternal(NewickParser::RootinternalContext *ctx) override;
        void exitRootinternal(NewickParser::RootinternalContext *ctx) override;
        void enterRootleaf(NewickParser::RootleafContext *ctx) override;
        void exitRootleaf(NewickParser::RootleafContext *ctx) override;
        
        void exitLength(NewickParser::LengthContext *ctx) override;

        void exitName(NewickParser::NameContext *ctx) override;

        void exitBranch(NewickParser::BranchContext *ctx) override;

        void exitLeaf(NewickParser::LeafContext *ctx) override;

        void enterInternal(NewickParser::InternalContext *ctx) override;
        void exitInternal(NewickParser::InternalContext *ctx) override;        
        std::shared_ptr<PhylogeneticTreeNode> root;

};

#endif // NEWICKTREEGENERATOR_H
