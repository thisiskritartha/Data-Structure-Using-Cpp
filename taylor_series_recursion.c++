//Taylor series e^x = 1 + x/1! + x^2/2! + x^3/3! + .......

#include<iostream>

using namespace std;

double taylor(int x, int n) {
    static double p=1, f=1;
    double r;
    if( n == 1) return 1;
    
    r = taylor(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
    
}

int main() {
    cout<<taylor(2, 5)<<endl;
    return 0;
}