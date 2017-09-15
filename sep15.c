#include <stdio.h>

int problemOne(){
	int x;
	int sum=0;
	for (x=0; x<1000; x++){
		if (x%3 || x%5){
			sum+=x;
		}	
	}
	return sum;
}

int main(){
	printf("%d \n",problemOne());
}
