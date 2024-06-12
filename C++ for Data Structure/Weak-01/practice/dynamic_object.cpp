#include<bits/stdc++.h>

using namespace std;

class Cricketer{
    public:
    int jersey_no = 20;
    char country[6] = "India";
};

int main(){
   Cricketer* dhoni = new Cricketer;
   Cricketer* kohli = new Cricketer;
//    cout << kohli->jersey_no; 
*kohli = *dhoni;
   delete dhoni; 
cout << kohli->jersey_no; 
   return 0;
}
