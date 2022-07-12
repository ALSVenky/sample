#include <stdio.h>
int fibonacci(int);
int main(){
	
	int n=10;
	// scanf("%d", &n);
	for (int i=1;i<=n;i++){
		printf("%d ", fibonacci(i));
	}
	
	
	return 0;
}

int fibonacci(int n){
	if(n==1 ){
		return 0;
	}
	if(n==2 ){
		return 1;
	}
	
	return fibonacci(n-1)+fibonacci(n-2) ;
}


