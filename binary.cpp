#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream abcfile {"abc.bin", ios::binary};
 
   //cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   
   if (abcfile){//abcfile.is_open() optional
	     cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

			//abcfile<<a<<" "<<b<<" "<<c;
			abcfile.write(reinterpret_cast <char*> (&a), sizeof(a));
			abcfile.write(reinterpret_cast <char*> (&b), sizeof(b));
			abcfile.write(reinterpret_cast <char*> (&c), sizeof(c));
			
	     cout<<endl<<endl;

   }else{
	   cout<<"error opening data.txt"<<endl;
	   
//	   abcfile.close();
	   }

   //cout<<endl<<endl;
		   abcfile.close();

   return 0;
}
