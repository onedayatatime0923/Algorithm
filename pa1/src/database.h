
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include "parser.h"

class DataBase{
	public:
    DataBase(char*  inputFile){
      _parser.Parse(inputFile);
      _size = _parser.QueryTotalStringCount();
      _order = new int[_size];
    }

    int QuerySize(){
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
    int& operator[] (const int& n){
      return _order[n];
    }

  private:
    AlgParser _parser;
    int _size;
    int* _order;
};
#endif
