#include<iostream>

using namespace std; 

//////////Pass by value method//////////////////
// int add(int a, int b) { //formal Parameter //Function Definition
//     int c = a + b;
//     return c;
// }

// int main() {
//     int num1, num2, sum;
//     num1 = 10;
//     num2 = 20;
//     sum = add(num1, num2); //Actual Parameter //Function Call
//     cout<<sum;
//     return 0;
// }


///////////Call by address/////////////////
// void swap(int *a, int *b) {
//     //Using third Variable
//     // int temp;
//     // temp = *a;
//     // *a = *b;
//     // *b = temp; 

//     //Without using third Variable
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// int main() {
//     int x = 10, y =20;
//     swap(&x, &y);
//     cout<<x<<endl<<y<<endl;
//     return 0;
// }


///////Call by reference//////////
void swap(int &a, int &b) {
    a = a + b;
    b = a -b;
    a = a - b;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout<<x<<endl<<y<<endl;
    return 0;
}