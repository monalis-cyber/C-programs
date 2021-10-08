#include<stdio.h> 
#include <math.h>
int sq(int);
int main()  
{  
    int n,t,i,j;   
    scanf("%d",&t);
    if(1<=t && t<=100)
    { for(i=0;i<t;i++)
       { 
          scanf("%d", &n); 
          
          if(1<=n && n<= pow(2,21)-1)
          { 
		    if(n<10)
          { if(n==1)
             printf("lucky\n"); 
             else
             printf("unlucky\n"); 
		  }
		  
		  else
		  {
		    while(sq(n)!=1)
		  {
		     	n=sq(n);
		  	 if(sq(n)==1)
		  	 printf("lucky\n");
		  	 
			 else if(1<sq(n) && sq(n)<10) 
			  {
			  printf("unlucky\n");
			  break;
	         }
		  } 
	      }
		  
	      
	      }
       }  
	}
    

return 0;  
}  
int sq(int num)  
{  
    if(num == 0)  
        return 0;  
    else  
        return( (num%10) * (num%10) + sq(num/10) );  
}  
  

