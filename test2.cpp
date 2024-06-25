#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> arr;
    std::cout << "How many index: ";
    int num;
    std::cin >> num;
    for(int i = 1; i <= num ; i++){
        std::string x = "None";
        std::cout << "Enter index " << i <<": ";
        std::cin >> x ;
        arr.push_back(x);
    }
    for(int i = 0 ; i < arr.size() ; i++){
        std::cout << arr[i] << "\n";
    }
}
