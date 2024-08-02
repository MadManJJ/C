#include <iostream>
#include <set>


int main(){
    std::set<bool> s = {4,7,4,5};
    for(int a : s){
        std::cout << a << " ";
    }
    return 0;
}

