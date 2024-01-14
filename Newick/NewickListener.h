
// Generated from Newick.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NewickParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NewickParser.
 */
class  NewickListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(NewickParser::ProgContext *ctx) = 0;
  virtual void exitProg(NewickParser::ProgContext *ctx) = 0;

  virtual void enterTree(NewickParser::TreeContext *ctx) = 0;
  virtual void exitTree(NewickParser::TreeContext *ctx) = 0;

  virtual void enterRootleaf(NewickParser::RootleafContext *ctx) = 0;
  virtual void exitRootleaf(NewickParser::RootleafContext *ctx) = 0;

  virtual void enterRootinternal(NewickParser::RootinternalContext *ctx) = 0;
  virtual void exitRootinternal(NewickParser::RootinternalContext *ctx) = 0;

  virtual void enterSubtree(NewickParser::SubtreeContext *ctx) = 0;
  virtual void exitSubtree(NewickParser::SubtreeContext *ctx) = 0;

  virtual void enterLeaf(NewickParser::LeafContext *ctx) = 0;
  virtual void exitLeaf(NewickParser::LeafContext *ctx) = 0;

  virtual void enterInternal(NewickParser::InternalContext *ctx) = 0;
  virtual void exitInternal(NewickParser::InternalContext *ctx) = 0;

  virtual void enterBranchset(NewickParser::BranchsetContext *ctx) = 0;
  virtual void exitBranchset(NewickParser::BranchsetContext *ctx) = 0;

  virtual void enterBranch(NewickParser::BranchContext *ctx) = 0;
  virtual void exitBranch(NewickParser::BranchContext *ctx) = 0;

  virtual void enterName(NewickParser::NameContext *ctx) = 0;
  virtual void exitName(NewickParser::NameContext *ctx) = 0;

  virtual void enterLength(NewickParser::LengthContext *ctx) = 0;
  virtual void exitLength(NewickParser::LengthContext *ctx) = 0;


};

