#include <stdio.h>
int main(){
int t,n ,arr[100];
int index1,index2,i,j,k,c,odd,even;
scanf ("%d",&t);
if (1<=t && t<=10)
{ for(i=0;i<t;i++)
    { odd=0;
      even=0;
     scanf("%d",&n);
  if(3<=n && n<=100)
  { for( j=0;j<n;j++)
    { scanf("%d",&arr[j]);
    }
    for(k=0;k<n;k++)
    {if(1<=arr[k] && arr[k]<=1000)
      { if(arr[k] %2==0)
        {  ++even;
           index1=k+1;
        }
        else if ( arr[k]%2!=0)
        { ++odd;
          index2=k+1;
         }
       }
      }
      }
      if(even>odd)
      { 
        printf("%d\n",index2);
      }

      else if(odd>even)
      { 
          printf("%d\n",index1);
         }
     }
}
}
