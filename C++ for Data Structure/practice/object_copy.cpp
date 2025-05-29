#include<bits/stdc++.h>

using namespace std;

class Cricketer{

    public:

        int jersey_no;
        string country;
};


int main() {


    Cricketer* dhoni = new Cricketer;
    Cricketer* kohli  = new Cricketer;

    dhoni->jersey_no = 12;
    dhoni->country = "India";

    kohli->country = dhoni->country;
    kohli->jersey_no = dhoni->jersey_no;

    cout << kohli->country <<" " << kohli->jersey_no <<endl;



    return 0;
}