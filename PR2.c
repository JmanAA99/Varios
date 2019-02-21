#include <stdio.h>
#include <stdlib.h>

//int cont;

int cambioBase(int n, int m);

int main(){
	int n,m,numC;
	scanf("%d %d",&n,&m);
	//cont = 1;
	numC=cambioBase(n,m);
	printf("%d\n",numC);

	return 0;
}


int cambioBase(int n, int m){
	if(n<m) return n;
	int resto, division;
	division=n/m;
	resto=n%m;	
	return (cambioBase(division,m)*10)+resto;

}

