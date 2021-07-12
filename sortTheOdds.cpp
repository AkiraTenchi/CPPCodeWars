#include <iostream>
#include <algorithm>
#include <vector>

class Kata{
  public:
    template<typename T>
  void print(T const & xs)
  {
      std::cout << "[ ";
      for(auto const & x : xs) {
          std::cout << x << ' ';
      }
      std::cout << "]\n";
  }
  int main(int argc, char const *argv[])
  {
    print(sortArray({}));
    return 0;
  }
  
    std::vector<int> sortArray(std::vector<int> array){
      std::vector<int> temp;
      for(int i = 0; i <= array.size(); i++){
        if(array[i] % 2 != 0){
          temp.push_back(array[i]);
          array[i] = 7;
        } 
      }
      std::sort(temp.begin(), temp.end());
      int index = 0;
      for(int i = 0; i <= array.size(); i++){
        if(array[i] == 7){
          array[i] = temp[index];
          index++;
        } 
      }
      return array; 
    }
};
