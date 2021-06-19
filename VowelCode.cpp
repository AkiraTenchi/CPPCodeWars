#include <string>
#include <algorithm>
#include <iostream>

std::string encode(const std::string &str)
{
    std::string str1 = str;
    std::replace(str1.begin(), str1.end(), 'a', '1');
    std::replace(str1.begin(), str1.end(), 'e', '2');
    std::replace(str1.begin(), str1.end(), 'i', '3');
    std::replace(str1.begin(), str1.end(), 'o', '4');
    std::replace(str1.begin(), str1.end(), 'u', '5');
    return str1;
}

std::string decode(const std::string &str)
{
    std::string str1 = str;
    std::replace(str1.begin(), str1.end(), '1', 'a');
    std::replace(str1.begin(), str1.end(), '2', 'e');
    std::replace(str1.begin(), str1.end(), '3', 'i');
    std::replace(str1.begin(), str1.end(), '4', 'o');
    std::replace(str1.begin(), str1.end(), '5', 'u');
    return str1;
}

int main()
{
    std::cout << encode("aeiouhg") << std::endl;
    std::cout << decode("12345678");
}