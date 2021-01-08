
#include<bits/stdc++.h>
int x[100],h[100],y[100];
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>m>>n;
    for(i=0;i<m;i++){
        cin>>x[i];
    }
    for(i=0;i<n;i++){
        cin>>h[i];
    }

  for(i=0;i<m+n-1;i++){
    y[i]=0;
    for(j=0;j<=i;j++){
        y[i]=y[i]+(x[j]*h[i-j]);
    }
  }

    for(i=0;i<m+n-1;i++){
        cout<<y[i]<<" ";
    }
    return 0;
}
