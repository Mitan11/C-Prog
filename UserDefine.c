#include<stdio.h>

void main() {
    int GRID;
    char name;

    printf("Enter GRID : ");
    scanf("%d", &GRID);
    printf("GRID is %d\n", GRID);

    // fflush(stdin);//it clears the buffer 

    printf("Enter name : ");
    scanf("%c", &name); //or we can leave sapce Before %C 
    printf("Name is %c\n", name);
}