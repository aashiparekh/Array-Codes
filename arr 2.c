#include<stdio.h>
#include<conio.h>
int main() {
int a[10], i;

printf("enter 10 values/n");
for(i=0; i<=10; i++){
scanf("%d", &a[i]);
}

printf("you entered 4th, 7th, and 9th value/n");
for(i=0; i<=10; i++){
printf("value %d = %d/n", a[i]);
}
return 0;
}
