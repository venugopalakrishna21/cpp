#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {  // Fill in the blanks!
    a=a+b;
    b=a-b;
    a=a-b;

}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: " << x << " " << y << endl;
    
    swapNumbers(x,y);  // Fill in the blanks!

    cout << "After swap: " << x << " " << y << endl;
    return 0;
}
