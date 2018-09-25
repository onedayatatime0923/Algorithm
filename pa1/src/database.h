
#include <iostream>
#include "parser.h"

class DataBase{
	public:
	DataBase(char*  inputFile){
    _parser.Parse(inputFile);
    _size = _parser.QueryTotalStringCount();
  }

  int QueryTotalStringCount(){
    return _size;
  }
  string QueryString(const int& n){
    return _parser.QueryString(n);
  }
  int QueryLineNumber(const int& n){
    return _parser.QueryLineNumber(n);
  }
  int QueryWordOrder(const int& n){
    return _parser.QueryWordOrder(n);
  }

  private:
  AlgParser _parser;
  int _size;
};
