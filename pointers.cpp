#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter value of x"<<endl;
    cin>>x;
    int *p=&x;
    cout<<"Adress of x is "<<p<<endl;
    cout<<"Value of x using pointer "<<*p<<endl;
    cout<<"Value of x using x is "<<x;
}
