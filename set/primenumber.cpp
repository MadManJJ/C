#include <iostream>
#include <set>
#include <cmath>


std::set<int> eratosthenes(int N){
    std::set<int> s;
    for(int i=2 ; i<=N ; i++){
        s.insert(i);
    }
    for(int i=2 ; i < sqrt(N) ; i++){
        for(int k=2*i; k <=N ; k+=i){
            s.erase(k);
        }
    }

    return s;
}

int main(){
    std::set<int> s = eratosthenes(50);
    for(int e : s){
        std::cout << e << " ";
    }

}