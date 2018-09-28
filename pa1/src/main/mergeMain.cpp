
#ifdef SORT_MERGE
#include <iostream>
#include "database.h"
#include "../sorter/mergeSort.h"


using namespace std;

int main(int argc, char *argv[]){
  AlgTimer t;
  t.Begin();

  DataBase database(argv[1]);
  MergeSorter sorter;

  int * order = sorter.sort(database);

  // cout<< database.getStringSize()<<endl;
  // for(int i = 0; i<database.getStringSize(); ++i){
  //   cout<< database(order[i]) << endl;
  // }
  database.write(order, argv[2]);
  // Display the accumulated time
  cout << "The execution spends " << t.End() << " seconds" << endl;

  return 0;
  
}
#endif
