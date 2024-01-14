#include "NewickTree.h"
#include "antlr4-runtime.h"
#include <iostream>

#include "tree/IterativeParseTreeWalker.h"
#include "NewickTreeGenerator.h"
#include "../Newick/NewickBaseListener.h"
#include "ExceptionErrorListener.h"

NewickTree::NewickTree(std::string newickString) {
    input = new antlr4::ANTLRInputStream(newickString);
    lexer = new NewickLexer(input);
    lexer->removeErrorListeners();
    lexer->addErrorListener(new ExceptionErrorListener());

    tokens = new antlr4::CommonTokenStream(lexer);
    parser = new NewickParser(tokens);
    parser->removeErrorListeners();
    parser->addErrorListener(new ExceptionErrorListener());

    try {
        progTree = parser->prog();
    } catch (antlr4::ParseCancellationException &e) {
        error = e.what();
    }
}

void NewickTree::buildTree(){
    using namespace antlr4::tree;
    IterativeParseTreeWalker walker;
    NewickTreeGenerator generator;
    walker.walk(&generator, progTree);
    root = std::move(generator.root);
    root->print();
    
}

