
// Generated from Newick.g4 by ANTLR 4.13.1


#include "NewickLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NewickLexerStaticData final {
  NewickLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NewickLexerStaticData(const NewickLexerStaticData&) = delete;
  NewickLexerStaticData(NewickLexerStaticData&&) = delete;
  NewickLexerStaticData& operator=(const NewickLexerStaticData&) = delete;
  NewickLexerStaticData& operator=(NewickLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag newicklexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
NewickLexerStaticData *newicklexerLexerStaticData = nullptr;

void newicklexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (newicklexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(newicklexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NewickLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "STRING", "FLOAT", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'('", "')'", "','", "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "STRING", "FLOAT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,8,52,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,4,5,29,8,5,11,5,12,
  	5,30,1,6,4,6,34,8,6,11,6,12,6,35,1,6,1,6,4,6,40,8,6,11,6,12,6,41,3,6,
  	44,8,6,1,7,4,7,47,8,7,11,7,12,7,48,1,7,1,7,0,0,8,1,1,3,2,5,3,7,4,9,5,
  	11,6,13,7,15,8,1,0,3,3,0,48,57,65,90,97,122,1,0,48,57,2,0,9,10,13,13,
  	56,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,
  	0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,1,17,1,0,0,0,3,19,1,0,0,0,5,21,1,0,0,
  	0,7,23,1,0,0,0,9,25,1,0,0,0,11,28,1,0,0,0,13,33,1,0,0,0,15,46,1,0,0,0,
  	17,18,5,59,0,0,18,2,1,0,0,0,19,20,5,40,0,0,20,4,1,0,0,0,21,22,5,41,0,
  	0,22,6,1,0,0,0,23,24,5,44,0,0,24,8,1,0,0,0,25,26,5,58,0,0,26,10,1,0,0,
  	0,27,29,7,0,0,0,28,27,1,0,0,0,29,30,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,
  	0,31,12,1,0,0,0,32,34,7,1,0,0,33,32,1,0,0,0,34,35,1,0,0,0,35,33,1,0,0,
  	0,35,36,1,0,0,0,36,43,1,0,0,0,37,39,5,46,0,0,38,40,7,1,0,0,39,38,1,0,
  	0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,37,1,0,
  	0,0,43,44,1,0,0,0,44,14,1,0,0,0,45,47,7,2,0,0,46,45,1,0,0,0,47,48,1,0,
  	0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,50,1,0,0,0,50,51,6,7,0,0,51,16,1,0,
  	0,0,6,0,30,35,41,43,48,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  newicklexerLexerStaticData = staticData.release();
}

}

NewickLexer::NewickLexer(CharStream *input) : Lexer(input) {
  NewickLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *newicklexerLexerStaticData->atn, newicklexerLexerStaticData->decisionToDFA, newicklexerLexerStaticData->sharedContextCache);
}

NewickLexer::~NewickLexer() {
  delete _interpreter;
}

std::string NewickLexer::getGrammarFileName() const {
  return "Newick.g4";
}

const std::vector<std::string>& NewickLexer::getRuleNames() const {
  return newicklexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NewickLexer::getChannelNames() const {
  return newicklexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NewickLexer::getModeNames() const {
  return newicklexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NewickLexer::getVocabulary() const {
  return newicklexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NewickLexer::getSerializedATN() const {
  return newicklexerLexerStaticData->serializedATN;
}

const atn::ATN& NewickLexer::getATN() const {
  return *newicklexerLexerStaticData->atn;
}




void NewickLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  newicklexerLexerInitialize();
#else
  ::antlr4::internal::call_once(newicklexerLexerOnceFlag, newicklexerLexerInitialize);
#endif
}
