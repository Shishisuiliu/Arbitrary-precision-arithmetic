#include<bits/stdc++.h>
using namespace std;
int a[100005]={0};
int main()
{
	std::ios::sync_with_stdio(false);
  a[1]=1,a[2]=2;
    for(int i=3;i<=100000;i++)
    a[i]=(a[i-1]+a[i-2])%100000000;
    int k;
    string s;
    while(cin>>s){
        k=0;
        for(int i=0;i<s.size();i++) 
		k=(k*10+s[i]-'0')%100000000;                //当时没考虑输入值的情况，卡了挺久的
        for(int i=1;i<=100000;i++){
            if(a[i]==k){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
