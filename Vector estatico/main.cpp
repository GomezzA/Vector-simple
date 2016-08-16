#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int vec[20];
	int x;
	
	for(x=0;x<20;x++){
		
		printf("\nV[%d]=", x);
		scanf("%d", &vec[x]);
	}
	for(x=0;x<20;x++){
		printf("\n%d", vec[x]);
	}
	return 0;
}
