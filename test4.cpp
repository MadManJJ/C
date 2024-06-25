#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <cmath>
int main(){
    std::string s, s2;
    char c;
    std::cout << "enter string: ";
    std::cin >> s;
    std::cout << "enter char: ";
    std::cin >> s2;
    c = s2[0];
    int i = 0, pos;
    bool found = false;

    while (i < s.length()){
        if(s[i] == c){
            found = true;
            pos = i;
            std::cout << "checked at " << i << '\n';
            break;
        }
        std::cout << "checked at " << i << '\n';
        i++;
    }
    
    if(found == true){
        std::cout << "found " << c << " at " << pos << '\n';
    }
    else{
        std::cout << "Not found";
    }
}   
