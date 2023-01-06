#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std ;

int main()
{
cout << "Press Enter 3 times to reveal your future.";
for (int y=0; y<=2; y++){
cin.get() ;

}
srand(time(0));
int x = rand()%9;
string z;
if(x ==0) z ="A" ;
else if (x ==1) z="B+" ;
else if (x ==2) z="B" ;
else if (x ==3)  z="C+" ;
else if (x ==4) z="C " ;
else if (x ==5) z= "D+ " ;
else if (x ==6) z= "D";
else if (x ==7) z= "F ";
else  z="W" ;

 cout << "You will get "<< z << "in this 261102. ";
 return 0;

}
