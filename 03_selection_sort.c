#include <stdio.h>

int main() {
    int a[]={2,1,3,5,4};
int n=sizeof(a)/sizeof(a[0]);
int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            a[i]^=a[j]^=a[i]^=a[j];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
