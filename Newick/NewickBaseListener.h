
// Generated from Newick.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NewickListener.h"


/**
 * This class provides an empty implementation of NewickListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NewickBaseListener : public NewickListener {
public:

  virtual void enterProg(NewickParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(NewickParser::ProgContext * /*ctx*/) override { }

  virtual void enterTree(NewickParser::TreeContext * /*ctx*/) override { }
  virtual void exitTree(NewickParser::TreeContext * /*ctx*/) override { }

  virtual void enterRootleaf(NewickParser::RootleafContext * /*ctx*/) override { }
  virtual void exitRootleaf(NewickParser::RootleafContext * /*ctx*/) override { }

  virtual void enterRootinternal(NewickParser::RootinternalContext * /*ctx*/) override { }
  virtual void exitRootinternal(NewickParser::RootinternalContext * /*ctx*/) override { }

  virtual void enterSubtree(NewickParser::SubtreeContext * /*ctx*/) override { }
  virtual void exitSubtree(NewickParser::SubtreeContext * /*ctx*/) override { }

  virtual void enterLeaf(NewickParser::LeafContext * /*ctx*/) override { }
  virtual void exitLeaf(NewickParser::LeafContext * /*ctx*/) override { }

  virtual void enterInternal(NewickParser::InternalContext * /*ctx*/) override { }
  virtual void exitInternal(NewickParser::InternalContext * /*ctx*/) override { }

  virtual void enterBranchset(NewickParser::BranchsetContext * /*ctx*/) override { }
  virtual void exitBranchset(NewickParser::BranchsetContext * /*ctx*/) override { }

  virtual void enterBranch(NewickParser::BranchContext * /*ctx*/) override { }
  virtual void exitBranch(NewickParser::BranchContext * /*ctx*/) override { }

  virtual void enterName(NewickParser::NameContext * /*ctx*/) override { }
  virtual void exitName(NewickParser::NameContext * /*ctx*/) override { }

  virtual void enterLength(NewickParser::LengthContext * /*ctx*/) override { }
  virtual void exitLength(NewickParser::LengthContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

