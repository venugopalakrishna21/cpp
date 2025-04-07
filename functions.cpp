#include<iostream>
using namespace std;

void checknum(int b) {
    if(b%2==0) {
        cout<<"Entered number is Even";
    }
    else {
        cout<<"Odd number";
    }
}
int main() {
    int a;
    cout<<"Enter number\n";
    cin>>a;
    checknum(a);
}
