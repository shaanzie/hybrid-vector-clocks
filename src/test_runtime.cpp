#include<iostream>
#include<math.h>

using namespace std;

void one_pos(int);
int main()
{
    int num = 0;
    num = num | 0b1111;
    cout << num << endl;
    one_pos(num);
}

void one_pos(int num){
    int n = num;
    while(n>0){
        int pos = log2((~(n ^ (~(n - 1))) + 1) >> 1);
        std::cout << pos << std::endl;
        n = n & (n-1);
    }
}