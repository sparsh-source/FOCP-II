#include<iostream>
using namespace std;
class disc{
    int ino,quant,amount,total,discounted;
    float discount;
    public:
    void input(){
        cout<<"enter item no :";
        cin>>ino;
        cout<<"enter quantity :";
        cin>>quant;
        cout<<"enter amount :";
        cin>>amount;
    }
    void disco(){
        total=amount*quant;
        discount=total*20/100;
        discounted=total-discount;
        cout<<"total :"<<total;
        cout<<"\ntotal after discount :"<<discounted;
    }
};
int main(){
    disc object;
    object.input();
    object.disco();
}