#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }


    long long int sum_of_before_position = 0;
    long long int sum_of_after_position = 0;



    for(int position=0; position<n;position++) {

        for(int sum_of_before_position_index=0; sum_of_before_position_index<position;sum_of_before_position_index++) {
            sum_of_before_position += arr[sum_of_before_position_index];
        }

        for(int sum_of_after_position_index=position+1; sum_of_after_position_index<n;sum_of_after_position_index++) {
            sum_of_after_position += arr[sum_of_after_position_index];
        }
        cout << sum_of_before_position << " " << sum_of_after_position <<endl;
        if(sum_of_after_position == sum_of_before_position){
            cout << position <<endl;
            break;
        }

            sum_of_before_position = 0;
            sum_of_after_position = 0;

    }
    
    return 0;
}