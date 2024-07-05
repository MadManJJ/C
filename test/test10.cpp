#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter " ; std::cin >> name;
    bool unique = true;
    for(int i = 0 ; i < name.size() ; i++){
        for(int j = i+1 ; j < name.size() ; j++){
            if(name[i] == name[j]){
                unique = false;
                break;
            }
        }
    }

    if(unique == true){
        std::cout << "It's unique";
    }
    else{
        std::cout << "It's not unique";
    }
}