
#include <string>
#include <sstream>
#include <fstream>
#include "database.h"


DataBase::DataBase(char*  inputFile){
	int i = 0;
	string line;
	ifstream fin;

	fin.open( inputFile );
	if ( fin.is_open()){
		while(getline(fin, line)){
    int prev = 0, pos;
      while ((pos = line.find_first_of(" ';", prev)) != string::npos) {
        if (pos > prev){
          _data.push_back(line.substr(prev, pos-prev));
        }
        prev = pos+1;
      }
    if (prev < line.length())
        _data.push_back(line.substr(prev, std::string::npos));
    }
  }
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
    f<< _data[data[i]] << ' ' << data[i] << endl;
  }
  f.close();//close file
};

string DataBase::int2string(const int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}


