#include<iostream>
using namespace std;
main()
{
float vegetablesrate;
float fruitsrate;
float vegetablesweight;
float fruitsweight;
float vegcost;
float frucost;
float total;
float grandtotal;
cout<<"Enter the vegetables rate in coins:";
cin>>vegetablesrate;
cout<<"Enter the fruit rate in coins:";
cin>>fruitsrate;
cout<<"Enter the weight of vegetables in kgs:";
cin>>vegetablesweight;
cout<<"Enter the weight of fruits in kgs:";
cin>>fruitsweight;
vegcost=vegetablesrate*vegetablesweight;
frucost=fruitsrate*fruitsrate;
total=vegcost+frucost;
grandtotal=(total/194)*100;
cout<<"Rate in rps:"<<grandtotal;
}

