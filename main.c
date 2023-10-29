#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define null -32

void gotoxy(int x, int y){
    COORD coord = {0,0};
    coord.X= x;
    coord.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    printf("************ Magic Box *******************\n");
    int row , col;
    int size , value;

    do{
        printf("Enter the size of box : ");
        scanf("%d", &size);
    }while((size %2 ==0)||(size <= 1)|| (size >5));

    //while(size %2 == 0 || size >=1)

    row = 1;
    col = (size +1)/2;
    value= 1;
      system("cls");
      do{

        gotoxy(col*5,row*2);

        printf("%d", value);

        if(value % size == 0)
            row ++;
        else{
            row --;
            col --;
        }

        if(row == 0)
            row = size;
        if(col == 0)
            col = size;

        value ++;
    }
    while(value <= size*size);


    return 0;
}
