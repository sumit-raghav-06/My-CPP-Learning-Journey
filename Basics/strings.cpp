/*#include <iostream>
using namespace std;

int main() {
   char c[10]= "hello";
   cout <<c<< endl;
   return 0;
}


// 

#include <iostream>
using namespace std;

int main() {
   char s[50];
   cout << " enter name";
   cin.get(s,50);
   cout << s;
   return 0;
}


//

#include <iostream>
using namespace std;

int main() {
   char s[50];
   char s2[50];
   cout << " enter name ";
   cin.get(s,50);
   cout << s << endl;
   
   cin.ignore();
   
   cout << " enter name again ";
   cin.get(s2,50);
   cout << s;
   
   return 0;
}



////////

#include <iostream>
using namespace std;

int main() {
   char s[50];
   char s2[50];
   cout << " enter name ";
   cin.get(s,50);
   cout << s << endl;
   
   cin.ignore();
   
   
   cout << " enter name again ";
   cin.get(s2,50);
   if(s==s2) {
   cout << s2;
   } else {
       cout <<" wrong" << endl;
   }
   
   return 0;
}


///

///
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
     char l[60];
     cout<<"enter a string";
     
     cin.getline(l,60);
     
     cout<<" have length of  "<<strlen(l)<<endl;
     return 0;
    
}

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char s[20]="sumit ";
	char b[20]="raghav";
	strncat(s,b,2);
	cout<<s <<" "<<endl;
}

//
#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char s[20]="sumit";
	char b[20]="raghav";
	strcat(s,b);
	cout<<s<<endl;
}

//
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
     char s[50]="good";
     char s2[60]="";
     strcpy(s2,s);
     cout<<s2;
    
}
//
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
     char s[50]="good";
     char s2[60]="";
     strncpy(s2,s,3);
     cout<<s2;
    
}*/


/*#include<iostream>
#include<cstring>
using namespace std;

 /int main() {
   char s[20]="raghav";
   
   char s2[10]="k";
   if(strstr (s,s2)!= NULL)
   cout<<strstr(s,s2)<<endl;
   else
   cout<<"error";
   return 0;

} 

#include<iostream>
#include<cstring>
using namespace std;

int main() {
   char s[50]="raghav";
   cout << strrchr(s,'a');

}

// comparing strings


#include<iostream>
#include<cstring>
using namespace std;

int main() {
   char s[40]="Hello";
   char s2[40]="HellO)";
   cout<<strcmp(s,s2);
}

//string to long integer and float

#include<iostream>
#include<cstring>
using namespace std;

int main() {
   char s[20]="231";
   char s2[20]="57.21";

   long int x=strtol(s,NULL,10);
   float y=strtof(s2,NULL);
   cout<<x+10<<endl<<y-4.5<<endl;
   return 0;
}

// ********** Class string **********

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="hello;";
   cout<<str;
}

//class functions
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="hello";
   cout <<str.length()<<endl;
   cout<<str<<endl;
}

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="hello77";
   cout<<str.size();
} 

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="helooyiu";
   cout<< str.capacity();
}

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="helooyiu";
   str.resize(50);
   cout<< str.capacity();
}

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="helooyiu";
   cout<< str.max_size();
}

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="helooyiu";
   str.clear();
   cout<<str.length();
}

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
   string str="helooyiu";
   if(str.empty()) {
      cout<<"it is empty"<<endl;
   
   } else{
      cout<<" it's not:  " <<str<<endl;
   }
}
*/


