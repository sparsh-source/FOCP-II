#include<iostream>
using namespace std;
class mySwap{
    int temp,a,b;
    public:
    void input(){
        cout<<"enter value of a :";
        cin>>a;
        cout<<"enter value of b :";
        cin>>b;
    }
    void swapping(){
        temp=a;
        a=b;
        b=temp;
        cout<<"swapped value of a :"<<a;
        cout<<"\nswapped value of b :"<<b;
    }
};
int main(){
    mySwap obj;
    obj.input();
    obj.swapping();
    return 0;
}