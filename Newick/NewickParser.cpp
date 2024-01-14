
// Generated from Newick.g4 by ANTLR 4.13.1


#include "NewickListener.h"

#include "NewickParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NewickParserStaticData final {
  NewickParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NewickParserStaticData(const NewickParserStaticData&) = delete;
  NewickParserStaticData(NewickParserStaticData&&) = delete;
  NewickParserStaticData& operator=(const NewickParserStaticData&) = delete;
  NewickParserStaticData& operator=(NewickParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag newickParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
NewickParserStaticData *newickParserStaticData = nullptr;

void newickParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (newickParserStaticData != nullptr) {
    return;
  }
#else
  assert(newickParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NewickParserStaticData>(
    std::vector<std::string>{
      "prog", "tree", "rootleaf", "rootinternal", "subtree", "leaf", "internal", 
      "branchset", "branch", "name", "length"
    },
    std::vector<std::string>{
      "", "';'", "'('", "')'", "','", "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "STRING", "FLOAT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,77,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,
  	32,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,40,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,4,1,4,3,4,51,8,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,
  	7,65,8,7,1,8,1,8,1,8,1,9,3,9,71,8,9,1,10,1,10,3,10,75,8,10,1,10,0,0,11,
  	0,2,4,6,8,10,12,14,16,18,20,0,0,71,0,22,1,0,0,0,2,31,1,0,0,0,4,39,1,0,
  	0,0,6,41,1,0,0,0,8,50,1,0,0,0,10,52,1,0,0,0,12,54,1,0,0,0,14,64,1,0,0,
  	0,16,66,1,0,0,0,18,70,1,0,0,0,20,74,1,0,0,0,22,23,3,2,1,0,23,24,5,0,0,
  	1,24,1,1,0,0,0,25,26,3,4,2,0,26,27,5,1,0,0,27,32,1,0,0,0,28,29,3,6,3,
  	0,29,30,5,1,0,0,30,32,1,0,0,0,31,25,1,0,0,0,31,28,1,0,0,0,32,3,1,0,0,
  	0,33,40,3,18,9,0,34,35,5,2,0,0,35,36,3,16,8,0,36,37,5,3,0,0,37,38,3,18,
  	9,0,38,40,1,0,0,0,39,33,1,0,0,0,39,34,1,0,0,0,40,5,1,0,0,0,41,42,5,2,
  	0,0,42,43,3,16,8,0,43,44,5,4,0,0,44,45,3,14,7,0,45,46,5,3,0,0,46,47,3,
  	18,9,0,47,7,1,0,0,0,48,51,3,10,5,0,49,51,3,12,6,0,50,48,1,0,0,0,50,49,
  	1,0,0,0,51,9,1,0,0,0,52,53,3,18,9,0,53,11,1,0,0,0,54,55,5,2,0,0,55,56,
  	3,14,7,0,56,57,5,3,0,0,57,58,3,18,9,0,58,13,1,0,0,0,59,65,3,16,8,0,60,
  	61,3,16,8,0,61,62,5,4,0,0,62,63,3,14,7,0,63,65,1,0,0,0,64,59,1,0,0,0,
  	64,60,1,0,0,0,65,15,1,0,0,0,66,67,3,8,4,0,67,68,3,20,10,0,68,17,1,0,0,
  	0,69,71,5,6,0,0,70,69,1,0,0,0,70,71,1,0,0,0,71,19,1,0,0,0,72,73,5,5,0,
  	0,73,75,5,7,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,21,1,0,0,0,6,31,39,50,
  	64,70,74
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  newickParserStaticData = staticData.release();
}

}

NewickParser::NewickParser(TokenStream *input) : NewickParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NewickParser::NewickParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NewickParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *newickParserStaticData->atn, newickParserStaticData->decisionToDFA, newickParserStaticData->sharedContextCache, options);
}

NewickParser::~NewickParser() {
  delete _interpreter;
}

const atn::ATN& NewickParser::getATN() const {
  return *newickParserStaticData->atn;
}

std::string NewickParser::getGrammarFileName() const {
  return "Newick.g4";
}

const std::vector<std::string>& NewickParser::getRuleNames() const {
  return newickParserStaticData->ruleNames;
}

