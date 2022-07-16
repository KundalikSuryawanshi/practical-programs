#include<conio.h>
#include<iostream.h>
class product{
public:
  int pid;
  char pname[20];
  int pqty;
  int price;
  static int cnt;
  //use static member and static function
  void get(){
  cout<<"id "<<endl;
  cin>>pid;
  cout<<"name "<<endl;
  cin>>pname;
  cout<<"quantity "<<endl;
  cin>>pqty;
  cout<<"price :"<<endl;
  cin>>price;

  cnt++;
  }
  void put(){
  cout<<"id :"<<pid<<endl;
  cout<<"name :"<<pname<<endl;
  cout<<"quantity :"<<pqty<<endl;
  cout<<"price :"<<price<<endl;
  }
  static void ono(){
   cout<<"number of object is created"<<cnt<<endl;
  }
};
int product::cnt;

void main(){
clrscr();
 product p[10];
 int n,i;
 cout<<"how many obj you want to create"<<endl;
 cin>>n;
 for(i=0;i<n;i++){
  p[i].get();
 }
 for(i=0;i<n;i++){
  p[i].put();
  }
  p[i-1].ono();
 getch();
}