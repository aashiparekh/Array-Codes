#include<stdio.h>
#include<conio.h>
void main(){
int a[5], i;
printf("enter 5 numbers\n");

for(i=0; i<5; i++){
scanf("%d", & a[i]);}

printf("you entered/n");
for(i=0; i<5; i++){
printf("value %d = %d/n", i++, a[i]);
}
return 0;

}
