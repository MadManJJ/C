#include <iostream>
#include <vector>

void fibo1(std::vector<int> fibo){
    for (int i = 0; i < 10; i++)
    {
        int sum = fibo[i] + fibo[i + 1];
        fibo.push_back(sum);
    }
    for (int i = 0; i < std::size(fibo); i++)
    {
        std::cout << fibo[i] << std::endl;
    }
}

void fibo2(std::vector<int> fibo){
    for(int i = 2; i < 10 ; i++){
        fibo.push_back(fibo[i-1] + fibo[i-2]);
    }
    for (int i = 0; i < std::size(fibo); i++)
    {
        std::cout << fibo[i] << std::endl;
    }
}

int main(){
    std::vector<int> a = {0,1};
    fibo2(a);
}
