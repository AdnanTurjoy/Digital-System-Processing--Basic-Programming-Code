
#include<bits/stdc++.h>
int x[20],h[20][20],y[20][20],z[10][10];
using namespace std;
int main()
{
    int i,j,k=0,N;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>x[i];
    }
    for(i=0;i<N;i++){
        cin>>h[i][0];
    }

    for(i=0;i<N;i++){
           int  sum=0;
        for(j=0;j<N;j++){
               y[j][i]=x[k++];
                 if(k==N) k=0;

        }
        k=N-1-i;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            z[i][0]=z[i][0]+(y[i][j]*h[j][0]);
        }
    }

    for(i=0;i<N;i++) {
        cout<<z[i][0]<<" ";
    }
    return 0;
}
