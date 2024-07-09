#include <iostream>
#include <set>

namespace CP{
    template<typename T1 , typename T2>
    class pair{
        public:
        T1 first;
        T2 second;
        
        pair() : first() , second(){}
        pair(const T1 &a , const T2 &b) : first(a) , second(b) {}
    
        bool operator==(const pair<T1,T2> &other) const {
            return (first == other.first && second == other.second);
        }

        bool operator<(const pair<T1,T2> &other) const {
            return ((first < other.first) || (first == other.first && second < other.second));
        }
    };
}
int main(){
    CP::pair<int , std::string> p1,p2;
    p1.first = 15;
    p1.second = "spark";
    p2=p1;
    if(p1 == p2){
        std::cout << "they are equal" << std::endl;
    }
    if(p1 < p2){
        std::cout << "<";
    }else{
        std::cout << "wtf" << std::endl;
    }
    CP::pair<int , bool> pair1(1 , true);
    std::set<CP::pair<int , bool>> a ;
    a.insert({15,false});
    a.insert({12,true});
    for(const auto &elem : a){
        std::cout << elem.first << " " << elem.second  << std::endl;
    }
    

    for(auto it = a.begin() ; it != a.end() ; it++){
        std::cout << it->first << " " << it->second << std::endl;
    }
}