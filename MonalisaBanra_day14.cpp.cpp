#include <stdio.h>
int check(int n);
int main(){
	int i,j,l,k,arr[10],t,n,big;
scanf("%d",&t);
if(1<=t,n&& t,n<=10)
{ for(i=0; i<t;i++)
    { 
       scanf("%d",&n);
	for(j=0;j<n;j++)
         { scanf("%d", &arr[j]);
         } 
	big= arr[0];
	if(check(n)==0)
	{
   for(l=1;l<n;l++)
   {if(big<arr[l])
    big=arr[l];
   }
   }
   
   for(k=0; k<n;k++)
	 { if(arr[k]==big)
	    {
	     printf("%d\n",k+1);
	     break;
		}
    } 
    } 
} 
		 }
 int check(int n){
 	int i,c=0,arr[10];
 	for(i=0;i<n;i++)
 	{ if(1<=arr[i] && arr[i]<=10)
 	  ++c;
	 }
	 if(c>=1)
	 return 0;
 }

