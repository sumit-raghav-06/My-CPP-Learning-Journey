#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
 // syntax of vector
 vector<int> vec1;
 // vector push_back(), adn size()

 int element, size;
 cout<<"enter size of your vector "<< endl;
 cin>>size;
 for (int i = 0; i < size; i++)
 {
    cout<<"enter an element to add to this vector: ";
    cin>>element;
    vec1.push_back(element);
 }
 //popback
 //vec1.pop_back();
 display(vec1);
 vector<int> :: iterator iter = vec1.begin();
 vec1.insert(iter+1,3, 4);
 display(vec1);
 return 0;

}