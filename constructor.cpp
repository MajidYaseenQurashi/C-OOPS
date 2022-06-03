#include<iostream>
using namespace std;
class abc
{
char nm[]; 
public:
abc ( ) {
cout<<"enter your name:"; 
cin>>nm;
} 
void display( )
{
cout<<nm <<endl;
}
};
int main( )
{
abc d; 
d.display( );
//d.abc();
return 0;
} 

