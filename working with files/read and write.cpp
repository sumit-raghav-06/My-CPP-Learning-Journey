#include<iostream>
#include <fstream>
using namespace std;
int main()
{
 // connnecting our file with hout stream
 ofstream hout("file2.txt");

 // creating a name string and fillinng it with the string entered by user
 string name;
 cout<<"Enter your name";
 cin>>name;

 // writting a string to the file
 hout<<name + "is my name";
 hout.close();
 
 ifstream hin("file2.txt");
 string content;
 hin>>content;
 cout<<"The content of this file is: "<<content;
 hin.close();



}