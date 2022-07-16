#include<conio.h>
#include<iostream.h>

class complex{
public:
 int real;
 int image;
 complex(){

 }
 complex(int r,int i){
   real =r ;
   image =i;
 }
 void display(){
  cout<<"complex number"<<endl;
  cout<<"complex number:"<<real<<" "<<image<<"i"<<endl;
 }
 complex operator+(complex c){
  complex temp;
  temp.real = c.real + real;
  temp.image = c.image+ image;
  return temp;
 }
};
void main(){
clrscr();
complex c1(2,3);
complex c2(4,5);
complex c3;
c3 = c1+c2;
c3.display();

 getch();
}

/*

#include<iostream.h>
#include<conio.h>

class complex{
 public:
 int real;
 int image;
 complex(){

 }
 complex(int r,int i){
  real =r;
  image =i;
  }
  void display(){
  cout<<"image ="<<image<<endl;
  cout<<"real ="<<real<<endl;
  cout<<"complete number"<<real<<" "<<image<<"i"<<endl;
 }
 complex operator +(complex c){
  complex temp;
  temp.real = real + c.real;
  temp.image = image+c.image;
  return temp;
 }

};
 int main(){
 clrscr();
  complex c1(2,3);
  complex c2(4,5);
  complex c3;
  c3=c1+c2;
  c3.display();
  getch();
  return 0;
 }
 */