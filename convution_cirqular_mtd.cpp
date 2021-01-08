#include<bits/stdc++.h>
using namespace std;

int main()
{
 int N,M,n,k,m;
 float total,h[20],x[20],y[20];


 printf("\n\t\t\t Circular Convolution\n\n\n");

 printf("\n Enter the value of N=");
 scanf("%d",&N);

 printf("\n\n Enter the sequence h(n):");
 for(n=0;n<N;n++)
 {
  printf("\n\n h[%d]=",n);
  scanf("%f",&h[n]);
 }

 printf("\n\n Enter the sequence x(n):");
 for(n=0;n<N;n++)
 {
  printf("\n\n x[%d]=",n);
  scanf("%f",&x[n]);
 }

 printf("\n\n\n Circular convolution is:");
 for(m=0;m<N;m++)
 {
  total=0.0;
  for(k=0;k<N;k++)
  {
   if((m-k)>=0)
    n=m-k;
   else
    n=m-k+N;
   total=total+x[k]*h[n];
  }
  y[m]=total;
  printf("\n\n y[%d]=%f",m,y[m]);
 }


 return 0;
}

