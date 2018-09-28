
#include <string>
#include <sstream>
#include <fstream>
#include "database.h"


DataBase::DataBase(char*  inputFile){
  _parser->Parse(inputFile);
}

string DataBase::operator() (const int& n){
  return this->getString(n) + ' ' + this->int2string(n);
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

void DataBase::write(const int* data, char* filename){
  fstream f;
  f.open(filename, ios::out);//open file
  if(!f){
    cout<<"Fail to open file: "<<filename<<endl;
  }
  cout<<"File Descriptor: "<<f<<endl;
  f<< this->getStringSize() << endl;
  for(int i = 0;i < this->getStringSize(); ++i){
    f<< this->getString(data[i]) << ' ' << data[i] << endl;
  }
  f.close();//close file
};

string DataBase::int2string(const int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}


