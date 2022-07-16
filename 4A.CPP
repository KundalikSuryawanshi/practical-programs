#include<conio.h>
#include<iostream.h>
class worker{
public:
char name[10];
int hour;
float salary;
void accept();
void calculate_display(int payrate=10);
};
void worker::accept(){
 cout<<"enter name"<<endl;
 cin>>name;
 cout<<"enter hour"<<endl;
 cin>>hour;
 cout<<"enter salary"<<endl;
 cin>>salary;
}
void worker::calculate_display(int payrate){
 int total=0;
  total = hour * payrate;
  cout<<"------------------------details-----------------------"<<endl;
  cout<<"default payrate"<<payrate<<endl;
  cout<<"name ="<<name<<endl;
  cout<<"hour ="<<hour<<endl;
  cout<<"salary ="<<total<<endl;
}
void main(){
 clrscr();
 worker w;
 w.accept();
 w.calculate_display();
 getch();
}