#include <iostream>

int strStr(std::string haystack, std::string needle) {
        for(int i = 0; i <= haystack.length()-needle.length() && haystack.length()>=needle.length() ; i++){
            bool found = true;
            std::cout << "pass";
            for(int j = 0 ; j < needle.length(); j++){
                if(haystack[i + j] != needle[j]){
                    found = false;
                    break;
                }
            }
            if(found == true){
                return i;
            }
        }
        return -1;
    }

int strStr2(std::string haystack, std::string needle) {
        int h = haystack.length();
        int n = needle.length();
        if(n > h){
            return -1;
        }
        for(int i=0 ; i < h ; i++){
            int k = i;
            int j;
            for(j=0; j < n && k < h ;j++,k++){
                if(haystack[k] != needle[j]){
                    break;
                }
            }
            if(j == n){
                return i;
            } 
        }
        return -1;

    }


int strStr3(std::string hay , std::string needle){
    int h = hay.length();
    int n = needle.length();

    if(n > h) return -1;

    for(int i=0; i<h ; i++){
        int k = i;
        int j;
        for(j=0 ; j<n ;j++,k++){
            if(hay[k] != needle[j]){
                break;
            }

        }
        if(j == n){
            return i;
        }
    }
    return -1;

}
    

int main(){
    std::string a = "aa";
    std::string b = "aaaa";
    int x = strStr3(a ,b );
    std::cout << x;
}