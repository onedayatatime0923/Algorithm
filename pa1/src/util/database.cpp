
#include <string>
#include <sstream>
#include "database.h"
#include "key_compare.h"


DataBase::DataBase(char*  inputFile){
  _parser->Parse(inputFile);
}

string DataBase::operator() (const int& n){
  return _parser->QueryString(n) + ' ' + this->int2string(n);
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
  if (_parser->QueryString(lhs) > _parser->QueryString(rhs)){
    return true;
  }
  else{
    return false;
  }
}

string DataBase::int2string(const int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}


