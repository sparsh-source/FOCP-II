#include<iostream>
using namespace std;
class win{
    int a,b,c;
    public:
    void accept(){
        cout<<"enter score 1 :";
        cin>>a;
        cout<<"enter score 2 :";
        cin>>b;
        cout<<"enter score 3 :";
        cin>>c;
    }
    void winner(){
        if(a>b && a>c){
            cout<<"a is greatest :";
        }
        else if(b>a && b>c){
            cout<<"b is greatest";
        }else{
            cout<<"c is greatest";
        }
    }
};
    int main(){
        win obj;
        obj.accept();
        obj.winner();
        return 0;
    }