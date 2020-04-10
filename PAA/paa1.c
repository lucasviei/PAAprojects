#include <stdio.h>

int numcalls = 0;
int fibonaccifunction(int n){
	if(n == 0){
		return 0;		
	}
	else if(n == 1){
		return 1;
		
	}
	else{
		numcalls += 2;
		return fibonaccifunction(n-1) + fibonaccifunction(n-2);
	}

}

int main() {
	
	int n, cont, fibo, result = 0;
	
	scanf("%d",&n);

	for(cont = 0; cont < n; cont++){
		scanf("%d",&fibo);
		result = fibonaccifunction(fibo);
		printf("fib(%d) = %d calls = %d\n",fibo,numcalls,result);
		numcalls = 0;
		
	}
 
    return 0;
}
