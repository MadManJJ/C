#include <iostream>
#include <vector>
void test1(int a[]){
    // std::cout << sizeof(a) << std::endl;
    for(int i = 0 ; i < 3 ; i++){
        std::cout << a[i] << '\n';
    }
}


int main() {
    
    std::vector<int> b = {1,8,9,55,7};
    std::vector<int> vec = {1, 3, 5, 2, 4};
    std::string n[] = {"saprk","spa" , "so","ss"};
    b.insert(b.begin(),5);
    for(int i = 0 ; i < b.size() ; i++){
        std::cout << b[i] << ' ';
    }

}