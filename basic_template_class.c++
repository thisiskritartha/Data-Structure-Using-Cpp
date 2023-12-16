#include<iostream>

using namespace std;

template<class T>
class Arthmetic{
    private:
    T a;
    T b;

    public:
    Arthmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arthmetic<T>::Arthmetic(T x, T y) {
    this->a = x;
    this->b = y;
}

template<class T>
T Arthmetic<T>:: add(){
    return a+b;
}

template<class T>
T Arthmetic<T>::sub(){
    return a-b;
}

int main() {
    Arthmetic<int> arr(10, 5);
    cout<<arr.add()<<endl;

    Arthmetic<float> a(10.4, 4.4);
    cout<<a.sub()<<endl;
    return 0;
}