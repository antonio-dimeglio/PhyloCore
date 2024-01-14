#include "antlr4-runtime.h"

#include "Newick/NewickLexer.h"
#include "Newick/NewickParser.h"
#include "NewickTree/NewickTree.h"
#include "NewickTree/NewickTreeNode.h"


using namespace antlr4;

int main(){
    NewickTree newickTree("((B:0.2,(C:0.3,D:0.4)E:0.5)F:0.1)A;");
    if (!newickTree.getError().empty()) {
        std::cout << newickTree.getError() << std::endl;
        return 1;
    }
    newickTree.buildTree();
    return 0;
}