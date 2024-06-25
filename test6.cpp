#include <iostream>
#include <string>
#include <vector>

void triangle(int n){
    int row = 1;
    while(row <= n) { // n = 5
        int col = 1;
        int num_space = row - 1 ; 
        int num_star = n - num_space; 
        while(col <= n){
            if(col <= num_star){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
            col++;
        }
        std::cout << std::endl;
        row++;
    }  
}

void printTriangle(int n) {
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }
        for (int k = 0; k < i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void printPyramid(int n) {
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = i; j <= n-1; j++) {
            std::cout << " ";
        }
        // Print asterisks
        for(int j = 1; j <= (2*i - 1); j++) {
            std::cout << "*";
        }
        // Move to the next line
        std::cout << std::endl;
    }
}

void printPyramid2(int n ){
    int row = 0;
    while (row++ < n){
        int col = n - row;
        while(col--){
            std::cout << " ";
        }
        col = row*2-1;
        while(col--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void triangle01(int n){
    for(int row = 1; row <= n ; row++){ //row
        for(int i = 1 ; i <= row - 1 ; i++){
            std::cout << " ";
        }
        for(int j = 1 ; j <= n - row + 1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        bool found;
        for(int i = 0 ; i < sizeof(nums)/sizeof(nums[0]) ; i++){
            for(int j = i + 1 ; j < sizeof(nums)/sizeof(nums[0]) ; j++){
                if(nums[i] + nums[j] == target){
                    found = true;
                    return {nums[i], nums[j]};
                }
                
            }   
        }
        return {};
    }
};


int main(){
    Solution sol;
    std::vector<int> nums = {15, 22, 13, 14};
    std::vector<int> result = sol.twoSum(nums, 71);
    if(result.empty() == true){
            std::cout << "No answer" ;
        }
    for(int i = 0 ; i < result.size() ; i++){
        std::cout << result[i] << std::endl;
    }
    
}