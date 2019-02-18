#include <algorithm>
#include <iostream>

std::string no_space(std::string str) {
    str.erase(std::remove_if(str.begin(), str.end(), [](auto c){ return std::isspace(c);}), str.end());
    return str;
}

int main(){
    std::string s = "there is no spoon at all the time i have checked";
    std::cout << no_space(s);
    return 0;
}