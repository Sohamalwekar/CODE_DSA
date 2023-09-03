#include <iostream>
using namespace std;

int main(){
    int A=11;
    int count=0;
    while(A!=0){
    A=A&(A-1);
    count++;
    }
    cout<<count;
    return 0;
}
