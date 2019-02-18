#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>


std::string highestScoringWord(const std::string &str)
{
    std::istringstream iss(str);
    std::vector<std::string> tokens{std::istream_iterator<std::string>{iss},
                               std::istream_iterator<std::string>{}};

    int max = 0;
    std::string res;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(auto s: tokens){
        int i = 0;
        for(auto c: s)
            i += alphabet.find(c) + 1;
        if(i > max) {
            res = s;
            max = i;
        }
    }
    return res;
}

int main(){
    std::cout << highestScoringWord("man i need a taxi up to ubud");
    return 0;
}