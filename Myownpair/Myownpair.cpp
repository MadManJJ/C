#include <iostream>
#include <set>
#include <vector>

#ifndef CP_pair
#define CP_pair
namespace CP{
    template<typename T1 , typename T2>
    class pair{
        public:
            T1 first;
            T2 second;

            pair() : first() , second() {}
            pair(const T1 &a , const T2 &b) : first(a) , second(b) {}
            // it's the same as :
            // pair(const T1 &a , const T2 &b){
            //     first = a;
            //     second = b;
            // }

            bool operator==(const pair<T1,T2> &other){
                return (first == other.first && second == other.second);
            }

            bool operator<(const pair<T1,T2> &other) const { // needed const for it ***********************
                return ((first < other.first) || (first == other.first && second < other.second));
            }

            bool operator!=(const pair<T1,T2> &other){
                return ((first != other.fist) || (second != other.second));
            }

            bool operator>=(const pair<T1,T2> &other) const{
                return ((first > other.first) || (first == other.first && second > other.second)) || ((first == other.first && second == other.second));
            }

            bool operator<=(const pair<T1,T2> &other) const{
                return ((first < other.first) || (first == other.first && second < other.second)) || ((first == other.first && second == other.second));
            }
    };
    
}
#endif


int main(){
    CP::pair<int , int> p1(15 , 1);
    CP::pair<int , int> p2(15 , 6);
    if(p1 <= p2){
        std::cout << "yep" << '\n';
    }else{
        std::cout << "no" << '\n';
    }

    std::set<CP::pair<int,int>> s;
    s.insert({1,15});
    // std::cout << (*s.begin()).first;

    std::vector<CP::pair<int , std::string>> v;
    v.push_back({12,"pork"});
    v.push_back({15,"spark"});

    std::set<int> s2;
    s2.insert(5);
    s2.insert(15);

    std::set<int> s3 = {1,5,8};
    for(const auto &elem : v){
        std::cout << elem.first << " " << elem.second << std::endl;
    }
    std::cout << (*v.begin()).first  << std::endl;
    std::cout << (*(v.begin()+1)).first;
    return 0;
}