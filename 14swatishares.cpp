/*Swati bought 600 shares of stock at a price of Rs.21.77 per share.
She must pay her stock broker a 2% commission for the transaction.
Construct a program that the display the following:

-The amount paid for the stock alone (without the commission)
-The amount of the commission
-The total amount paid*/

#include<iostream>
using namespace std;
 class shares
 {
     public :
     float price=21.77,shares=600,d,c;
     void amount()
     {
         c=shares*price;
     cout<<"The amount paid for the stock (without commission) is "<<endl<<c<<endl;
     //finding the 2% commission
     d=(shares*price)*2/100;
     cout<<"The amount of the commission is "<<d<<endl;
     //Total amount paid after commission
     cout<<"Total amount paid = "<<d+c<<endl;
     }
 };
 int main()
 {
     shares obj;
     obj.amount();
     return 0;
 }
