#include <algorithm>
#include <vector>
#include <iostream>

class Kata{
public:
    std::vector<int> sortArray(std::vector<int> array){
        std::vector<int> oddNums;
        std::copy_if(array.begin(), array.end(), std::back_inserter(oddNums), [] (int num) {return num & 1;});
        std::sort(oddNums.begin(), oddNums.end());
        for (int i = 0, j = 0; i < array.size(); i++)
            if (array[i] & 1)
                array[i] = oddNums[j++];
        return array;
    }
    Kata() = default;;
};

int main(){
    Kata* kat = new Kata();
    std::vector<int> data = {5, 3, 2, 8, 1, 4};
    data = kat->sortArray(data);
    std::for_each(data.begin(), data.end(), [] (int num) {std::cout << num;});
    delete kat;
    return 0;
}