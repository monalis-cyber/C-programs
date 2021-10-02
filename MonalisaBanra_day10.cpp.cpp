#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,l,k,ctr;
	char st[50],ch;
	printf("Enter no. of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter sentence:");
	  scanf("%s",st);
	  l=strlen(st);
	     ctr=0;	
	     for(j=0;j<l;j++)
	    {
		  for(k=0;k<l;k++)
		     { if('a'<=st[k]&& st[k]<='z')   
			   {  label:
			   	  ++ctr;
			   	  ++ch;
			   	  break;
				if(st[k]==ch)
		         { goto label;
				   
			     }
			    else
			    { ++ch;
				}
	           }                
		    }         	 
	    }
	   if(ctr>=26)
	   printf("Pass\n");
	   
	   else if(ctr<26)
	   printf("Fail\n");
	}
	
	return 0;
}
