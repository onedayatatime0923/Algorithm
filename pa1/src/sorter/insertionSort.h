
#include "../util/database.h"

class InsertionSorter{
  public:
    InsertionSorter(){};
    // int* sort(DataBase& database);
    static int* sort(string* data, int& size);
};
