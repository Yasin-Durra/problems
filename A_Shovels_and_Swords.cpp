#include <bits/stdc++.h>
int main(){int t;std::cin>>t;while (t--){int a, b;std::cin >> a >> b;std::cout<<std::min(a,std::min(b,(a+b)/3))<<'\n';}}