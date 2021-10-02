#include <stdio.h>
int main()
{
    int arr[40], n,ctr=0;
    int i,t, j,l, k,p=0;	
	    scanf("%d",&t);
	   	if(1<=t && t<=10)
	{
       for(l=0;l<t;l++)
	   {
       	  scanf("%d",&n);
       if(1<=n && n<=40)
	   {
       for(i=0;i<n;i++)
        {
	      scanf("%d",&arr[i]);
	      p=0;
	     }
    for(i=0; i<n; i++)
    {  if(1<=arr[i]&&arr[i]<=40)
	{
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 ctr++;
               }
            }
        }
       if(ctr==0)
        { p++;
          printf("%d ",arr[i]);
        }
        
    }
	 } if(p==0) 
	 {
	 	printf("0");
	 }
	   printf("\n");
	  }
	  }
	  
	}
  
 return 0;
}
