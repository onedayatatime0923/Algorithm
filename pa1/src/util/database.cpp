
#include <string>
#include <fstream>
#include "database.h"


DataBase::DataBase(char*  inputFile){
  AlgParser parser;
  parser.Parse(inputFile);
  _size = parser.QueryTotalStringCount(); 
  _data = new string[_size];
  for(int i = 0; i < _size; ++i){
    _data[i] = parser.QueryString(i);
  };
}

string DataBase::operator() (const int& n){
  return _data[n]+ ' ' + this->int2string(n);
}

void DataBase::write(const int* data, char* filename){
  fstream f;
  f.open(filename, ios::out);//open file
  if(!f){
    cout<<"Fail to open file: "<<filename<<endl;
  }
  cout<<"File Descriptor: "<<f<<endl;
  f<< _size << endl;
  for(int i = 0;i < _size; ++i){
    f<< _data[data[i]] << ' ' << data[i] << endl;
  }
  f.close();//close file
};



