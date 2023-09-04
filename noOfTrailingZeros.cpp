#include<iostream>
using namespace std;

int main(){
    int num,temp=0;
    cout<<"Enter number:";
    cin>>num;
    for(int i=5;i<=num;i=i*5){
        temp=temp+num/i;
    }
    cout<<temp;
    return 0;
}