///Combination nCr = n!/(r! * (n-r)!)

#include<iostream>

using namespace std;

int comb(int n, int r) {
    if(r == 0 || r == n) return 1;
    return comb(n-1, r-1) + comb(n-1, r); //using pascal traingle
}

int main() {
    //n must be greater than r
    cout<<comb(5, 4);
    return 0;
}