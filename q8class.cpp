#include<iostream>
using namespace std;
class ids{
    int N;
    public:
    void input(){
        cout<<"enter value of N :";
        cin>>N;
    }
    void loop(){
        for(int i=1;i<=N;i++){
            if(i%3==0){
                cout<<i<<"-->>BUZZ"<<endl;
            }
            else if(i%5==0){
                cout<<i<<"-->>FUZZ"<<endl;
            }
            else if(i%5==0 && i%3==0){
                cout<<i<<"-->>BUZZ AND FUZZ"<<endl;
            }else{
                cout<<i<<"-->>IS INVALID"<<endl;
            }
        }
    }
};
int main(){
    ids obj;
    obj.input();
    obj.loop();
    return 0;
}