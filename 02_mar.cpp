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

string decToBinary(int c) 
{ 
     int n = (int)(log2(c)); 
    string s1= bitset<64>(c).to_string().substr(64 - n -1); 
    
    return s1;
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



void ques(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  sort(a,a+n);
  int var1=a[n-1];
  int var2=0;
  for(int i=n-2; i>=0; i--){
       if(var1>var2){
        var2+=a[i];
       } else{
        var1+=a[i];
       }
  }
  cout<<abs(var1-var2)<<endl;
}

    
int main(){
   ll t;
   cin>>t;
   while(t--){
       ques();
   } 
}
