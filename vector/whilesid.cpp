#include <iostream>
#include <vector>

int main(){
    std::vector<std::pair<std::string , std::string>> grades;
    std::string sid ,grade;
    while(std::cin >> sid){
        std::cin >> grade;
        grades.push_back(std::make_pair(sid,grade));
    }
    for(int i=0; i<std::size(grades) ; i++){
        std::cout << "Studen ID is: " << grades[i].first << " and their grades are " << grades[i].second << std::endl;
    }
}