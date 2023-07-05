//  Q6 write a program to print the below pattern using nested for loop.

/*
1 0 1 0 1
1 0 1 0
1 0 1 
1
*/


#include<stdio.h>
#include<conio.h>

void main(){

int i,j;

clrscr();
for(i=1;i<=5;i++){
for(j=i;j<=5;j++){
printf("%d",j%2);
}
printf("\n");
}
getch();
}
