
#include "parser.h"

class KeyCompare{
  public:
    KeyCompare(AlgParser* parser){
      _parser = parser;
    }
    bool operator() (const int& lhs, const int& rhs){
      if (_parser->QueryString(lhs) < _parser->QueryString(rhs)){
        return true;
      }
      else{
        return false;
      }
    };
    AlgParser* _parser;
};
