
#ifndef _DEFINE_DATABASE_
#define _DEFINE_DATABASE_

#include <vector>
#include "parser.h"

class Word{
  public:
    Word(const int& value){
      _appearingOrder = new vector<int>;
      _appearingOrder->push_back(value);
    };
    ~Word(){
      delete _appearingOrder;
    };
    int& operator[] (const int& n){
      return (*_appearingOrder)[n];
    };
    void swap(Word& word){
      vector<int>* tmp = this->_appearingOrder;
      this->_appearingOrder = word._appearingOrder;
      word._appearingOrder = tmp;
    };

  private:
    vector<int>* _appearingOrder;
};

class intCompare{
  public:
    intCompare(AlgParser* parser){
      _parser = parser;
    }
    bool operator() (const int& lhs, const int& rhs){
      return int(_parser->QueryString(lhs)[0]) < int(_parser->QueryString(rhs)[0]);
    }
    AlgParser* _parser;
};

class DataBase{
	public:
    DataBase(char*  inputFile){
      _parser->Parse(inputFile);
    }

    int QuerySize(){
      return _parser->QueryTotalStringCount();
    }
    string QueryString(const int& n){
      return _parser->QueryString(n);
    }
    int QueryLineNumber(const int& n){
      return _parser->QueryLineNumber(n);
    }
    int QueryWordOrder(const int& n){
      return _parser->QueryWordOrder(n);
    }
    int& operator[] (const int& n){
      return _order[n];
    }
    bool larger(const int& x, const int& y){};

  private:
    void compress();

    bool intCompare(const int& lhs, const int& rhs){
      return int(this->QueryString(lhs)[0]) < int(this->QueryString(rhs)[0]);
    };

    intCompare cmp(_parser);
    AlgParser* _parser;
    vector<Word> _wordlist;
    int* _order;
};
#endif
