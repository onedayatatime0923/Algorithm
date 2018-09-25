
#include <iostream>
#include "database.h"
#include "insertionSort.h"


using namespace std;

int main(int argc, char *argv[]){
  DataBase database(argv[1]);


  cout<< database[0]<<endl;
  database[0] = 1;
  cout<< database[0]<<endl;



  return 0;
  
}
