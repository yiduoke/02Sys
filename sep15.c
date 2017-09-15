#include <stdio.h>

int problemOne(){
	int x;
	int sum=0;
	for (x=0; x<1000; x++){
		if (x%3==0 || x%5==0){
			sum+=x;
		}	
	}
	return sum;
}

int main(){
	printf("%d \n",problemOne());
}
