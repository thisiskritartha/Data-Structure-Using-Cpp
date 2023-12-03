#include<iostream>

using namespace std;

int main() {
    int a[10] = {1, 1, 4, 5};
    //int -> 4Byte Size
    cout<<sizeof(a)<<endl;

    //For each loop in C++
    for(int i : a) { 
        cout<<i<<endl;
    }
    return 0;
}