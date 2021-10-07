#include <stdio.h>
int main()
{  int t,n,students[1000],arr[1000],i,j,k,l,m;
   int p,q,a,d ,c,num,com;
   scanf("%d",&t);
   if(2<=t && t<10000 )
   { for(d=0;d<t;d++)
     { com=0;
      scanf("%d",&n);
        if(3<=n && n<1000)
	   {  for(m=0;m<n;m++) 
     	  { scanf("%d",&students[m]);
     	    arr[m]=m+1;
		  }
	   
	    for(i=0;i<n;++i) 
	   {for(j=i+1;j<n;++j)
	   {
	   if(students[i]>students[j])
	   {a=students[i];
	   students[i]=students[j];
	   students[j]=a;
	   }
       } 
	   } 
	   
	for(p=0;p<n;++p) 
	{ for(q=p+1;q<n;++q)
     	{ if(students[p]==students[q])
     	  { for(c=p;c<n;c++)
     	   { students[c]=students[c+1];
     	    students[n-1]=0;
		   }
	
		  }
     	}
	} 
	
	  printf("\n");
	for(k=0;k<n;k++) 
	{  if(arr[k]!=students[k])
	   { num=arr[k];
	     break;
	   }
	   else if(arr[k]==students[k])
	      { ++com;
		  }
	   
	}  
	if(com==n)
	printf("0\n");
	
	else
	printf("%d\n",num);
    } 
    } 
   }   
}
