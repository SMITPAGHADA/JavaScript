#include <iostream>
using namespace std;

int main()
{
   int x,y,z;
   cout<<"Enter three numbers: ";
   cin>>x>>y>>z;

   if(x==y || y==z || z==x){
    cout<<"- if all numbers are same, then no minimum value can be displayed."<<endl;
   }else{
    if (x<y)
    {
       if (x<z)
       {
          cout<<"Minimum value is "<<x<<endl;
       }
       else
       {
          cout<<"Minimum value is "<<z<<endl;
       }
    }
    else{
        if (y<z)
        {
           cout<<"Minimum value is "<<y<<endl;
        }
        else
        {
           cout<<"Minimum value is "<<z<<endl;
        }
    }
   }
   
}
