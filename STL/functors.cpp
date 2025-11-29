#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
 // function objects (functor) : a function wrapped in class so that it available like object

int arr[] = {1,73,4,2,54,7};
//sort(arr,arr+5);
sort(arr,arr+5, greater<int>());
for (int i = 0; i < 6; i++) {
    cout<<arr[i]<<endl;
}

}