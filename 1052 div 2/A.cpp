#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n;cin>>n;
        vector <int> v;
        map <int,int> m;
        for(int i=0;i<n;i++){
            int num;cin>>num;v.push_back(num);
            m[v[i]]++;
        }

        vector <int> v2;

        for(auto u : m){
            v2.push_back(u.second);
        }

            int result=0;
            int max_val = -1;

            for(int i=0;i<v2.size();i++){
                result=0;
                for(auto u: m){

                    if(u.second<v2[i]){
                        continue;
                    }
                    else{
                        result+=v2[i];
                    }
                }

               if(result>max_val){
               max_val = max(max_val,result);
               }
            }
               cout<<max_val<<endl; 
            }
             
            
        }
