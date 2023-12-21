#include<iostream>

using namespace std;


/////////////Tail Recursion///////////// 
// void func(int n) {
//     if(n > 0) {
//         cout<<n<<endl; ////3, 2, 1
//         func(n-1);
//     }
// }

// int main() {
//     int x = 3;
//     func(x);
//     return 0;
// }


//////////Head Recursion
void func(int n) {
    if(n > 0) {
        func(n-1);
        cout<<n<<endl;
    }
}

int main() {
    int x = 3;
    func(x);
    return 0;
}