#include<stdio.h>
#include<conio.h>
int main(){
int n, s;
printf("how many numbers you want to print: \n");
scanf("%d", &n);

int a[n];

for(int i=0; i<n; i++) {
printf("enter the number: \n");
scanf("%d", &a[i]);
}


for(int i=0; i<n-1; i++)
{
for(int j =0; j<n-i-1; j++)
{
if(a[j]>a[j+1])
{
   s=a[j];
   a[j]=a[j+1];
   a[j+1]=s;
   }
     }
        }
  printf("sorted array");
  for(int i=0; i<n; i++)
  {
  printf("%d",a[i]);
  }

  return 0;
  }
