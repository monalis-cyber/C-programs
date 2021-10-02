#include <stdio.h>
#include <string.h>
int main(){
	int n,i,t,j,k,ctr;
	char st[50];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{     scanf("%s",st);	    
		  n=strlen(st);
		if(2<=n && n<=50)
		{ ctr=0;
		for(k=0;k<n;k++)
		  { if((st[k]=='R'||st[k]=='B'||st[k]=='G')&& st[k]!='\0')
			{  if(st[k]==st[k+1])
			   { ++ctr;
			     
			   }
			}
		  } 
		  if(ctr>=0)
	       { printf("%d \n",ctr);	
		   }
	   	  
        
        }
	  
    }
    
	return 0;
}
