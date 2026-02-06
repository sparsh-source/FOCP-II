#include<iostream>
using namespace std;
class average{
    int a,b,c;
    float average;
    public:
    void input(){
        cout<<"enter 1st number :";
        cin>>a;
        cout<<"enter 2nd number :";
        cin>>b;
        cout<<"enter 3rd number :";
        cin>>c;
    }
    void show(){
        average=(a+b+c)/3;
        cout<<"average is :"<<average;
    }
};
int main(){
    average obj;
    obj.input();
    obj.show();
    return 0;
}