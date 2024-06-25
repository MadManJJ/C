#include <iostream>
#include <vector>

int main(){
    // for(int i = 0 ; true ;  i++){
    //     if(i == 3){
    //         break;
    //     }
    //     std::cout << i << std::endl;
        
    // }
    
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    for(size_t i = 0; i < arr.size(); i++) {
        std::cout << "Element at index " << i << ": " << arr[i] << std::endl;
    }
}