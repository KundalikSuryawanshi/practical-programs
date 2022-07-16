//operator overloading
#include<conio.h>
#include<iostream.h>
class weight{
 public:
 int kilogram,gram;
 void accept(){
  cout<<"enter wieght in kilo"<<endl;
  cin>>kilogram;
  cout<<"enter wieght gram"<<endl;
  cin>>gram;
 }
 void display(){
 cout<<"weight = "<<kilogram<<"."<<gram<<"kilogram"<<endl;
 }
 //+= overloading for addition of 2 weight
   weight operator+=(weight &d){
   weight t;
     t.kilogram = d.kilogram + kilogram;
     t.gram=d.gram+gram;
     cout<<"addition -:"<<t.kilogram<<"."<<t.gram<<"kilogram"<<endl;
     return d;
   }

 //== overloading for checking the equality of 2 weight
    int operator ==(weight &d){
     if(kilogram==d.kilogram || gram==d.gram){
     return 1;
     }
     else{
     return 0;
     }
    }
};
void main(){
clrscr();
weight a,b,c,d;
a.accept();
b.accept();
c=a+=b;
c.display();
if(a==b){
 cout<<"same"<<endl;
}
else{
 cout<<"not same"<<endl;
}

getch();
}