//header file declaration
#include<iostream.h>
#include<conio.h>

//class defination
class item{
 //private memeber variable num and cost
 private:
  int num;
  float cost;
 //public function (method) getdata and setdata
 public:
  void getdata()
  {
   cout<<"Enter the data number"<<endl;
   cin>>num>>cost;
  }
  void putdata()
  {
   cout<<"Enterd data is"<<endl;
   cout<<num<<cost<<endl;
  }
};

//function declaratio outside the item class and before the main function
  void getdata();
  void putdata();

void main()
{
 clrscr();
  //object creation
  item i1;
  i1.getdata();
  i1.putdata();

 getch();
}



