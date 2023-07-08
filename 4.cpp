
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[1000000],b[1000000],x,y,n,z,c=0,t,r=1e6;
    cin>>t;
    while(t--){
bool bo=true;
            cin>>n;
c=0;
   for(int i =0;i<n;i++){

	cin>>a[i];}
	for(int i =0;i<n;i++){

	cin>>b[i];}
for(int i =0;i<n;i++){
	if(b[i]!=0&&c==0){
	r=(a[i]-b[i]);
	c++;
	}
    if(b[i]==0&&(a[i]-b[i])>r){bo=false;
     cout<<"NO"<<"\n";break;
}
     if(b[i]>a[i]){bo=false;
    cout<<"NO"<<"\n";break;}
    if((a[i]-b[i])!=r){bo=false;
    cout<<"NO"<<"\n";break;}
}
    if(bo)cout<<"YES\n";
    }

 return 0;
}
