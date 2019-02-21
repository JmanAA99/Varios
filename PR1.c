
#include <stdio.h>
#include <stdlib.h>
int funcion(int,int,int);

int main(){
	int n,a,b;
	int valor;
	scanf("%d %d %d",&n,&a,&b);

	valor=funcion(n,a,b);
	printf("%d\n",valor);

	return 0;
}


int funcion(int n,int a, int b){
	if(n==0) return a;
	else if(n==1) return b;
	return funcion(n-1,a,b) + funcion(n-2,a,b);			

}



