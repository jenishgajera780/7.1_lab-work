

//  Q7 write a program to print the below pattern using nested for loop.

/*
A
B A
C B A 
D C B A 
E D C B A 
*/

#include<stdio.h>
#include<conio.h>

void main(){

char i,j;

clrscr();
for(i='A';i<='E';i++){
for(j=i;j>='A';j--){
printf("%c",j);
}
printf("\n");
}
getch();
}
