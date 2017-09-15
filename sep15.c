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

int isPrime(int y){//1 not prime; 0 for is prime
	int x;
	for (x=2; x<y; x++){
		if (y%x==0){
			return 1;
		}
	}
	return 0;
}

int sumPrime(){
	int sum=0;
	int y;
	for (y=2; y<2000000; y++){
		if (isPrime(y)==0){
			sum+=y;
		}
	}
	return sum;
}

int main(){
	printf("%d \n",problemOne());
	printf("%d \n",sumPrime());
}
