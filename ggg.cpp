#include<stdio.h>
#include<conio.h>
int main(){
int num, i, first_term=0, second_term=1, next_term;
next_term=first_term+second_term;
printf(“Enter number:”);
scanf(“%d”, &num);
printf(“%d\t%d\t”,first_term, second_term);
for(i=2;i<=num; i++){
printf(“%d\t”, next_term);
first_term=second_term;
second_term=next_term;
next_term=first_term+second_term;
}
getch();
return 0;
}
