#include <iostream>
#include <string>

std::string countAndSaySeq(int n) {
  if (n == 1)
    return "1";
  if (n == 2)
    return "11";
  std::string res = "11";
  for (int i = 3; i <= n; i++) {
    res += '$';
    int length = res.length();
    int count = 1;
    std::string temp = "";
    for (int j = 1; j < length; j++) {
      if (res[j] != res[j - 1]) {
        temp += count + '0';
        temp += res[j - 1];
        count = 1;
      } else {
        count++;
      }
    }
    res = temp;
  }
  return res;
}

int main() {
  std::cout << countAndSaySeq(5) << std::endl;
  return 0;
}
