//Finding the Total Count to make all the array elements equal
//I/P --- > 1 3 4 5 5 5
//O/P --- > 7
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
    printf("Sorted Val:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int mid,count1;
    mid=arr[n/2];
    printf("\nMid:%d",mid);
    for(i=0;i<n;i++)
    {
        while(arr[i]<mid)
        {
            arr[i]+=1;
            count1+=1;
        }

        while(arr[i]>mid)
        {
            arr[i]-=1;
            count1+=1;
        }
    }
    printf("\n%d",count1);
}
