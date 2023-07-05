//   Q3 write a program to print the below pattern using nested for loop.
/*
5
4 4
3 3 3 
2 2 2 2 
1 1 1 1 1
*/


#include<stdio.h>
#include<conio.h>

void main(){

int i,j;
clrscr();

for(i=5;i>=1;i--){
for(j=i;j<=5;j++){
printf("%d",j);
}
printf("\n");
}
getch();
}
