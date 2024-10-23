#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
          cin>>arr[i];
        if(k==1 && !is_sorted(arr.begin(), arr.end()))
             cout<<"NO";
        else
          cout<<"YES";
    }
}
int main(){
    
}