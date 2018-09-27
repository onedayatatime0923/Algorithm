
#include <vector>

using namespace std;

class Word{
  public:
    Word(const int& value);
    Word(const Word &p2);
    ~Word();
    int size() const;
    int value() const;
    int& operator[] (const int& n);
    void add(const int& value);
    void swap(Word& word);
  private:
    mutable vector<int>* _appearingOrder;
};

