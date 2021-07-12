#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <stack>
#include <string.h>
#include <string>
#include <vector>
using namespace std;
int countAndSay(int k) {
  vector<int> series;
  vector<int> num_digits;

  vector<int> num;

  series.push_back(1);
  series.push_back(11);
  series.push_back(21);
  int x;
  // cout<<series[0];
  // cout<<series[1];
  // cout<<series[2];

  for (int i = 3; i < k; i++) {
    x = series[i - 1];
    int length;
    stack<int> sk;
    do {
      // cout << "inside 1. while: x = " << x << " x % 10 = " << x % 10 << endl;
      sk.push(x % 10);
      x = x / 10;
    } while (x > 10);
    sk.push(x);
    length = sk.size();
    int count = 1;
    cout << sk.size() << endl;
    while (!sk.empty()) {
      // cout<<length<<endl;
      num.push_back(sk.top());
      sk.pop();
    }
    cout << "length: " << length << endl;
    for (int j = 1; j <= length; j++) {
      if (num[j] != num[j - 1]) {
        num_digits.push_back(count);
        num_digits.push_back(num[j - 1]);
        count = 1;
      } else
        count++;
    }
    int exponent = num_digits.size() - 1;
    cout << "num size " << num_digits.size() << endl;
    series[i] = 0;
    for (int v = 0; v < num_digits.size(); v++) {
      series[i] += pow(10, exponent) * num_digits[v];
      exponent--;
    }
    while (!num_digits.empty()) {
      num_digits.pop_back();
    }
    while (!num.empty())
      num.pop_back();
  }
  return series[k - 1];
}
int main() { cout << countAndSay(4); }
