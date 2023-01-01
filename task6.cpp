#include<iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
float costperpound;
int areaperft;
cout<<"Enter the bag size in pounds:";
cin>>size;
cout<<"Enter cost of the bag:";
cin>>cost;
cout<<"Enter area covered by each bag in sq ft:";
cin>>area;
costperpound=(cost/size);
cout<<"Cost of the fertilizer per pound:"<<costperpound<<endl;
areaperft=area*size;
cout<<"Cost of fertilizing the area per sq ft:"<<areaperft;

}