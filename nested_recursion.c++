#include<iostream>

using namespace std;

int func(int n) {
    if(n > 90) 
        return n-10;
    return func(func(n+11));
}

int main() {
    int r = 95;
    cout<<func(r)<<endl;
    return 0;
}