#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int &r = a; //Once r is assigned, it cannot be assigned to another variable
    cout<<r<<endl; //10
    cout<<r<<endl; //10

    r = 20;
    cout<<a<<endl; //20
    cout<<r<<endl; //20
    return 0;
}