#include <iostream>

class ASum
{
public:
    static long long findNb(long long m){
        long long i = 1;
        while(m > 0){
            m -= i*i*i;
            i++;
        }
        return m == 0 ? --i : -1;
    }
};

int main(){
    std::cout << ASum::findNb(7);
    return 0;
}