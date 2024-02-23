

#include <iostream>
using namespace std;

int main()
{

    char s1;
    char s2;

    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the first string: ";
    cin >> s2;


    if (s1 <'m' && s2 <'m' || s1 <'M' && s2<'M')
    {
        cout<< "enter the less than 'm' and 'M '";
    }else{
       char s3;
       s3=s1;
       s1=s2;
       s2=s3;
       cout<<"First letter is "<<s1<<endl;
       cout<<"second letter is "<<s2<<endl;
    }
    
}
