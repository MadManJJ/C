#include <iostream>
#include <vector>
#include <algorithm> 
#include <set>  

int main(){

    std::vector<int> x = {1,5,8};
    int y[] = {1,8,9,7,7};
    std::set<int> z = {1,5};
    auto it1 = x.begin();
    std::vector<int>::iterator it2 = x.end() ;
    // for(int i = 0; i < x.size() ; i++){
    //     std::cout << *(it1 + i) << " ";
    // }
    // std::cout << std::endl;
    std::cout << std::size(x) << '\n';
    std::cout << std::size(y) << '\n';
    std::cout << std::size(z) << '\n';
    
    

    
}