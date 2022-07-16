#include<conio.h>
#include<iostream.h>
//call by reference
void change(int &x,int &y);

void main(){
int a= 10;
int b =20;
clrscr();
 change(a, b);
getch();
 }
 //swap function
void change(int &a, int &b){

cout<<"a ="<<a<<endl<<"b ="<<b<<endl;
int temp=0;
temp=a;
a=b;
b=temp;
cout<<"a ="<<a<<endl<<"b ="<<b<<endl;

}