#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "func-queue.h"

void menu(){
    int option = 0;
    do{
        printf("\n\n==============================================================");
        printf("\n                    QUEUE: Abstract Data Type\n");
        printf("1. enQueue (Ingresar datos al queue)\n");
        printf("2. deQueue (Borrar el primer dato en ingresar al queue)\n");
        printf("3. clean (Borrar todo el queue)\n");
        printf("4. isEmpty (Revisar si el queue est� vac�o)\n");
        printf("5. Imprimir el queue\n");
        printf("6. Salir\n");
        printf("==============================================================");
        printf("\nElige tu opci�n: ");
        scanf("%i", &option);
        printf("\n");
        
        switch(option){
            case 1:
                enQueue();
            break;
            case 2:
                deQueue();
            break;
            case 3:
                clean();
            break;
            case 4:
                isEmpty();
            break;
            case 5:
                printArray();
            break;
            case 6:
                printf("\nGracias por usar");
            break;
            default:
                printf("Opci�n invalida");
        }
        if(option != 5){
            printf("\n");
        }
    }while(option!=6);
}


int main(){
    menu();
    
    return 0;
}

