///Taylor series using horner rule

#include<iostream>

using namespace std;

double taylor(int x, int n) {
    static double s = 1.0;
    if(n == 0) return s;
    s = 1 + s*x/n;
    return taylor(x, n-1);
}

int main() {
    cout<<taylor(1,10);
    return 0;
}