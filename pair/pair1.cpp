#include <iostream>
#include <utility>
#include <string>

std::string to_str(std::pair<int,int> &p){
    return "[" + std::to_string(p.first) + "," + std::to_string(p.second) + "]";
}

int main(){
    std::pair<int,int> p[] = {{1,4},{7,8}};

    for(int i = 0 ; i < std::size(p) ; i++){
        std::cout << p[i].first << " " << p[i].second << std::endl; //output is a string
    }

    for(int i = 0 ; i < std::size(p) ; i++){
        std::cout << to_str(p[i]) << std::endl;
    }

}