
#ifdef SORT_INSERTION
#include <iostream>
#include <stdio.h>
#include "../util/database.h"
#include "../sorter/insertionSort.h"


using namespace std;

int main(int argc, char *argv[]){

  DataBase database(argv[1]);
  InsertionSorter sorter;

  int * order = sorter.sort(database);

  // cout<< database.getStringSize()<<endl;
  // for(int i = 0; i<database.getStringSize(); ++i){
  //   cout<< database(order[i]) << endl;
  // }
  database.write(order, argv[2]);
  // Display the accumulated time


  return 0;
  
}
#endif
