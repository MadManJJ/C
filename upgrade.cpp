#include <iostream>

std::string G[] = {"F" , "D" , "D+", "C", "C+", "B", "B+", "A", "A"};
std::string upgrade(std::string g){
    for(int i = 0 ; i < 9 ; i++){
        if(g == G[i]){
            return G[i+1];
        }
    }
    return g; //if they input grade that don't match
}

int main() {
    int n;
    std::cout << "hello" << std::endl;
    std::cin >> n;
    std::pair<std::string , std::string> grades[n]; //doesn't work with older version of GCC I choose to disable red underline (It's about dynamic memory array can't have the number of element at runtime it need to be a constant)
    std::string sid,grade;
    for(int i = 0; i < n ; i++){
        std::cin >> sid >> grade;
        grades[i] = std::make_pair(sid,grade);
    }
    std::cout << "Hello1" << std::endl;
    std::string x;
    while(std::cin >> x){ //
        std::cout << "Hello2" << std::endl;
        for(int i = 0 ; i < n ; i++){
            if(grades[i].first == x){
                grades[i].second = upgrade(grades[i].second);
                break; // break from for loop and continue to do while loop
            }
        }
    }
    std::cout << "Hello3" << std::endl;
    for(int i= 0 ; i<n ; i++){
        std::cout << grades[i].first << ' ' << grades[i].second << std::endl;
    }



   
}
