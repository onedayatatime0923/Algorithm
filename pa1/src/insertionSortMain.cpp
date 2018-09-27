
#include <iostream>
#include "database.h"
#include "insertionSort.h"


using namespace std;

int main(int argc, char *argv[]){
  AlgTimer t;
  t.Begin();
  DataBase database(argv[1]);
  InsertionSorter sorter;

  int * order = sorter.sort(database);

  cout<< database.getStringSize()<<endl;
  for(int i = 0; i<database.getStringSize(); ++i){
    cout<< database(order[i]) << endl;
  }

  
  // Display the accumulated time
  cout << "The execution spends " << t.End() << " seconds" << endl;

  // cout<< database.QuerySize()<<endl;
  // cout<< database.QueryString(0)<<endl;
  // cout<< database.QueryString(1)<<endl;
  // cout<< database.QueryString(2)<<endl;
  // cout<< database.QueryString(3)<<endl;



  return 0;
  
}
