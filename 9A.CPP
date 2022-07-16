#include<conio.h>
#include<iostream.h>
class person{
public:
  char name[20];
  char add[20];
  float salary;
  float tax;
  void get(){
   cout<<"enter name"<<endl;
   cin>>name;
   cout<<"enter address"<<endl;
   cin>>add;
   cout<<"enter salary"<<endl;
   cin>>salary;
  }
  void put(){
   cout<<"name "<<name<<endl;
   cout<<"address "<<add<<endl;
   cout<<"salary "<<salary<<endl;
   cout<<"tax "<<tax<<endl;
  }
  void calculate(){
  if(salary<=20000){
    tax=0;
    cout<<"no need to pay tax"<<endl;
  }
  else if(salary>20000 || salary<=40000){
  tax =salary/100*5;
  cout<<"tax :"<<tax<<endl;
  }
  else if(salary>40000){
  tax = salary/100*10;
  cout<<"tax : "<<tax<<endl;
  }
  }
};
void main(){
clrscr();
 person p;
 p.get();
 p.calculate();
 p.put();
 getch();
}