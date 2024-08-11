#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

std::string longestCommonPrefix(std::vector<std::string>& v) {
        std::string ans="";
        std::sort(v.begin(),v.end());
        int n=v.size();
        std::string first=v[0],last=v[n-1];
        for(int i=0;i<std::min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }

int main()
{
    std::vector<std::string> v = {"prez","prezadsadasdsadsa","prezzzzz"};
    std::vector<std::string> v2 = {"vva","vv"};
    std::string x = longestCommonPrefix(v);
    for(std::string a : v){
        std::cout << a << " ";
    }
    std::cout << std::endl;
    std::cout << x;
}