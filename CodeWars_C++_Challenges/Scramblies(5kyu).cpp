#include <algorithm>
#include <iostream>

bool scramble(const std::string& s1, const std::string& s2){
    std::string s = s1.substr(0);
    std::string _s = s2.substr(0);
    std::sort(s.begin(), s.end());
    std::sort(_s.begin(), _s.end());
    return std::includes(s.begin(), s.end(), _s.begin(), _s.end());
}

int main(){
    std::cout << scramble("tcesaste", "test");
    return 0;
}