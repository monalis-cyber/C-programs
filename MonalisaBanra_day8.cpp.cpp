#include <stdio.h>
#include <string.h>
int main(){
	int t,i,len,j,lw=0,up=0;
	char str[100];
	scanf("%d",&t);
	if(1<=t && t<=4)
	{ for(i=0;i<t;i++)
	    { 
	      scanf("%s",str);
	      len=strlen(str);
	      for(j=0;j<len;j++)
		  {
	      if('a'<=str[j]&&str[j]<='z')
		    { ++lw;
		    }
		    else if('A'<=str[j] && str[j]<='Z')
			{ ++up;
			}
	      } 
	      if(lw>up)
		  { printf("%s\n",strlwr(str));
	      	
		  }
		  else if(up>lw)
		  { printf("%s\n",strupr(str));
		  	
		  }
		  else if(up==lw)
		  { printf("%s\n",strlwr(str));
		  	
		  }
		}	
	}
	return 0;
}
