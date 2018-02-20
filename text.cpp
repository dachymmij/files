#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream abcfile {"abc.txt"};
 
   //cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   
   if (abcfile){//abcfile.is_open() optional
	      cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

			abcfile<<a<<" "<<b<<" "<<c;
	      cout<<endl<<endl;

   }else{
	   cout<<"error opening data.txt"<<endl;
	   
//	   abcfile.close();
	   }

   //cout<<endl<<endl;
		   abcfile.close();

   return 0;
}
