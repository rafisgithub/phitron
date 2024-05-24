    #include<bits/stdc++.h>

    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int arr_size;
            int sum;
            cin>>arr_size>>sum;
            int arr[arr_size];
            for(int i=0;i<arr_size;i++){
                cin>>arr[i];
            }
            int flag = 0;
            for(int i=0;i<arr_size;i++){
                for(int j=i+1;j<arr_size;j++){
                  for(int k=j+1;k<arr_size;k++){
                    if(arr[i]+arr[j]+arr[k]==sum){
                        flag = 1;
                        break;
                    }
                    if(flag)
                    break;
                  }
                  if(flag)
                  break;
                }
            }
            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
        return 0;
    }