#include<iostream>
#include<vector>
using namespace std;

template <class T>

void display(vector<T> &v){
    cout<<"display this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
 // syntax of vector
 vector<int> vec1; //zero length int  vector
 vector<char> vec2(4); // 4 element character vector
 vector<char> vec3(vec2); // 4-element character vector from vec2
 vector<int> v(6,3); // six elemt of vector 3
 vec2.push_back('5');
 display(vec2);
 
 
 
 
 
 
 // vector push_back(), adn size() 

 int element, size=5;
 //cout<<"enter size of your vector "<< endl;
 //cin>>size;
 //for (int i = 0; i < size; i++)
 //{
   // cout<<"enter an element to add to this vector: ";
    //cin>>element;
    //vec1.push_back(element);
 //}
 //popback
 //vec1.pop_back();
 //display(vec1);
 //vector<int> :: iterator iter = vec1.begin();
 //vec1.insert(iter+1,3, 4);
 //display(vec1);
 return 0;

}