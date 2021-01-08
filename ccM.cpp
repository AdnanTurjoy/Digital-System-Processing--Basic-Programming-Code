
#include<bits/stdc++.h>
using namespace std;
int x[20],h[20],y[20];
int main()
{
    int i,j,k,m,n,N,total;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>x[i];
    }
     for(i=0;i<N;i++){
        cin>>h[i];
    }

    for(i=0;i<N;i++){
        total=0;
        for(j=0;j<N;j++){
            if(i-j>=0) n=i-j;
            else n=i-j+N;

        total=total+(x[j]*h[n]);
        }
      y[i]=total;
    }

    for(i=0;i<N;i++) cout<<y[i] <<" ";
    return 0;
}
