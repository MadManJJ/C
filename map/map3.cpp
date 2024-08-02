#include <iostream>
#include <map>
#include <vector>

void tsort(std::vector<int> &v){
    std::map<int,int> m;
    for(auto e : v){
        auto it = m.find(e);
        if(it == m.end()){
            m[e] = 1;
        }else{
            m[e]++; // or ((*it).second)++;
        }
    }
    v.clear();
    for(auto &kv : m){
        while(kv.second--){
            v.push_back(kv.first);
        }
    }
}

void tsort2(std::vector<int> &v){
    std::map<int,int> m;
    for(auto e : v){
        auto it = m.find(e);
        if(it == m.end()){
            m[e] = 1;
        }else{
            ++m[e];
        }
    }
    v.clear();
    for(auto &kv : m){
        for(int i = 1 ; i <= kv.second; i++){
            v.push_back(kv.first);
        }
    }
}

int main(){
    std::vector<int> v = {1,4,5,4,4,5,5,5,1};
    tsort(v);
    for(int e : v){
        std::cout << e << " ";
    }
 
    return 0;
}