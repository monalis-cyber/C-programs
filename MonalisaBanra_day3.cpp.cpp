#include <stdio.h>
#include <string.h>
int main(){
    char str1[800000];
    int j=0;
	gets(str1);
	int i=0;
	while(str1[i]!='\0'){
		i++;	
	}
	if(i<800000){
	while(str1[j]!='\0'){
		if(str1[j]==','){
			printf("\n");
		}
	    else{
        printf("%c",str1[j]);
            }
        j++;
     } 
     }
	
}

  
  
