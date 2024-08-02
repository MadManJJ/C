#include <iostream>
#include <set>

std::set<int> intersection1(std::set<int> &s1 , std::set<int> &s2){ //my way
    std::set<int> s;
    auto end1 = s1.end();
    end1--;
    auto end2 = s2.end();
    end2--;
    for(auto it1 = s1.begin() ; it1 != s1.end() && (*it1 <= *(end2)) ; it1++){ // (*it1 <= *(end2)) this is to make it faster by skipping when *it1 is more than the maximum of element in s2 mean that it won't check if the *it1 is more than the maximum of s2
        for(auto it2 = s2.begin() ; it2 != s2.end() && (*it2 <= *(end1)) ; it2++){
            if(*it1 == *it2){
                s.insert(*it1);
                break;
            }
            
            if(*it2 > *(end1)){
                break;
            }
        }
        if(*it1 > *(end2)){
            break;
        }
    }
    return s;
}

std::set<int> intersection2(std::set<int> &s1 , std::set<int> &s2){
    std::set<int> s;
    for(auto e : s1){
        if(s2.find(e) != s2.end()){
            s.insert(e);
        }
    }
    return s;
}

std::set<int> intersection3(std::set<int> &s1 , std::set<int> &s2){ // the best way (fastest and most efficient)
    std::set<int> s;
    auto it1 = s1.begin();
    auto e1 = s1.end();
    auto it2 = s2.begin();
    auto e2 = s2.end();
    while(it1 != e1 && it2 != e2){
        if(*it1 < *it2){
            it1++;
        }
        else if(*it2 < *it1){
            it2++;
        }
        else{ // if *it1 == *it2
            s.insert(*it1);
            it1++;
            it2++;
        }
    }
    return s;
}

void intersection4(std::set<int> &s1 , std::set<int> &s2){ // cut out the one that in s1 that not in s2 and return s1
    auto it1 = s1.begin();
    auto e1 = s1.end();
    auto it2 = s2.begin();
    auto e2 = s2.end();
    while(it1 != e1 && it2 != e2){
        if(*it1 < *it2){
            it1 = s1.erase(it1); // or you can use it1 = s1.erase(it1); (for both line because s1.erase return iterator that point to the one that next to the one that are erase)
        }
        else if(*it2 < *it1){
            it2++;
        }
        else{ // if *it1 == *it2
            it1++;
            it2++;
        }
    }
    while(it1 != e1){
        it1 = s1.erase(it1);
        // do not do this
        // s1.erase(it1);
        // it1++;
        // this lead to an undefined behavior because you 
        // When you erase an element from a set, the iterator pointing to that element becomes invalid. Therefore, incrementing an invalid iterator (it1++) leads to undefined behavior.
    }
}



int main(){
    std::set<int> s1 = {3,4,5,7,8,18,55,56,78,99,81,100};
    std::set<int> s2 = {4,6,7,5,9,8};
    std::set<int> answer1 = intersection1(s1,s2);
    std::set<int> answer2 = intersection2(s1,s2);
    std::set<int> answer3 = intersection3(s1,s2);

    std::set<int> s3 = {3,4,5,7,8,18,55,56,78,99,81,100};
    std::set<int> s4 = {4,6,7,5,9,8};
    intersection4(s3,s4);

    // for(int e : answer1){
    //     std::cout << e << std::endl;
    // }
    // std::cout << std::endl;

    // for(int e : answer2){
    //     std::cout << e << std::endl;
    // }
    // std::cout << std::endl;

    // for(int e : answer1){
    //     std::cout << e << std::endl;
    // }
    // std::cout << std::endl;

    for(int e : s3){
        std::cout << e << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

