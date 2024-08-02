#include <iostream> //sort in an ascending order
#include <set>
#include <vector>
#include <algorithm>
namespace CP{
    template<typename T1 , typename T2>
    class pair{
        public:
        T1 first;
        T2 second;
        
        pair() : first() , second(){}
        pair(const T1 &a , const T2 &b) : first(a) , second(b) {}
    
    };
}

int main(){
    std::vector<CP::pair<int,std::string>> v{{3,"a"},{3,"s"}};
    for(auto a : v){
        std::cout << a.first << " " << a.second << std::endl;
    }

    CP::pair<int,int> p(5,1);
    std::cout << p.first << p.second;

    return 0;
}