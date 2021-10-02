#include <stdio.h>
int main(){
	int t,n,sum,i,mid;
	scanf("%d",&t);
	if(1<=t && t<=100)
	{  
	  for(i=0;i<t;i++)
	  { 
	    scanf("%d",&n);
	   if(1<=n && n<=1024)
	      {       sum=0;   
		      	   mid=n/2;
			 sum=sum+1;
	   	           
	      }            
	              while(1<mid)
	   	           { 
					  mid=mid/2;
	   	              ++sum;
				   }
			printf("%d \n",sum);	   
	  }
    }
 return 0;          
}
