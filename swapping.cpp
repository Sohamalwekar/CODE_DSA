#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=10;
    //swapping by ^ XOR op
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of b is:"<<b<<endl;

    return 0;
}