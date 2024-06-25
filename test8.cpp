#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number "; std::cin >> n;
    bool prime = true;
    for(int div = 2 ; div*div <= n ; div++){
        if(n % div == 0){
            prime = false;
            break;
        }
        
    }
    if(n == 1){
        prime = false;
    }
    if(prime == true){
        std::cout << "Is a prime"<< std::endl;
    }
    else{
        std::cout << "Not prime" << std::endl;
    }
}