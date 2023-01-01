#include<iostream>
using namespace std;
main()
{
int subonemarks;
int subtwomarks;
int subthreemarks;
int subfourmarks;
int subfivemarks;
string name;
float percentage;
cout<<"Name:";
cin>>name;
cout<<"Enter subject 1 marks:"<<endl;
cin>>subonemarks;
cout<<"Enter subject 2 marks:"<<endl;
cin>>subtwomarks;
cout<<"Enter subject 3 marks:"<<endl;
cin>>subthreemarks;
cout<<"Enter subject 4 marks:"<<endl;
cin>>subfourmarks;
cout<<"Enter subject 5 marks:"<<endl;
cin>>subfivemarks;
percentage=(subonemarks+subtwomarks+subthreemarks+subfourmarks+subfivemarks)/500.0*100;
cout<<"Percentage is:"<<percentage<<endl;
}