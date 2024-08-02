#include <iostream>
#include <map>
#include <vector>

//2110104 std::map 52:41/58:51

void phonebook1(){
    std::map<std::string,std::vector<std::string>> phonebooks;
    std::string name, phone_no;
    while(std::cin >> phone_no >> name){
        if(phonebooks.find(name) == phonebooks.end()){
            phonebooks[name] = std::vector<std::string>({phone_no});
        }
        else{
            phonebooks[name].push_back(phone_no);
        }
    }

    for(auto kv : phonebooks){
        std::cout << kv.first << ": ";
        for(auto phone_no : kv.second){
            std::cout << phone_no << ' ';
        }
        std::cout << std::endl;
    }
}

void phonebook2(){
    std::map<std::string,std::vector<std::string>> phonebooks;
    std::string name, phone_no;
    while(std::cin >> phone_no >> name){
        if(phonebooks.find(name) == phonebooks.end()){
            phonebooks[name] = std::vector<std::string>();
        }
        phonebooks[name].push_back(phone_no);
    }

    for(auto kv : phonebooks){
        std::cout << kv.first << ": ";
        for(auto phone_no : kv.second){
            std::cout << phone_no << ' ';
        }
        std::cout << std::endl;
    }
}

int main(){
    phonebook2();  
}