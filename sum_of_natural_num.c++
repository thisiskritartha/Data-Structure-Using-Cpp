////Sum of n natural number using recursion
//formula = n*(n+1) / 2

#include<iostream>

using namespace std;

int sum(int n) {
    if(n>0) {
        return n + sum(n-1);
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}