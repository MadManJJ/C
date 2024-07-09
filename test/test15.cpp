#include <iostream>
#include <vector>

void addition(std::vector<int> a){
    for(int i = 0 ; i < std::size(a) ; i++){
        std::cout << a[i] << std::endl;
    }
    
}

int main(){
    std::vector<int> a(3,4); //{4,4,4}
    std::cout << std::size(a) << std::endl;
    addition(a);
    
}