#include <stdio.h>
void m(int *,int);
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    m(arr,len);
    return 0;
}
void m(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        printf("%d",max);
}