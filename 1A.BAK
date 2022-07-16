#include<iostream.h>
#include<conio.h>

//forward declaration of overloaded fucntion
int volume(int, int);
int volume(float);
int volume(int, float);

void main(){
 int r,h;
 clrscr();
 cout<<"enter radius";
 cin>>r;
 cout<<"enter hight";
 cin>>h;

 // call to the functions
cout<<"volume of cylinder"<<volume(r,h)<<endl;
cout<<"volume of cone"<<volume(h)<<endl;
cout<<"volume of spere"<<volume(r,h);
 getch();
}

int volume(int r, int h){
return 3.14*r*r*h;
}
int volume(float r){
return 4/3*3.14*r*r*r;
}
int volume(int r, float h){
return 3.14*r*r*r*h/3;
}