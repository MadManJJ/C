#include <iostream>
#include <vector>

void insort_faster(std::vector<int> &v , int e){
    int left_index = 0;
    int right_index = std::size(v) - 1;
    int mid;
    while(left_index <= right_index){
        mid = (right_index + left_index) / 2;
        if(e > v[mid]){
            left_index = mid + 1;
        }
        else if(e < v[mid]){
            right_index = mid - 1;
        }
        else if(e == v[mid]){
            left_index = mid;
            break;
        }
    }
    v.insert(v.begin() + left_index , e);
}

void insort_slower(std::vector<int> &v , int e){
    auto it = v.begin();
    for(auto end = v.end(); it != end ; it++){
        if(*it >= e){
            break;
        }
    }
    v.insert(it , e);
}

int main(){
    std::vector<int> v = {5,7,8,9};
    insort(v,11);
    for(int e : v){
        std::cout << e << std::endl;
    }
    return 0;
}