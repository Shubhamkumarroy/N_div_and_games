#include <bits/stdc++.h>
using namespace std;
#define k 100000
bool prime[k];
vector<int> primes;
void seive(){
    fill(prime, prime+k, true);
	for(int i = 3; i*i < k; i+=2){
		if(prime[i])
			for(int j = i*i; j < k; j += 2*i)
				prime[j] = false;
	}
	primes.push_back(2);
	for(int i = 3; i < k; i += 2)
		if(prime[i])
			primes.push_back(i);
}
//total fact=(1+p1)*(1+p2)...
int factor(int n){
    int ans=1;
    for(auto &it:primes){
        int y=it;
        int cn=0;
        if(y>n){
            break;
        }
        while(n%y==0){
            n/=y;
            cn++;
        }
        ans*=(1+cn);
    }
    if(n>1){
        ans*=2;
    }
    return ans;
}
int main(){
    seive();
    int a,b,n;
    cin>>a>>b>>n;
    int cn=0;
    for(int i=a;i<=b;i++){
        if(factor(i)==n){
            cn++;
        }
    }
    cout<<cn<<endl;
} 