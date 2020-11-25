#define SIZE 5

int array[SIZE];

int front=-1, rear=-1;


bool isEmptyVar(){    //Is the array empty? (Empty=true; No empty=false)
  return (front < 0);
}


void enQueue(){    //Add the item to the queue
    if(rear == SIZE-1){             //The queue is full (rear in the position of the array size -1)
        printf("Queue lleno :o");
    }else{
        int value = 0;
        printf("Digite el número a ingresar en el queue:");
        scanf("%i", &value);

        if(isEmptyVar()){    //First time adding an item
            front = 0;
        }
        rear++;
        array[rear] = value;
        printf("El valor %i se insertó correctamente en el queue.", array[rear]);
    }
}

void deQueue(){
    if(isEmptyVar()){    //The queue is empty
        printf("El queue se encuentra vacío, no hay elementos para eliminar.");
    }else{      //There are items in the queue
        printf("El elemento con valor %i fue eliminado.", array[front]);

        for(int i=0; i<rear;){    //Move all the array one space (array[1] now is in position [0])
            int j = i;
            i++;
            array[j] = array[i];
        }
        rear--;
    }
}

void clean(){       //Restart the values and clear the array
    if(isEmptyVar()){   //Array empty
      printf("El queue está vacío, no se puede limpiar");
    }else{        //Array clear
      front = -1;
      rear = -1;
      printf("Queue eliminado completamente.");
    }
}

void printArray(){
    printf("Impresión del queue:\n");
    if(isEmptyVar()){
        printf("El queue se encuentra vacío");
    }else{
        for(int i=0; i<=rear; i++){
            printf("Array[%i]:%i\n", i,array[i]);
        }
    }
}

void isEmpty(){
    if(isEmptyVar()){    //The queue is empty
        printf("El queue se encuentra vacío");
    }else{      //There are items in the queue
        int e = rear+1;
        char s;
        if(rear > 0){   //Multiple items in the array
			       s = 's';
        }
        printf("No se encuentra vacío. El queue tiene %i elemento%c", e, s);
    }
}
