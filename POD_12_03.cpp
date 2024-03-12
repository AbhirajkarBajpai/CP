#include<bits/stdc++.h>
#include <algorithm> 
#include <string>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define ll long long
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

// 1 3 10 14 23 29 
// rrbrrbrbrbr
string decToBinary(int n) 
{ 
      string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
} 

int binaryToDecimal(string str)
{
    int dec_num = 0;
      int power = 0 ;
    int n = str.length() ; 
   
      for(int i = n-1 ; i>=0 ; i--){
      if(str[i] == '1'){
        dec_num += (1<<power) ;
      }
      power++ ; 
    }
   
    return dec_num;
}

vector<int>  printDivisors(int n) 
{ 
   vector<int> v;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
          
            if (n/i == i) 
               v.push_back(i);
  
            else 
                v.push_back(i);
                v.push_back(n/i);
        } 
    } 
    return v;
} 
int gcd(int x, int y){
   return y==0 ? x: gcd(y, x%y);
}
ll sum(ll n) {
    return n * (n + 1) / 2;
}

void Solve(){
   int n,r,b;
    cin>>n>>r>>b;
    int p=r/(b+1),q=r%(b+1);
    for(int i=0;i<q;i++)    cout<<string(p+1,'R')<<'B';
    for(int i=q;i<b;i++)    cout<<string(p,'R')<<'B';
    cout<<string(p,'R');
    cout<<endl;
}


    
int main(){
   ll t;
   cin>>t;
   while(t--){
       Solve();
   } 
}
