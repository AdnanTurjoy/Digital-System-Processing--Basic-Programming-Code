#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[100],arr2[100],c[100],a,b;
    int i,j;
    cout<<"Enter the number of 1st array"<<endl;
    cin>>a;
    cout<<"Enter the number of 2st array"<<endl;
    cin>>b;
    for(j=0;j<100;j++)
    {
        arr1[j]=0;
        arr2[j]=0;
        c[j]=0;
    }


    cout<<"Enter the element of first array ="<<endl;
    for(i=0;i<a;i++)
    {
        scanf(" %d",&arr1[i]);
    }
    printf("Enter the elements of array 2\n");

    for(i=0;i<b;i++)
    {
        scanf(" %d",&arr2[i]);
    }


    if(a>=b)
   {

       for(i=0;i<a;i++)
       {

           c[i]=arr1[i]+arr2[i];
       }
   }
   else
   {
       for(i=0;i<b;i++)
       {
           c[i]=arr1[i]+arr2[i];

       }
   }



   printf("The output of addition of 2 arrays is\n");

if(a>=b)
   {
       for(i=0;i<a;i++)
       {
           printf("%d\n",c[i]);
       }
   }
   else
   {
       for(i=0;i<b;i++)
       {
           printf("%d\n",c[i]);
       }
   }

    return 0;
}

