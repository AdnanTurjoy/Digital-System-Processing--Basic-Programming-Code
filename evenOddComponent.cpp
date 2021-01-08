#include<iostream>
using namespace std;
int n[10],a[10],p[10],t;


void evenComponent(){
 cout <<"EVEN COMPONENT: ";
 for(int i=t*-1;i<=t;i++){
     int temp =a[i]+a[i*-1];
     cout <<temp/2<<" ";
 }


}

void oddComponent(){
 cout <<"ODD COMPONENT: ";
 for(int i=-t;i<=t;i++){
     int temp =a[i]-a[i*-1];
     cout <<temp/2<<" ";
 }

}

//3 2 1 4 5



int main()
{
    int element,i;
    cin>>element;
    for( i=0;i<element;i++){
        cin>>n[i];
    }

    if(element%2==0){
        n[element]=0;
    }

     t=element/2;
int j;
    for(i=t*(-1),j=0 ; i<=t ; i++,j++){
       a[i]=n[j];
    }

    evenComponent();
    oddComponent();



    return 0;
}
