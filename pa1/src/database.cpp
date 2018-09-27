
#include <map>
#include "database.h"
#include "key_compare.h"


DataBase::DataBase(char*  inputFile):_order(0){
  _parser->Parse(inputFile);
  compress();
}

DataBase::~DataBase(){
  if (_order != 0){
    delete _order;
    _order = 0;
  }
}

int& DataBase::operator[] (const int& n){
  return _order[n];
}

Word& DataBase::getWord(const int& n){
  return _wordlist[n];
}

int DataBase::getWordSize(){
  return _wordlist.size();
}

string DataBase::getString(const int& n){
  return _parser->QueryString(n);
}

int DataBase::getStringSize(){
  return _parser->QueryTotalStringCount();
}

int DataBase::getLineNumber(const int& n){
  return _parser->QueryLineNumber(n);
}

int DataBase::getWordOrder(const int& n){
  return _parser->QueryWordOrder(n);
}

bool DataBase::compareLarge(const int& lhs, const int& rhs){
  if (_wordlist[lhs].size() > _wordlist[rhs].size()){
    return true;
  }
  else if (_parser->QueryString(_wordlist[lhs].value()) < _parser->QueryString(_wordlist[rhs].value())){
    return true;
  }
  else{
    return false;
  }
}

void DataBase::compress(){
  map<int, int, KeyCompare> wordMap(_parser);
  for (int i = 0;i < this->getStringSize(); ++i){
    map<int, int, KeyCompare>::iterator iter = wordMap.find(i);
    if(iter != wordMap.end()){
      _wordlist[iter->second].add(i);
    }
    else{
      wordMap.insert(pair<int, int>(i, _wordlist.size()));
      _wordlist.push_back(Word(i));
    }
  }
}


