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
    
        bool operator==(const pair<T1,T2> &other) const {
            return (first == other.first && second == other.second);
        }

        bool operator<(const pair<T1,T2> &other) const {
            return !(((first < other.first) || (first == other.first && second < other.second)));
        } // add ! at the start from < to > sort in an ascending order
    };
}

int main(){
    std::vector<CP::pair<int,std::string>> v{{3,"a"},{3,"s"}};

    std::sort(v.begin() , v.end());

    for(const auto &elem : v){
        std::cout << elem.first << " " << elem.second << std::endl;
    }

    return 0;
}