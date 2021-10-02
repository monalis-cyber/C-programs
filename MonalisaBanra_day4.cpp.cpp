#include <stdio.h>
int main(){
	int n,i,q,r,j=0,p[100];

	scanf("%d",&n);
	if(n>=1 && n<=60){
		for(i=0;i<n;++i){
		
			scanf("%d",&p[i]);	
		}   
		
				for(i=0;i<n;++i){
					if(0<=p[i] && p[i]<=100){
						if(p[i]>=33){
		         q=p[i]/10;
		         r=(q*10)+5;
		         if((p[i]==0)){
		        printf("%d\n",p[i]);
				 }
		         else if((p[i]<=r)&&(r-p[i])>=0)
					 {
		         		if((r-p[i])<3){
		         		p[i]=r;
		         		printf("%d\n",p[i]);
		         		
		         	     }
		         	else if((r-p[i])>=3){
		         	 printf("%d\n",p[i]);
		         	 
					      }
					 
					 }
					
				 else if(p[i]>r&&p[i]<(r+5))
				     {
				 	if(((r+5)-p[i])>=0&&((r+5)-p[i])<3)
					 {
				 		p[i]=r+5;
				 		printf("%d\n",p[i]);
					 }
					 else if(((r+5)-p[i])>=3){
		         	 printf("%d\n",p[i]);
		         	 
					      }
				 
				     }
				  
				 
	                 }
	                 else{
	                 printf("%d\n",p[i]);	
					 }
					 
			        }
	               }
                  }
	return 0;
	
}
