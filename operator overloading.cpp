#include<iostream>
using namespace std;

class complex {
    private:
    int real,imag;
    public:
    complex() {

    }
    complex operator +(complex &com) {
        complex ans;
        ans.real=real+com.real;
        ans.imag=imag+com.imag;
        return ans;
    }
    void assign(int r,int i) {
        real=r;
        imag=i;
    }
    void print() {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main() {
    complex c1,c2,c3;
    c1.assign(5,7);
    c2.assign(10,3);
    c3=c1+c2;
    c1.print();
    c2.print();
    c3.print();
}