const dfa::Vocabulary& NewickParser::getVocabulary() const {
  return newickParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NewickParser::getSerializedATN() const {
  return newickParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

NewickParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::TreeContext* NewickParser::ProgContext::tree() {
  return getRuleContext<NewickParser::TreeContext>(0);
}

tree::TerminalNode* NewickParser::ProgContext::EOF() {
  return getToken(NewickParser::EOF, 0);
}


size_t NewickParser::ProgContext::getRuleIndex() const {
  return NewickParser::RuleProg;
}

void NewickParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void NewickParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

NewickParser::ProgContext* NewickParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, NewickParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    tree();
    setState(23);
    match(NewickParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TreeContext ------------------------------------------------------------------

NewickParser::TreeContext::TreeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::RootleafContext* NewickParser::TreeContext::rootleaf() {
  return getRuleContext<NewickParser::RootleafContext>(0);
}

NewickParser::RootinternalContext* NewickParser::TreeContext::rootinternal() {
  return getRuleContext<NewickParser::RootinternalContext>(0);
}


size_t NewickParser::TreeContext::getRuleIndex() const {
  return NewickParser::RuleTree;
}

void NewickParser::TreeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTree(this);
}

void NewickParser::TreeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTree(this);
}

NewickParser::TreeContext* NewickParser::tree() {
  TreeContext *_localctx = _tracker.createInstance<TreeContext>(_ctx, getState());
  enterRule(_localctx, 2, NewickParser::RuleTree);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(25);
      rootleaf();
      setState(26);
      match(NewickParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
      rootinternal();
      setState(29);
      match(NewickParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RootleafContext ------------------------------------------------------------------

NewickParser::RootleafContext::RootleafContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::NameContext* NewickParser::RootleafContext::name() {
  return getRuleContext<NewickParser::NameContext>(0);
}

NewickParser::BranchContext* NewickParser::RootleafContext::branch() {
  return getRuleContext<NewickParser::BranchContext>(0);
}


size_t NewickParser::RootleafContext::getRuleIndex() const {
  return NewickParser::RuleRootleaf;
}

void NewickParser::RootleafContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRootleaf(this);
}

void NewickParser::RootleafContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRootleaf(this);
}

NewickParser::RootleafContext* NewickParser::rootleaf() {
  RootleafContext *_localctx = _tracker.createInstance<RootleafContext>(_ctx, getState());
  enterRule(_localctx, 4, NewickParser::RuleRootleaf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NewickParser::T__0:
      case NewickParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(33);
        name();
        break;
      }

      case NewickParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(34);
        match(NewickParser::T__1);
        setState(35);
        branch();
        setState(36);
        match(NewickParser::T__2);
        setState(37);
        name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RootinternalContext ------------------------------------------------------------------

NewickParser::RootinternalContext::RootinternalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::BranchContext* NewickParser::RootinternalContext::branch() {
  return getRuleContext<NewickParser::BranchContext>(0);
}

NewickParser::BranchsetContext* NewickParser::RootinternalContext::branchset() {
  return getRuleContext<NewickParser::BranchsetContext>(0);
}

NewickParser::NameContext* NewickParser::RootinternalContext::name() {
  return getRuleContext<NewickParser::NameContext>(0);
}


size_t NewickParser::RootinternalContext::getRuleIndex() const {
  return NewickParser::RuleRootinternal;
}

void NewickParser::RootinternalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRootinternal(this);
}

void NewickParser::RootinternalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRootinternal(this);
}

NewickParser::RootinternalContext* NewickParser::rootinternal() {
  RootinternalContext *_localctx = _tracker.createInstance<RootinternalContext>(_ctx, getState());
  enterRule(_localctx, 6, NewickParser::RuleRootinternal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(NewickParser::T__1);
    setState(42);
    branch();
    setState(43);
    match(NewickParser::T__3);
    setState(44);
    branchset();
    setState(45);
    match(NewickParser::T__2);
    setState(46);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtreeContext ------------------------------------------------------------------

NewickParser::SubtreeContext::SubtreeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::LeafContext* NewickParser::SubtreeContext::leaf() {
  return getRuleContext<NewickParser::LeafContext>(0);
}

NewickParser::InternalContext* NewickParser::SubtreeContext::internal() {
  return getRuleContext<NewickParser::InternalContext>(0);
}


size_t NewickParser::SubtreeContext::getRuleIndex() const {
  return NewickParser::RuleSubtree;
}

void NewickParser::SubtreeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtree(this);
}

void NewickParser::SubtreeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtree(this);
}

NewickParser::SubtreeContext* NewickParser::subtree() {
  SubtreeContext *_localctx = _tracker.createInstance<SubtreeContext>(_ctx, getState());
  enterRule(_localctx, 8, NewickParser::RuleSubtree);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NewickParser::T__2:
      case NewickParser::T__3:
      case NewickParser::T__4:
      case NewickParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(48);
        leaf();
        break;
      }

      case NewickParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(49);
        internal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeafContext ------------------------------------------------------------------

NewickParser::LeafContext::LeafContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::NameContext* NewickParser::LeafContext::name() {
  return getRuleContext<NewickParser::NameContext>(0);
}


size_t NewickParser::LeafContext::getRuleIndex() const {
  return NewickParser::RuleLeaf;
}

void NewickParser::LeafContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeaf(this);
}

