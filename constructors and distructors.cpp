#include<iostream>
using namespace std;
class area {
    private:
    int l,b;
    public:
    area() {
        cout<<" hi venu"<<endl;//contructor anedi class ni call chesina prethi sari run avvudi and
        // idhi public lone use chestam and manam values denilo assign chesukovacchu
    }
    ~area() {
        cout<<"\nbye venu";                //distructor anedi class end ayyaka run avvudi
    }
    void setlength() {
        cout<<"enter lenth and breadth"<<endl;
        cin>>l>>b;
    }
    int getarea() {
        return l*b;
    }

};
int main() {
    area a1;
    a1.setlength();
    a1.getarea();
    cout<<"area is "<<a1.getarea();
}
