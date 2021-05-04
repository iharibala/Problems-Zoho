/*
input-[2,1,0,-8,-9]
Output-0.4,0.2,0.4
to find - positive,negative and neutral vals
output----> [(noofpositive val)/n , (noofneutral val)/n , (noofnegative val)/n)]
            [2/5 , 1/5 , 2/5]
            [0.4,0.2,0.4]
*/
#include<stdio.h>
#include<math.h>
int main()
{

    int arr[]={2,1,0,-8,-9};

    float pv=0,nv=0,zv=0;

   int len;
   len=sizeof(arr)/sizeof(arr[0]);
   printf("%d\n",len);
   for( int i=0;i<len;i++)
   {
       if(arr[i]>0)
       {
           pv++;
       }
       else if(arr[i]<0)
       {
           nv++;
       }
       else
        {
           zv++;
       }
   }
  // int rpv;
   //rpv=pv/len;
   //rpv=pv/len;
   //rnv=nv/len;
   //rzv=zv/len;
   printf("%0.1f ,%0.1f,%0.1f",pv/len,zv/len,nv/len);
   return 0;
}
