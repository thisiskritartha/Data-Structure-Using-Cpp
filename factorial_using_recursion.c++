/////Factorial of n using recursion

#include<iostream>

using namespace std;

int Factorial(int n){
    if(n > 1) {
        return Factorial(n-1) * n;
    }
    return 1;
}

int main() {
    cout<<Factorial(4)<<endl;
    return 0;
}