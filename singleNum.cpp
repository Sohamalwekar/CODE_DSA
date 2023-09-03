#include<iostream>
#include<vector>  // Include the <vector> header
using namespace std;

int singleNumber(const vector<int> &A) {
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result ^ A[i];
    }
    return result;
}

int main() {
    vector<int> A = {1, 1, 2, 2, 3};
    cout << "Single Number is:"+singleNumber(A);
    return 0;
}
