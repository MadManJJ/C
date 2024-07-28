#include <iostream>
#include <vector>

int main(){
    std::vector<int> a = {1,2,3};
    a.erase(a.begin() + 1);
    a.insert(a.begin() + 2 , 99);
    for(int i : a){
        std::cout << i << std::endl;
    }
    
}