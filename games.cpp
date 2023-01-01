#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define mia -1e18
#define maa 1e18
#define pii pair<int,int>
using namespace std;
//take float number as string when it needs as string.
signed main(){
    int tt;
    cin>>tt;
    while (tt--)
    {
        string s;
        cin>>s;
       int n=s.length()-1;
        if(s.find('.')==string::npos){
            cout<<1<<endl;
        }
        else{
            int x=0;
            for(int i=0;i<=n;i++){
                if(s[i]!='.'){
                    x=x*10+s[i]-'0';
                }
            }
            int ind=s.find('.');
            int y=n-ind;
            int ans=1;
            for(int i=0;i<y;i++){
                ans*=10;
            }
            int z=__gcd(x,ans);
            cout<<ans/z<<endl;
        }
        
    }
    
    
    
} 