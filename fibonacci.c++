////fibonacci series = 0 1 1 2 3 5 8 ....

#include<iostream>

using namespace std;

////Method 1 - Using Loop
// int fibo(int n) {
//     int t0 = 0;
//     int t1 = 1;
//     int sum = 0;
//     if(n<=1) return n;
//     for(int i=2; i<=n; i++) {
//         sum = t0 + t1;
//         t0 = t1;
//         t1 = sum;
//     }
//     return sum;
// }

/////Method 2 - Using recursion
// int fibo(int n){
//     if(n<=1) return n;
//     return fibo(n-1) + fibo(n-2);
// }

////Method 3 - Using memorization
int arr[10];
int fibo(int n){
    if(n<=1) {
        arr[n] = n; 
        return n;
        }
    if(arr[n-1] == -1) arr[n-1] = fibo(n-1);
    if(arr[n-2] == -1) arr[n-2] = fibo(n-2);
    arr[n] = arr[n-1] + arr[n-2];
    return arr[n-1] + arr[n-2];
}

int main() {
    for(int i=0; i<10; i++) arr[i] = -1;
    cout<<fibo(10);
    return 0;
}