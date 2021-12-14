#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int fibonacci(int n){
	
	 	
	//pid_t pid;
	//pid = fork();
	//int a = 0;

	if(n == 0){
		
	return 0;

	}else if(n == 1){
		
	return 1;

	}else{
		
	return fibonacci(n - 1 ) + fibonacci( n - 2 );
}	
	
}

int main(void){

	//CALL TO THE FUNCTION FIBONACCI OF TYPE VOID.
	pid_t pid;
	pid = fork(); 
	int num;
	
	if(pid == -1){
		
		printf("Error al crear el proceso hijo\n");		

	}else if(pid == 0){
		
		printf("%.2i\n", fibonacci(25));
	
	}else {

		
	
	}
	
	return 0;
}
