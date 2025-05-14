#include <iostream>
using namespace std;

int count = 0;

int trickyRec(int n)
{
    if (n <= 0)
        return 1;
    if (n % 2 == 0)
        count++;
    return trickyRec(n - 1) + trickyRec(n - 2);
}

int main()
{  
    cout << "Result: " << trickyRec(5) << endl;
    cout << "Count: " << count << endl;
    return 0;
}