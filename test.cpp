#include <iostream>
#include <cmath>
int countDigits(int number) {
        int count = 0;
        while (number != 0) {
            number /= 10;  // Divide number by 10
            count++;
        }
        return count;
    }

int main(){
    std::cout << 32148 % 100 << '\n';
    int number = 3322458;
    int count = countDigits(number);
    int arr[count];
    
    for(int i = 1 ; i <= number ; i++){
        arr[i-1] = (number % (int)((pow(10 , i))));
    }



    return 0;
}