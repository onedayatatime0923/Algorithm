
#include "../util/database.h"

class MergeSorter{
  public:
    MergeSorter(){};
    int* sort(DataBase& database);
  private:
    int* sort(const int& i, const int& j);
    int* merge(int* i, int* j);
};
