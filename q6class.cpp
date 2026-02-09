#include<iostream>
using namespace std;
class hrsys{
    int no,sal;
    float bonus,bonuss,net;
    public:
    void input(){
        cout<<"enter no of employees :"<<endl;
        cin>>no;
        for(int i=1;i<=no;i++){
            cout<<"enter basic salary of "<<i<<" employee "<<endl;
            cin>>sal;
            bone(i);
        }
    }
    void bone(int i){
        bonuss=sal*0.12;
        net=sal+bonuss;
        cout<<"bonus for employee "<<i<<" is "<<bonuss<<endl;
        cout<<"net salary for "<<i<<" is "<<net<<endl;
    }
};
    int main(){
        hrsys obj;
        obj.input();
        return 0;
    }
