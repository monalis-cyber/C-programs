#include <stdio.h>
int score(int,int,int);
int main(){
	int i,n,a,b,c;
	scanf("%d",&n);
	if(n>=1 && n<=100)
	{
	for(i=1;i<=n;i++)
	{
	scanf("%d %d %d",&a,&b,&c); 
	score(a,b,c);
	} 
	}
	return 0;
}
int score(int a, int b, int c){
	int result;
	if(1<=a,b,c && a,b,c<=1000)
	{result = a + b*(c/a) -b;
    }
	printf(" %d \n",result);	
}
