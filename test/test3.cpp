#include <iostream>
#include <typeinfo>

int main() {
    std::string s = "spark";
    std::cout << s.substr(2).length() << std::endl;
    std::string num_str = "123";
    int num_int = std::stoi(num_str); //stoi = string to int
    int x = 12;
    double y = 12.5556;
    std::string x_str = std::to_string(x); //int or double to string
    std::string y_str = std::to_string(y);
    std::cout << typeid(x_str).name() << std::endl;
    std::cout << typeid(y_str).name();
    //str to int : stoi (string to int)
    //int to str : to_string
    //double to str : to_string
    //char to int : - '0' ex. int x = s[0] - '0'; (from '1' to 1 not '1' to 49 (this one is ascii))
    //int to char : + '0' ex. char ch = num + '0';
    

    return 0;

}
