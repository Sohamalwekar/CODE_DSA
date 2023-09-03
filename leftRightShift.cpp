#include<iostream>
using namespace std;
int main()
{
    //When we want to multiply any value by 2
    //Use Left shift
    cout<<(3<<1)<<endl;
    //When we want to divide a variable by 2
    //Use Right Shift
    int p,flag=0;
    cout<<"Enter Number:";
    cin>>p;
    for(int i=2;i<p>>1;i++){    //rightShifting binary num of p one time 
        if(p%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not A Prime Number";
    }
    return 0;
}