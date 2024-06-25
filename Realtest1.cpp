#include <iostream>
#include <vector>

std::vector<int> removeALL(std::vector<int> v1, int x){
    for(int i = 0; i < v1.size() ; i++){
        if(v1[i] == x){
           v1.erase(v1.begin() + i); 
        }
    }
    return v1;
}

int main(){
    std::vector<int> a = removeALL({1,2,3,8,2} , 2);
    for(int i = 0 ; i < a.size() ; i++){
        std::cout << a[i] << " ";
    }
}
