#include<iostream.h>
#include<conio.h>

class person{
public:
 char name[10];
 long mobile;
 int age;
 char city[10];

 void accept(){
  cout<<"enter name"<<endl;
  cin>>name;
  cout<<"enter mobile"<<endl;
  cin>>mobile;
  cout<<"enter age"<<endl;
  cin>>age;
  cout<<"enter city"<<endl;
  cin>>city;
 }
 void display(){
 cout<<"--------------details of person--------------"<<endl;
  cout<<"name :"<<name<<endl;
  cout<<"mobile :"<<mobile<<endl;
  cout<<"age :"<<age<<endl;
  cout<<"city :"<<city<<endl;
 }
};
void main(){
//array of object
person p[5];
int n,i,ch,a,mob;
char nam[10];
clrscr();
cout<<"1 accept"<<endl;
cout<<"2 display"<<endl;
cout<<"3 serch mob"<<endl;
cout<<"4 serch name"<<endl;
cout<<"exit"<<endl;
cout<<"enter choice"<<endl;

cin>>ch;
switch(ch){
case 1:
cout<<"how mant record you want to insert"<<endl;
cin>>n;
for(i=0;i<n;i++){
 p[i].accept();
}
case 2:
cout<<"-----------details is-----------"<<endl;
for(i=0;i<n;i++){
p[i].display();
}
case 3:
cout<<"enter mob for name"<<endl;
cin>>mob;
for(i=0;i<n;i++){
 if(mob==p[i].mobile){
 cout<<"found mobile is"<<p[i].mobile<<endl;
 }
 else{
 cout<<"not found"<<endl;
 }
}
case 4:
cout<<"enter name for mob"<<endl;
cin>>nam;
for(i=0;i<n;i++){
 if(nam==p[i].name){
 cout<<"found name"<<endl;
 }
 else{
  cout<<"not found"<<endl;
  }
 }
}
 getch();
}