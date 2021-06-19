#include <iostream>

#include <vector>
#include <numeric>

typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n){
      if (n == 1){return 1;}
      std::vector<int> res = {1, 1};
      while(res.size() < n){
        res.push_back(res.at(res.size()-1) + res.at(res.size() - 2));
      }
      ull sum = 0;
      for (auto& n : res)
        sum += n;
      return 4 * sum;
  }
};
