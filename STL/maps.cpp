#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    // map is an associative array
    map<string, int> markmap;
    markmap["sumit"] = 99;
    markmap["harsh"] = 98;
    markmap["glogs"] = 97;
    markmap["kartik"] = 100;
    markmap.insert({"robo_3"});

    map<string,int> :: iterator iter;
    for (iter = markmap.begin(); iter != markmap.end(); iter++) {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
 
}