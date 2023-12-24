/// m to the power n

#include<iostream>

using namespace std;

/////Method 1
// int exponential(int m, int n) {
//     if(n>0) {
//         return exponential(m, n-1) * m;
//     }
//     return 1;
// }

/////Method 2
int exponential(int m, int n) {
    if(n == 0) return 1;
    if(n%2 == 0) return exponential(m*m, n/2);
    else return m * exponential(m*m, (n-1) / 2);
}

int main() {
    cout<<exponential(5,3)<<endl;
    return 0;
}