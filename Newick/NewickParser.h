
// Generated from Newick.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  NewickParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, STRING = 6, FLOAT = 7, 
    WHITESPACE = 8
  };

  enum {
    RuleProg = 0, RuleTree = 1, RuleRootleaf = 2, RuleRootinternal = 3, 
    RuleSubtree = 4, RuleLeaf = 5, RuleInternal = 6, RuleBranchset = 7, 
    RuleBranch = 8, RuleName = 9, RuleLength = 10
  };

  explicit NewickParser(antlr4::TokenStream *input);

  NewickParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NewickParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class TreeContext;
  class RootleafContext;
  class RootinternalContext;
  class SubtreeContext;
  class LeafContext;
  class InternalContext;
  class BranchsetContext;
  class BranchContext;
  class NameContext;
  class LengthContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TreeContext *tree();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  TreeContext : public antlr4::ParserRuleContext {
  public:
    TreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootleafContext *rootleaf();
    RootinternalContext *rootinternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TreeContext* tree();

  class  RootleafContext : public antlr4::ParserRuleContext {
  public:
    RootleafContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    BranchContext *branch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RootleafContext* rootleaf();

  class  RootinternalContext : public antlr4::ParserRuleContext {
  public:
    RootinternalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchContext *branch();
    BranchsetContext *branchset();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RootinternalContext* rootinternal();

  class  SubtreeContext : public antlr4::ParserRuleContext {
  public:
    SubtreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeafContext *leaf();
    InternalContext *internal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtreeContext* subtree();

  class  LeafContext : public antlr4::ParserRuleContext {
  public:
    LeafContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LeafContext* leaf();

  class  InternalContext : public antlr4::ParserRuleContext {
  public:
    InternalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchsetContext *branchset();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InternalContext* internal();

  class  BranchsetContext : public antlr4::ParserRuleContext {
  public:
    BranchsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchContext *branch();
    BranchsetContext *branchset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BranchsetContext* branchset();

  class  BranchContext : public antlr4::ParserRuleContext {
  public:
    BranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtreeContext *subtree();
    LengthContext *length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BranchContext* branch();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  LengthContext : public antlr4::ParserRuleContext {
  public:
    LengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LengthContext* length();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

