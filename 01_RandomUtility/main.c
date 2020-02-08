/**
 * C/C++ Utility project by petra.
 * Copyright 2020 PeTrA. All rights reserved.
 */
 
#include<stdio.h>
/** 
 * C Language : stdlib.h
 * C++ Language : cstdlib.h
 */
#include <stdlib.h> 

int myRandomFunction();

/**
 * C Langue random function utility.
 */
int main(int argc, int argv[]){
	printf("random number : %d\n", rand());
	printf("random number : %d\n", rand());
	printf("random number : %d\n", rand());
	printf("random number : %d\n", rand());
	
	return 0;
}

int myRandomFunction(){
	return 1;
}
