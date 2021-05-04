//print 1st smallest element, then 3rd smallest element,....4th smallest,2nd smallest
//I/P --- > 0 12 1 1 0 3
//O/P --- > 0 1 3 12 1 0

#include<stdio.h>
int main()
{

    int temp,n,i,j,arr[20];
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
        printf("");
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     printf("\n%d\t",arr[0]);
     printf("%d\t",arr[2]);
     for(i=4;i<n;i++)
     {
        printf("%d\t",arr[i]);
     }
     printf("%d\t",arr[3]);
     printf("%d\t",arr[1]);

}
