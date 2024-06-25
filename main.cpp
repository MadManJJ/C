#include <iostream>
#include <any>
#include <string>

int factorial(int number){
    if(number >= 1 && number != 0){
        return number * factorial(number - 1);
    }
    else{
        return 1;
    }
}

int factorial2(int num){
    if(num >= 0 && num <= 1){
        return 1;
    }
    else{
        return num * factorial2(num-1);
    }
    
}

int factorial3(int num){
    
    int result = 1;
    for(int i = 2 ; i <= num ; i+=1){
        result = result * i;
    }
    if(num <= 1){
        return 1;
    }
    return result;
}

int main(){
    std::cout << "hello\n";
    std::cout << factorial(3) << " hello\n"  ;
    // std::cout << factorial2(-1) << std::endl;
    std::cout << factorial3(3);

    return 0;
}

