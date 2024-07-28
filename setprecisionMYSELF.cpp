#include <iostream>
#include <iomanip>
#include <typeinfo>

int setpreci(double number , double position);

int main(){
    setpreci(25.5562556 , 5); 
    return 0;
}

int setpreci(double number , double position){
    std::string num_str = std::to_string(number);
    int count = 0;
    for(int i = 10 ; i <= number ; i *= 10){
        count += 1;

    }
    count += 1;
    
    int num_int = num_str[position + count + 1] - '0'; //str(num_str) to int(num_int)
    if(num_int >= 5){

        int digit = num_str[position + count - 1 + 1] - '0'; //str(num_str) to int(digit)

        digit += 1 ;

        char digit_char = digit + '0'; // int(digit) to char(digit_char)
        num_str[position + count - 1 + 1] = digit_char;
        
    }
    std::string result = num_str.substr(0, (position + count + 1));
    std::cout << result;

    return 0;
}