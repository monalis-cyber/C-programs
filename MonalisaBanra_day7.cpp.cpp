#include <stdio.h>
#include <string.h>
int main(){
	int t,i,n,j,ctr;
	char str1[100];
	scanf("%d",&t);
	if(1<=t&&t<=4)
	{ for(j=0;j<t;j++)
	 {
	scanf("%d",&n);
	if(1<=n && n<=100)
	  { scanf("%s",str1);
	      ctr=1;
	     for(i=0;i<n;i++)
	     { 
	     if(str1[i]=='0'||str1[i]=='1')
		 {
		  if(str1[i]==str1[i+1] && str1[i+1]==str1[i+2] && str1[i+2]==str1[i+3] && str1[i+3]==str1[i+4] && str1[i+4]==str1[i+5])
		   { ++ctr;
		 	
		   }	
		 } }
		 if(ctr>=2)
		     {
		 	printf("YES \n");
		     }
		 else{
		 	printf("NO \n");
		     }
		 
       } 
	  }
    }
    return 0;
}
