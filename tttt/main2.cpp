/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long w=0,a1=1,a2=1,mx=0,t=0,mn=0,m=1;
    double rslt;
    int n,l=10,r;
    cin>>n;
    while(n<15000){
           //  cout<<n<<"\t"<<w<<"\t"<<r<<"\t"<<l<<endl;

            r=n;
            w=0;
            l=1;
            while(r!=1&&l<100000){
                w+=r%l;
                r/=l;
                l*=10;

            cout<<n<<"\t"<<w<<"\t"<<r<<"\t"<<l<<endl;
            }
            if(w==10){
               cout<<n;
               return 0;
            }
            n++;

    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;


    long long a[1000000]={0};
 long long BS(long long x,long long st, long long en){
   long long mid =(st+en)/2.0;
  if(a[en]==x)return en;
   if(a[st]==x)return st;
   if(en<st||st<0||en<0)return mid;
     if(a[mid]>=x&&a[mid-1]<=x)return mid;
      if(a[st+1]>=x&&a[st]<=x)return st+1;
       if(a[en]>=x&&a[en-1]<=x)return en;
     if(a[mid]<x)BS(x,mid,en);
     else if(a[mid]>=x)BS(x,st,mid);
    else return mid;

}

int main()
{
    long long w=0,a1=1,a2=1,mx=0,t=0,mn=0,m=1,n,l;
    double rslt;
    //int n,l=10,r;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>l;
            w+=l;
            a[i]=w;
    }
    cin>>m;
    for(int i=1;i<=m;i++){
            cin>>l;
            t = BS(l,1,n);
           cout<<t<<endl;
            }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long w=1,a=1,b=1,mx=0,t=0,mn=1,m=1;
    string s;
    cin>>m;
   while(m--){
        cin>>s;
        if(s.length()%2==1)mx++;
        for(long long i=0;i<s.length();i++){
            for(long long j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                mx+=j-i-1;
                i++;j++;
                break;
            }
            mn=j;
        }
        if(mn>=s.length())mx++;
        }
        cout<<mx<<endl;
        mx=0;
}
return 0;

}
#include <bits/stdc++.h>

using namespace std;
bool BS(long long x,long long w,long long st,long long en){
    long long mid=(st+en)/2;
     if(st==en)return false;
     long long q=((mid*mid*mid)+(x*x*x));
     cout<<w<<"\t"<<q<<"\t"<<x<<"\t"<<st<<"\t"<<mid<<"\t"<<en<<"\n";
     if(q==w) return true;
    if(q>w)BS(x,w,st,mid);
    else if(q<w)BS(x,w,mid+1,en);
    else return true;
}
int main()
{
    long long w=1,a=1,b=1,mx=0,t=0,mn=1,m=1;
    cin>>m;
   while(m--){
        bool b=false;
        cin>>w;
        for(int i=cbrt(w)*0.5;pow(i,3)<=w;i++){
            if(BS(i,w,1,cbrt(w))){b=true;break;}
        }
        if(b)cout<<"YES\n";
        else cout<<"NO\n";

   }
    return 0;

*/
