#include <iostream>
#include <map>

int main(){
    std::map<int,int> m = {{9,11},{3,13},{1,12}};
    auto it = m.begin();
    // std::cout << (*(++it)).second << std::endl; //(*(++it)).second not the same as (*(it++)).second
    // std::cout << (*it).second;
    std::pair<int,int> x = *it;
    std::cout << x.first;
}