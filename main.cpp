#include "antlr4-runtime.h"

#include "Newick/NewickLexer.h"
#include "Newick/NewickParser.h"
#include "NewickTree/NewickTree.h"
#include "NewickTree/NewickTreeNode.h"


using namespace antlr4;

int main(){
    NewickTree newickTree("();");
    if (!newickTree.getError().empty()) {
        std::cout << newickTree.getError() << std::endl;
        return 1;
    }
    newickTree.buildTree();
    return 0;
}