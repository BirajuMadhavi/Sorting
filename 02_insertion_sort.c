#include <stdio.h>

int main() {
    int a[]={2,1,3,5,4};
int n=sizeof(a)/sizeof(a[0]);
int i,j;
int k=1;
for(i=0;i<n;i++)
{
for(j=k;j>0;j--)
{
if(a[j-1]>a[j])
a[j]^=a[j-1]^=a[j]^=a[j-1];
}
k++;
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
