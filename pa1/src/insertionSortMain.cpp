
#include <iostream>
#include "database.h"
#include "insertionSort.h"


using namespace std;

int main(int argc, char *argv[]){
  DataBase database(argv[1]);


  cout<< database.QuerySize()<<endl;
  cout<< database.QueryString(0)<<endl;
  cout<< database.QueryString(1)<<endl;
  cout<< database.QueryString(2)<<endl;
  cout<< database.QueryString(3)<<endl;



  return 0;
  
}
