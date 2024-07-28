#include <iostream>
#include <vector>

int main(){
    std::vector<int> a = {1,4};
    for(int i : a){
        std::cout << i << std::endl;
    }
    
}