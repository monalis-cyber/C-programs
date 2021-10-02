#include <stdio.h>
int main(){
	int i,n,a,b,days;
	scanf("%d",&n);
	if(1<=n &&n<=100){
		for(i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		if(2000<=a,b && a,b<=3000)
		{ if(a%100==0 && b%100==0)
		     { if(a%400!=0 && b%400!=0)
			    days=365*2;
			   else if(a%400==0 && b%400==0)
			   days=366*2;
			   else if(a%400==0 || b%400==0)
			   days=365+366;
		       }
		  else if(a%100==0||b%100==0)    
		 {
		 	if(a%400==0||b%400==0)
		 	{
		 	    if(a%4==0 &&b%4==0)
		 	    days=366*2;
			    else if(a%4==0 ||b%4==0)
			    days=365+366;
			  }
		    else if(a%400!=0 && b%400!=0)
		 	   days=365*2;
        	}
		  else{
		    if(a%4==0 && b%4==0)
			days=366*2;
			else if(a%4!=0 && b%4!=0)
			days=365*2;
			else if(a%4==0 || b%4==0)
			days=365+366;
			}
	    	printf("%d \n",days);
	    }
	     } 
		 }
	     
		return 0;
	}

