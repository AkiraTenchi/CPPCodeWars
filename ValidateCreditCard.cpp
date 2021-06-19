#include <iostream>

class Kata {
  public:
  static bool validate(long long int n) {
    int sumOfDigits = 0;
    while(n > 0){
        sumOfDigits += n % 10;
        n = n / 10;
        int temp = (n % 10) * 2;
        if (temp > 9){sumOfDigits += temp - 9;} 
        else{sumOfDigits += temp;}
        n = n / 10;
        
    }
    return sumOfDigits % 10 == 0;
  }
};

  int main(){
      std::cout<<Kata::validate(891)<<std::endl;
      std::cout<<Kata::validate(2121);

      return 0;
  }