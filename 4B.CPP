//array of object is used to store and traverce data

#include<iostream.h>
#include<conio.h>
#include<process.h>
class employee{
public:
 int id;
 char name[20];
 void eget(){
  cout<<"enter the id"<<endl;
  cin>>id;
  cout<<"enter the name"<<endl;
  cin>>name;
 }
 void eput(){
  cout<<"emp details is"<<endl;
  cout<<"id = "<<id<<endl;
  cout<<"name ="<<name<<endl;
 }
};
class fulltime:public employee{
public:
int dwages;
int wdays;
int fsalary;
void fget(){
 cout<<"enter daily wages of full time emp"<<endl;
 cin>>dwages;
 cout<<"enter work hour of full time"<<endl;
 cin>>wdays;
 }
void fcalculate(){
 fsalary = dwages * wdays;
 cout<<"salary of full time worker"<<fsalary<<endl;
}
};
class parttime:public employee{
 public:
 int pwages;
 int phour;
 int psalary;
 void pget(){
  cout<<"enter daily wages of partime emp"<<endl;
  cin>>pwages;
  cout<<"enter work hour of partime emp"<<endl;
  cin>>phour;
 }
void pcalculate(){
 psalary = pwages * phour;
 cout<<"salary of part time worker"<<psalary<<endl;
}
};

void main(){
 clrscr();
 int ch,n,cnt,i;
  fulltime f[5];
  parttime p[5];

  cout<<"--------menu---------"<<endl;
  cout<<"1 enter details of fulltime woeker"<<endl;
  cout<<"2 enter details of parttime worker"<<endl;
  cout<<"3 calculate highest salary"<<endl;
  cout<<"4 exit"<<endl;
  do{
    cout<<"enter your choice";
    cin>>ch;

    switch(ch){
      case 1:
      cout<<"how many worker you want to add"<<endl;
      cin>>n;
      for(i=0;i<n;i++){
	f[i].eget();
	f[i].eput();
	f[i].fget();
	f[i].fcalculate();
      }
      break;
      case 2:
      for(i=0;i<n;i++){
	p[i].eget();
	p[i].eput();
	p[i].pget();
	p[i].pcalculate();
      }
      break;
      case 3:
      if(p[i].psalary>f[i].fsalary){
       cout<<"partime worker"<<endl;
      }
      else{
       cout<<"fulltime worker"<<endl;
      }
      break;
      case 4:
      exit (0);
    }
  }
  while(ch<6);
  getch();
}









//end