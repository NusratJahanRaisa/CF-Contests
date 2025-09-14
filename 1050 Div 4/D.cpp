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

        int n;cin>>n;

        long long sum=0;


        vector <int> odd;

        for(int i=0;i<n;i++){
            int num; cin>>num;

            if(num%2==1)
            odd.push_back(num);
            else
            sum+=num;
        }

        // cout<<"empty check ="<<odd.empty()<<endl;

        if(odd.empty()){
            cout<<0<<endl;
            continue;
        }

        sort(odd.begin(),odd.end());

        if(!odd.empty()){

            int odd_size = odd.size();

            for(int i=odd_size/2;i<odd_size;i++){
                  sum+=odd[i];
            }
        }


        cout<<sum<<endl;
    }

    return 0;
}
