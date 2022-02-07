// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char d_out = 1<<2;
    
    std::bitset<3> x(d_out);
    std::cout << "dout awal: " << x << '\n';
    
    bool temp = d_out & (1<<2);
    std::bitset<3> t(temp);
    std::cout << "temp awal: " << t << '\n';
    
    d_out = d_out << 1;
    
    std::bitset<3> z(d_out);
    std::cout << "dout: " << z << '\n';
    
    temp = temp >> 2;
    std::bitset<3> c(temp);
    std::cout << "temp setelah digeser: " << c << '\n';
    
    
    d_out = d_out | temp;

    std::bitset<3> y(d_out);
    std::cout << "dout: " << y << '\n';
    
    return 0;
}