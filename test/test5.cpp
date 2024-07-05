#include <iostream>


void RxCforloop(int r,int c){
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void RxCWhileloop(int r,int c){
    int i = 0;
    while(i < r){
        int j = 0;
        while(j < c){
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}

int main(){
    
    RxCforloop(4,3);
}

