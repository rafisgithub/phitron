#include<bits/stdc++.h>

using namespace std;

int main() {

<<<<<<< HEAD
    // string s = "Rafi ";
    // s += "Ahmed";

    // s.clear();

    // if(s.empty() == true){
    //     cout << "Empty\n";
    // }else{
    //     cout << "Not Empty\n";
    // }
    // cout << s;

    // s.resize(15,'X');
    // cout << s <<endl;


    
    string s = "Hello world";
    // s.replace(6,0,"rafi ");

    // s.insert(5,"Rafi");
    s.erase(5,6);
   

    cout << s; 

=======
    string s;
    cin >> s;

    for(string::iterator it = s.begin();it<s.end();it++){
        cout << *it <<endl;
    }
>>>>>>> 72c3d6903484838a1c6ebdece41a1cd7b7859fb2
    return 0;
}