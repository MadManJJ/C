#include <iostream>
#include <tuple>
#include <array>
#include <string>

std::string to_str(std::tuple<int,int> &e){
    return "[" + std::to_string(std::get<0>(e)) + ", " + std::to_string(std::get<1>(e)) + "]";
}

int main(){
    std::tuple<int,int> t[] = {{1,2},{4,5}};

    for(int i = 0 ; i < std::size(t); i++){
        std::cout << to_str(t[i]) << std::endl; //the output value is a string
    }

    for(int i = 0 ; i < std::size(t) ; i++){ 
        std::cout << std::get<0>(t[i]) << " " << std::get<1>(t[i]) << std::endl; //the output value is an int
    }
}