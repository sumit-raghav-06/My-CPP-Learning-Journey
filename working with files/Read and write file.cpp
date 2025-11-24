#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 /*string st ="nice car";
 // opening files using constructor adn writing it
 ofstream out("file.txt");
 out<<st;*/

 string st2;
 // opening file using constrctor and reading it
 ifstream in("file.txt"); //read operation
 in>>st2;
 cout<<st2;
}