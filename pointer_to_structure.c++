#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Rectangle r = {10, 20};
    Rectangle *p;
    p = new Rectangle;

    p->breadth = 100;
    p->length = 200;

    // cout<<r.length<<endl; //10
    // cout<<r.breadth<<endl; //20

    cout<<p->length<<endl; //200
    cout<<p->breadth<<endl; //100
    return 0;
}