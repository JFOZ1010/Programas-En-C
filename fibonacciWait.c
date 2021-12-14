#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

//Declaracion de funciones. 
int fibonacci(int n); 


int main(int argc , char* argv[]) {
    //declaracion de variables
    pid_t pid;
    int status;
    
    //declaracion de variables para el fork
    pid = fork();

    //verificacion si es el padre o el hijo
    if (pid == -1) {
    printf("hubo un error al crear el proceso hijo\n");
    }
    //Proceso Hijo. 
    else if (pid == 0) {
     return fibonacci(25);
    }
    else {
    printf("Este es el padre\n");
    wait(&status); //
    printf("El valor de status es: %d\n", WEXITSTATUS(status));
    //WEXITEDSTATUS(STATUS); -> DEVUELVE EL VALOR DE SALIDA DEL
    //PROCESO HIJO EN EL QUE SE ENCONTRABA. 
    //
    }

    return 0;
}

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
