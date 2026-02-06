#include<iostream>
using namespace std;
class areaa{
    float areea;
    int a;
public:
    void area();
    void input();
};
void areaa::input(){
    cout<<"enter radius of circle :";
    cin>>a;
}
void areaa::area(){
    areea=3.14*a*a;
    cout<<"area of circle is :"<<areea;
}
int main(){
    areaa obj;
    obj.input();
    obj.area();
}