#include<iostream>
using namespace std;
main()
{
string movie;
int adultprice;
int childprice;
int adultsold;
int childsold;
int percentage;
float totalAmount;
float donation;
cout<<"Movie name:";
cin>>movie;
cout<<"Enter the adult ticket price:";
cin>>adultprice;
cout<<"Enter the child ticket price:";
cin>>childprice;
cout<<"Number of adult ticket sold:";
cin>>adultsold;
cout<<"Number of child ticket sold:";
cin>>childsold;
cout<<"Enter Percentage to donate:";
cin>>percentage;
totalAmount=(adultprice*adultsold)+(childprice*childsold);
cout<<"Total amount generated:"<<totalAmount<<endl;
donation=totalAmount-7000;
cout<<"Amount after donation:"<<donation;
}