void NewickParser::LeafContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeaf(this);
}

NewickParser::LeafContext* NewickParser::leaf() {
  LeafContext *_localctx = _tracker.createInstance<LeafContext>(_ctx, getState());
  enterRule(_localctx, 10, NewickParser::RuleLeaf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InternalContext ------------------------------------------------------------------

NewickParser::InternalContext::InternalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::BranchsetContext* NewickParser::InternalContext::branchset() {
  return getRuleContext<NewickParser::BranchsetContext>(0);
}

NewickParser::NameContext* NewickParser::InternalContext::name() {
  return getRuleContext<NewickParser::NameContext>(0);
}


size_t NewickParser::InternalContext::getRuleIndex() const {
  return NewickParser::RuleInternal;
}

void NewickParser::InternalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInternal(this);
}

void NewickParser::InternalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInternal(this);
}

NewickParser::InternalContext* NewickParser::internal() {
  InternalContext *_localctx = _tracker.createInstance<InternalContext>(_ctx, getState());
  enterRule(_localctx, 12, NewickParser::RuleInternal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(NewickParser::T__1);
    setState(55);
    branchset();
    setState(56);
    match(NewickParser::T__2);
    setState(57);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchsetContext ------------------------------------------------------------------

NewickParser::BranchsetContext::BranchsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::BranchContext* NewickParser::BranchsetContext::branch() {
  return getRuleContext<NewickParser::BranchContext>(0);
}

NewickParser::BranchsetContext* NewickParser::BranchsetContext::branchset() {
  return getRuleContext<NewickParser::BranchsetContext>(0);
}


size_t NewickParser::BranchsetContext::getRuleIndex() const {
  return NewickParser::RuleBranchset;
}

void NewickParser::BranchsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchset(this);
}

void NewickParser::BranchsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchset(this);
}

NewickParser::BranchsetContext* NewickParser::branchset() {
  BranchsetContext *_localctx = _tracker.createInstance<BranchsetContext>(_ctx, getState());
  enterRule(_localctx, 14, NewickParser::RuleBranchset);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(59);
      branch();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(60);
      branch();
      setState(61);
      match(NewickParser::T__3);
      setState(62);
      branchset();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

NewickParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NewickParser::SubtreeContext* NewickParser::BranchContext::subtree() {
  return getRuleContext<NewickParser::SubtreeContext>(0);
}

NewickParser::LengthContext* NewickParser::BranchContext::length() {
  return getRuleContext<NewickParser::LengthContext>(0);
}


size_t NewickParser::BranchContext::getRuleIndex() const {
  return NewickParser::RuleBranch;
}

void NewickParser::BranchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranch(this);
}

void NewickParser::BranchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranch(this);
}

NewickParser::BranchContext* NewickParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 16, NewickParser::RuleBranch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    subtree();
    setState(67);
    length();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

NewickParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NewickParser::NameContext::STRING() {
  return getToken(NewickParser::STRING, 0);
}


size_t NewickParser::NameContext::getRuleIndex() const {
  return NewickParser::RuleName;
}

void NewickParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void NewickParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

NewickParser::NameContext* NewickParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 18, NewickParser::RuleName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NewickParser::STRING) {
      setState(69);
      match(NewickParser::STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthContext ------------------------------------------------------------------

NewickParser::LengthContext::LengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NewickParser::LengthContext::FLOAT() {
  return getToken(NewickParser::FLOAT, 0);
}


size_t NewickParser::LengthContext::getRuleIndex() const {
  return NewickParser::RuleLength;
}

void NewickParser::LengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLength(this);
}

void NewickParser::LengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NewickListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLength(this);
}

NewickParser::LengthContext* NewickParser::length() {
  LengthContext *_localctx = _tracker.createInstance<LengthContext>(_ctx, getState());
  enterRule(_localctx, 20, NewickParser::RuleLength);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NewickParser::T__4) {
      setState(72);
      match(NewickParser::T__4);
      setState(73);
      match(NewickParser::FLOAT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void NewickParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  newickParserInitialize();
#else
  ::antlr4::internal::call_once(newickParserOnceFlag, newickParserInitialize);
#endif
}
