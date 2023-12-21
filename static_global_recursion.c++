#include<iostream>

using namespace std;

//////Using Local Variable(Copy of the variable is created everytime the call is made): Output = 15
// int func(int n) {
//     if(n > 0) {
//         return func(n-1) + n;
//     }
//     return 0;
// }

//////Using Static variable(It maintain the single copy of it): Output = 25
// int func(int n) {
//     static int x = 0;
//     if(n > 0) {
//         x++;
//         return func(n-1) + x;
//     }
//     return 0;
// }


/////////Using Global variable(It also maintain the single copy of variable): Output =25
int x = 0;
int func(int n) {
    if(n > 0) {
        x++;
        return func(n-1) + x;
    }
    return 0;
}

int main() {
    int x = 5;
    cout<<func(x)<<endl;
    return 0;
}