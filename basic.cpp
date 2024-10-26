#include <iostream>
using namespace std;
int main()
{
    int a,b;
    /*cout<<"enter the number 1:";
    cin>>a;
    cout<<"enter the number 2:";
    cin>>b;
    cout<<"The Total is:"<<a+b<<endl;
    string c="Ajith Kumar";
    string d="Ranithkumar";
    cout<<c+" "+d;*/
    string str;
    cout<<"Enter The Name:";
    getline(cin,str);
    str.push_back('i');
    cout<<str<<endl;
    str.pop_back();
    cout<<str;
    return 0;

}
