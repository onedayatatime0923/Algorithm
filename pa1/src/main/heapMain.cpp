
#include <iostream>
#include <stdio.h>
#include "../util/database.h"
#include "../sorter/heapSort.h"


using namespace std;

int main(int argc, char *argv[]){
  AlgTimer t;
  t.Begin();

  DataBase database(argv[1]);
  HeapSorter sorter;

  int * order = sorter.sort(database);

  // cout<< database.getSize()<<endl;
  // for(int i = 0; i<database.getSize(); ++i){
  //   cout<< database(order[i]) << endl;
  // }
  database.write(order, argv[2]);
  // Display the accumulated time
  cout << "The execution spends " << t.End() << " seconds" << endl;


  return 0;
  
}
