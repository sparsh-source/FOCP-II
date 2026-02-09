#include<iostream>
using namespace std;
class vcl{
    char v;
    public:
    void input(){
        cout<<"enter the symbol :";
        cin>>v;
    }
    void check(){
        if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u' || v=='A'|| v=='E' || v=='I' || v=='O' || v=='U'){
            cout<<"input is vowel";
        }
        else if((v >= 'a' && v <= 'z') || (v >= 'A' && v <= 'Z')){
            cout<<"input is consonant";
        }else if (v>='0' && v<='9'){
            cout<<"input is a number";
        }else{
            cout<<"input is special";
        }
    }
};
int main(){
    vcl obj;
    obj.input();
    obj.check();
    return 0;
}    