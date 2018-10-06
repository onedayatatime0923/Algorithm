
#include <string>
#include <sstream>
#include <fstream>
#include "database.h"


DataBase::DataBase(char*  inputFile){
  AlgParser parser;
  parser.Parse(inputFile);
  int size = parser.QueryTotalStringCount(); 
  for(int i = 0; i < size; ++i){
    _data.push_back(parser.QueryString(i));
  };
}

string DataBase::operator() (const int& n){
  return _data[n]+ ' ' + this->int2string(n);
}

string DataBase::getString(const int& n){
  return _data[n];
}

int DataBase::getSize(){
  return _data.size();
}


bool DataBase::compareLarge(const int& lhs, const int& rhs){
  if (_data[lhs] > _data[rhs]){
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
  f<< _data.size() << endl;
  for(int i = 0;i < _data.size(); ++i){
    f<< _data[i] << ' ' << data[i] << endl;
  }
  f.close();//close file
};

string DataBase::int2string(const int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}


