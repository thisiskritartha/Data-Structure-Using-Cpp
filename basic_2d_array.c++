//////2D Array initialization

#include<iostream>

using namespace std;

int main() {
    ////Method 1
    //int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    ////Method 2
    // int *arr[3];
    // arr[0] = new int[4];
    // arr[1] = new int[4];
    // arr[2] = new int[4];

    ////Method 3
    int **arr;
    arr = new int*[3];
    arr[0] = new int[4];
    arr[1] = new int[4];
    arr[2] = new int[4];

    for(int i=0; i<4; i++) arr[0][i] = i;

    cout<<arr[0][2]<<endl;
    
    return 0;
}