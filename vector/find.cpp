#include <iostream>
#include <vector>
#include <algorithm>

void find1(std::vector<int> v ,int x);
void find2(std::vector<int> v , int x);

int main(){
    std::vector<int> v = {3,4,1,5,6,1,1,1,3,1,9,1};
    find1(v,1);
}

void find1(std::vector<int> v ,int x){ // I copy it
    auto b = v.begin();
    auto e = v.end();
    auto it = b-1;
    bool found = false;
    while((it = std::find(++it , e ,x)) != e){
        std::cout << "Found at index " << (it - b) << std::endl;
        found = true;
    }

    if(found == false){
        std::cout << "Not found";
    }
}

void find2(std::vector<int> v , int x){ // I did it myself
    auto b = v.begin();
    auto e = v.end();
    for(auto it = b ; it != e ; ){
        if(std::find(it,e,x) != e){
            it = std::find(it,e,x);
            std::cout << "Find at index " << (it-b) << std::endl;
            it++;
        }
        else{
            it++;
        }
        
    }
}
