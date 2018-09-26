
#include <iostream>
#include "database.h"
#include "insertionSort.h"


using namespace std;

int main(int argc, char *argv[]){
  AlgTimer t;
  t.Begin();
  DataBase database(argv[1]);
  // Display the accumulated time
  cout << "The execution spends " << t.End() << " seconds" << endl;

  Word a(1);
  Word b(2);

  /*
  cout<< database.QuerySize()<<endl;
  cout<< database.QueryString(0)<<endl;
  cout<< database.QueryString(1)<<endl;
  cout<< database.QueryString(2)<<endl;
  cout<< database.QueryString(3)<<endl;
  */



  return 0;
  
}
