#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size:");
    scanf("%d",&n);
    float a[n],b[n];

    printf("Enter the array elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

      float m;
       printf("Enter the scaling number:");
    scanf("%f",&m);
       for (i=0;i<n;i++)
       {
           b[i]= a[i]*m;
       }
       printf("The scaling result is :\n");
        for (i=0;i<n;i++)
        {
            printf("%.1f\n",b[i]);
        }

    return 0;
}
