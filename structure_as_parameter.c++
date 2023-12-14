#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

/////////As a parameter
// int  Area(Rectangle r1) {
//     return r1.length * r1.breadth;
// }

// int main(){
//     Rectangle r = {10, 20};
//     cout<<Area(r);
//     return 0;
// }

///////As a reference
// int  Area(Rectangle &r1) {
//     r1.breadth++;
//     r1.length++;
//     return r1.length * r1.breadth;
// }

// int main(){
//     Rectangle r = {10, 20};
//     cout<<Area(r)<<endl;
//     cout<<r.length<<endl;
//     return 0;
// }

////////As a pointer
int  Area(Rectangle *r1) {
    r1->breadth++;
    r1->length++;
    return r1->length * r1->breadth;
}

int main(){
    Rectangle r = {10, 20};
    cout<<Area(&r)<<endl;
    cout<<r.length<<endl;
    return 0;
}