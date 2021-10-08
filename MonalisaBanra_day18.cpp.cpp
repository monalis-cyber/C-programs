#include <stdio.h>
int main(){
int t,n, arr [10];
int i,j,k,l,flag;

printf("no. Of test cases:");
scanf("%d",&t);
if(1<=t && t<=10)
   { for(i=0; i<t; i++)
         { printf("enter range:\n");           
           scanf("%d\n",&n);
           if(1<=n && n<=10)
           { 
		       for(j=0;j<n ;j++) //input array
                { 
				scanf("%d", &arr[j]);
                }
                
                
                for(l=1;l<=n;l++)
                { flag=0;
				 for(k=0;k<n;k++)
                 {  
                       if(arr[k]==l)
                         { ++flag;
                         break;
                         }
                      
                 } 
                 if(flag==0)
                 { printf(" %d  ",l);
				 }
				 
                }
                
	          printf("\n");
	
			  
			}
           }
}
}

