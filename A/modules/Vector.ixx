module;

#include <vector>

export module A.Vector;

template<typename T>
class Vec: private std::vector<T>
{
  public:
      using std::vector<T>::push_back;
      void pop();

};


module: private;

template<typename T>
void Vec<T>::pop() { 
    std::vector<T>::pop_back();
}
