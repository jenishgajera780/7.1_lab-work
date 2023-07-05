//   Q4 write a program to print the below pattern using nested for loop.

/*
1 2 3 4 5 
2 3 4 5
3 4 5
4 5
5
*/


#include<stdio.h>
#include<conio.h>

void main(){

int i,j;

clrscr();
for(i=1;i<=5;i++){
for(j=i;j<=5;j++){
printf("%d",j);
}
printf("\n");
}
getch();
}
