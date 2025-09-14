#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int t;cin>>t;
    while(t--){
        int x,n;cin>>x>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            /* code */
            if(i%2==1) sum+=x;
            else sum-=x;
        }
        cout<<sum<<endl;
    }

    return 0;
}
