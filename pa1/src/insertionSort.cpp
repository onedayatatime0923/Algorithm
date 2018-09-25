
#include <iostream>
#include <typeinfo>
#include "database.h"

using namespace std;

int main(int argc, char *argv[]){
  DataBase database(argv[1]);


  cout<< database.QueryTotalStringCount()<< endl;
  cout<< database.QueryString(0)<< endl;
  cout<< database.QueryLineNumber(0)<< endl;
  cout<< database.QueryWordOrder(0)<< endl;



  return 0;
  
}
