///Matrix Method to Calculate Circular Convolution

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x_size,h_size,i,j,k=0;
    cin>>x_size;
    int a[x_size],h,ta[x_size][x_size],th[x_size][1],ans[x_size][1];
    for(i=0; i<x_size; i++)
        cin>>a[i];
    for(i=0; i<x_size; i++)
    {
        cin>>h;
        th[i][0]=h;
    }
    for(i=0; i<x_size; i++)
    {

        for(j=0; j<x_size; j++)
        {
            ta[j][i]=a[k++];
            if(k==x_size)
                k=0;
        }

        k=x_size-1-i;
    }
    for(i=0; i<x_size; i++)
    {
        int sum=0;
        for(j=0; j<x_size; j++)
        {
            sum+=ta[i][j]*th[j][0];
        }
        ans[i][0]=sum;
    }
    for(i=0; i<x_size; i++)
    {
        cout << ans[i][0] << endl;
    }
    return 0;
}
