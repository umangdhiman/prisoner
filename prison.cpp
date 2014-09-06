#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    unsigned long int n,t,c,i,m=0,j,l=0;
    int *a=NULL;
    cin>>n>>t>>c;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=t){
            l++;
        }
        else if(a[i]>t)
            l=0;
        if(l>=c){
            m++;
        }
    }
    cout<<m;
    return 0;
}

