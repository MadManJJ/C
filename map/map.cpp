#include <iostream>
#include <map>
int main(){
    std::map<std::string,int> m;
    m["b"] = 10;
    m["a"] = 15;
    // for(auto it = m.begin() ; it != m.end() ; it++){
    //     std::cout << it->first << " " << (*it).second << std::endl;
    // }
    for(auto &x : m){
        std::cout << x.first << " " << x.second << std::endl;
    }

 
    return 0;
}