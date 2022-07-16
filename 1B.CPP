#include<conio.h>
#include<iostream.h>
#include<fstream.h>
//file handling
void main(){
clrscr();
//get data and store
 char arr[100];
 cout<<"enter your age and name"<<endl;
 cin.getline(arr,100);

 //create ofstream class obj
 ofstream myfile("xyz.txt");
 myfile<<arr;
 myfile.close();
 cout<<"file write succecfull"<<endl;

 cout<<"reading start"<<endl;
 char arr1[100];
 ifstream obj("xyz.txt");
 obj.getline(arr1, 100);
 cout<<"array content"<<arr1<<endl;
 cout<<"file read complete"<<endl;
 obj.close();

 getch();
}