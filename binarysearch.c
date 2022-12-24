#include<stdio.h>
int main()
{
    int upper,lower,mid,i,n,key;
    int a[6]={0,10,20,30,40};
    printf("Enter the key you want to search:");
    scanf("%d",&key);
    upper=4;
    lower=0;
    while(upper>=lower)
    {
       
        mid=(upper+lower)/2;
        if(a[mid]==key)
        {
        printf("Element found at the position:%d",mid);
        break;
        }
        else if (a[mid]>key)
        {
            upper=mid-1;

        }
        else if(a[mid]<key)
        {
            lower=mid+1;
        }
        
    }

return 0;
}