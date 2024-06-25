#include <iostream>
#include <map>



int main(){
    std::map<int,std::string> m ;
    m[1] = "spark";
    m[2] = "sparky";
    int b = 15;
    std::map<int,std::string>::iterator it;
    if( m.find(b) != m.end()){
        std::cout << "there is k";
    }
    else{
        std::cout << "there no k";
    }

    // if(m[k] != ""){
    //     std::cout << "exist";
    // }
    // else{
    //     std::cout << "not exist" << std::endl;
    // }
    // std::cout << m[k];
}