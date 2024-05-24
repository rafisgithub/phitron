#include<bits/stdc++.h>

using namespace std;
class Human{
    public:
        string name;
        string bg;
        string color;

      void  printfhuman(string name,string bg,string color){
            this->name = name;
            this->bg =  bg;
            this->color = color;
            cout<<name<<endl<<bg<<endl<<color<<endl;
        }
};
int main(){
    Human rafi;
    cin>>rafi.name;
    cin>>rafi.bg;
    cin>>rafi.color;
rafi.printfhuman(rafi.name,rafi.bg,rafi.color);
    return 0;
}