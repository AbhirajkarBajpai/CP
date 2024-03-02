



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
