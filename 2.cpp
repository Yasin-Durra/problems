#include <bits/stdc++.h>
using namespace std;
long long mx=0, dp[101][101]={0};
int a,b;long long sum=0;
int red[101]={0};
int blue[101]={0};

long long solve(int i,int j,long long sum){
    long long r1,r2;
   // cout<<"sum = "<<sum<<endl;
    mx=max(sum,mx);
    if(dp[i][j]!=0)return dp[i][j];
   if(a>i){
   r1= sum+solve(i+1,j,sum+red[i]);}
    if(b>j)
    {
   r2= sum+solve(i,j+1,sum+blue[j]);
   }
    return dp[i][j]= max(r1,r2);
}
int main(){
    long long x,y,c=0,t,r=1;
    cin>>t;
    while(t--){
            memset(dp,0,sizeof(dp));
    mx=0;
    sum = 0;
            cin>>a;
        for(int i=0;i<a;i++){
            cin>>red[i];
        }
            cin>>b;
        for(int i=0;i<b;i++){
            cin>>blue[i];
        }
       solve(0,0,0);
    cout<<mx <<endl;
    }
 return 0;
}
