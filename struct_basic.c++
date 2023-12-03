#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char c;
};

//////////Global Declaration///////////
// struct Rectangle {
//     int length;
//     int breadth;
// } r1, r2;
//struct Rectangle r1, r2;

 int main() {
    struct Rectangle r1 = {10, 2};
    // cout<<sizeof(r1); // without char 8Bytes
    //cout<<sizeof(r1); //with char 12Byte not 9Byte because of memory padding.
    cout<<"Area is: "<<r1.length * r1.breadth<<endl;
    return 0;
 }