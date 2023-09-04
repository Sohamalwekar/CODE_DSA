#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec={5,4,1,4,3,5,1,2};
    int result=0;
    for(int i=0;i<vec.size();i++){
        result=result^vec[i];
    }
    int temp=result;
    for(int i=0;i<vec.size();i++){
        if(vec[i]%2==0){
            vec1.push_back(vec[i]);
        }
        else{
            vec2.push_back(vec[i]);
        }
    }
    for(int i=0;i<vec2.size();i++){
       temp=temp^vec2[i];
    }
    int temp2=result^temp;
    cout<<"One element is:"<<temp;
    cout<<endl;
    cout<<"And another is:"<<temp2;
    return 0;
}