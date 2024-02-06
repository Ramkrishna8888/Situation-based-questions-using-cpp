/*With the growth of online shopping, Internet based companies are increasingly battling for sales.
 While price can be a factor, many companies such as Walmart and Amazon are now competing
 to find quicker ways to ship products to consumers. You have been hired by The Congo Company,
  a new start up online merchant that has ambitions to one day be larger than Amazon. First, they need
   to build out a program that can determine the number of days it takes for a package to reach them.
The Congo Company charges the following rates:
Weight of Package (in Kilograms) Rate per 200 miles
 2 KG or less: $1.10
 Over 2 Kg but not more than 6 Kg: $2.20
 Over 6 KG but not more than 10 Kg: $3.70
 Over 10 KG but not more than 20 KG: $4.80
Write a program using class object and appropriate functions which asks
 for the weight of the package and the distance it is to be shipped,
 then displays the charges and determine the number of days it takes for a package to reach them.*/

#include<iostream>
using namespace std;
class Merchant
{
   public :
       int miles=200;
       int wt;
       float p,d,dtd;
       void getdata()
       {
           cout<<"Enter the weight and the distance"<<endl;
             cin>>wt>>d;

       }

       void printdata()
{
    if(wt<=2)
    {
        p=wt*1.10;

    }
    else
    if(wt>2||wt<=6)
    {
        p=wt*2.20;

    }
    else
         if(wt>6||wt<10)
    {

        p=wt*3.70;
    }
      else
        if(wt>10||wt<20)
      {
          p=wt*40;

      }
    cout<<"Total charges = "<<p<<endl;
      dtd=d/miles;
     cout<<"The no. of days travel = "<<dtd;

}


};
int main()
{
   Merchant obj;
   obj.getdata();
   obj.printdata();
   return 0;
}

