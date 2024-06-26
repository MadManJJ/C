#include <iostream>

int main(){
    std::string hay,needle;
    int b;
    std::cout << "Enter string: " ; std::getline(std::cin, hay);
    std::cout << "Enter another: " ; std::getline(std::cin, needle);
    std::cout << "Enter starting position: " ; std::cin >> b;
    int pos;
    bool found = false;
    while (b <= hay.length() - needle.length()){
        int i = 0 ;
        bool match = true;
        while(i < needle.length() && b+i < hay.length()){
            if(needle[i] != hay[b+i]) {
                match = false;
                break;
            }
            i++;
        }
        if(match  && i == needle.length()){
            found = true;
            pos = b;
            break;
        }
        b++;
    }
    if (found == true){
        std::cout << "Found at " << pos << std::endl;

    }else{
        std::cout << "Can't find " << needle << " in " << hay <<std::endl;
    }

    std::cout << "helo";
    std::cout << "new-branch";




}
