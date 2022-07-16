#include<iostream.h>
#include<conio.h>

class student{
public:
 int roll;
 char name[10];
 void get(){
  cout<<"enter roll number"<<endl;
  cin>>roll;
  cout<<"enter name"<<endl;
  cin>>name;
 }
 void put(){
  cout<<"-------------student details-----------"<<endl;
  cout<<roll<<endl;
  cout<<name<<endl;
 }
};
class theory :virtual public student{
public:
 int m1,m2,m3,total;
 void accept(){
  cout<<"\n enter m1"<<endl;
  cin>>m1;
  cout<<"enter m2"<<endl;
  cin>>m2;
  cout<<"enter m3"<<endl;
  cin>>m3;
 }
 void mtotal(){
  total = m1+m2+m3;
  cout<<"total =:"<<total<<endl;
 }
};

class practical:virtual public student{
public:
  char p1,p2;
  int pmark;
  void gaccept(){
  cout<<"enter p1"<<endl;
  cin>>p1;
  cout<<"enter p2"<<endl;
  cin>>p2;
  }
  void gtotal(){
   if(p1==65 || p2==66){
   pmark =100;
   cout<<"grad marks"<<pmark<<endl;
   }
   else if(p1==67 || p2==68){
   pmark = 80;
   cout<<"grad marks"<<pmark<<endl;
   }
  }
};

class result :public theory ,public practical{
public:
   int final;
   void calc(){
    theory t;
    practical p;
    final = t.total+p.pmark*5/1000;
    cout<<"final result is"<<final<<"%"<<endl;
   }

};
void main(){
 clrscr();
 result r;
 r.get();
 r.put();
 r.accept();
 r.mtotal();
 r.gaccept();
 r.gtotal();
 r.calc();
 getch();

}








