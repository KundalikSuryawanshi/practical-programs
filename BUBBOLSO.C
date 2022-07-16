#include<stdio.h>
#include<conio.h>
 void main(){
  int a[5] = {2,1,3,5,4};
  int n = sizeof(a)/sizeof(a[0]);
  clrscr();
  printf("sorted array");
  bubble(a,n);
  display(a,n);
  getch();
 }

 void bubbule(int a[], int n)
 {
 int i,j,temp;
  for(i=0; i<n; i++)
  {
   for(j=i+1; j<n; j++)
   {
    if(a[j] < a [i])
    {
     temp = a[i];
     a[i] = a[j];
     a[j] = temp;
    }
   }
  }
 }
 void display(a[],n)
 {
  for(i=0; i<n; i++)
  {
   printf("%d".a[i]);
  }
 }
