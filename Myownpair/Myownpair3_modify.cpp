#include <iostream> //modify second before first
#include <set>
#include <vector>

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
            return ((second < other.second) || (second == other.second && first < other.first)); // < check second element before checkin first element
        }
    };
}

int main(){

    std::vector<CP::pair<std::string,int>> v{};
    v.push_back({"soar" , 5});
    CP::pair<int,int> p(15,5);
    for(const auto &elem : v){
        std::cout << elem.first << " " << elem.second << '\n';
    }
    std::cout << p.second;
    return 0;
}