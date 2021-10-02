#include <stdio.h>
int check(int);
 int main(){
 int i,j,t,n,l,k,m,sum1,sum2,sum3,sum4;
 int arr[4][4];
 int row,col,dif;
scanf("%d",&t);
if(1<=t && t<=45)
{  
       for(i=0;i<t;i++)
      { sum1=0,sum2=0,sum3=0,sum4=0;
         row=0,col=0,dif=0;
      scanf("%d",&n);
      for(j=0;j<n;j++)
      { for(k=0;k<n;k++)
              { scanf("%d",&arr[j][k]);
              }
               
      } 
       if(check(n)==0)
	   {  
           for(l=n-1;0<=l; l--)
        { sum1=sum1+arr[0][l]; 
          sum3=sum3+ arr [l][0]; 
        }
      for(m=0;m<n;m++)
      { sum2=sum2 +arr[n-1][m]; 
        sum4= sum4+ arr[m][n-1]; 
      }
      }
      row=sum1+sum2;
      col= sum3+ sum4;

      if(n==1||n==2)
	  { dif=0;
	   printf ("%d\n", dif);
	  }
	  
      else if( n>2)
      {   dif=row-col;
        if(dif>0)
        {  printf ("%d\n", dif);
		}
	     else if(dif<0)
		 {printf ("%d\n", -(dif));
		 } 
         
      }
      
    }
   }
    }
    
    int check(int n){
    	int i,j,sum=0;
    	int arr[4][4];
    	for(i=0;i<n;i++)
		{	for(j=0;j<n;j++)
			{
    			if(-100<=arr[i][j]&&arr[i][j]<=100)
    			{ sum=sum+1; 
				}
			}		
		}
		if(sum>=1)
		{ return 0;
		}
	}
