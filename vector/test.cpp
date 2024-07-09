#include <iostream>
#include <vector>

int main(){
    std::vector<int> a = {1,4};
    a[0] = 5;
    for(int i = 0 ; i < std::size(a) ; i++){
        std::cout << a[i] << std::endl;
    }
    
}