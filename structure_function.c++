#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

void area(Rectangle r) {
    cout<<r.breadth *r.length<<endl;
}

void changeLength(Rectangle *r, int l) {
    r->length = l;
}

int main() {
    Rectangle r;
    initialize(&r, 10, 20);
    area(r);
    changeLength(&r, 100);
    cout<<r.length<<endl;
    return 0;
}