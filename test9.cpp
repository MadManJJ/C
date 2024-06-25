#include <iostream>  // Include the header for input-output operations

int main(){
    int arr[] = {1, 2};
    std::string stu[] = {"soark" , "spark"};
    std::string s = "sps";
    for(char name : s){
        std::cout << name << std::endl;
    }
    return 0;  // Return 0 to indicate successful completion
}
