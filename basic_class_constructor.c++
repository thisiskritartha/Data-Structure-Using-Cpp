#include<iostream>

using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    void changeLength(int l) {
        length = l;
        cout<<length<<endl;
    }
};

int main() {
    Rectangle r(10, 20);
    cout<<r.area()<<endl;
    r.changeLength(100);
    return 0;
}