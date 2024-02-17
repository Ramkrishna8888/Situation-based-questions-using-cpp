/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
Output

Output the account balance after the attempted transaction, given as a number with two digits of precision
If there is not enough money in the account to complete the transaction, output the current bank balance.*/
#include<iostream>
using namespace std;
 int main()
 {
     int n=0;
     cin>>n;
     int i,x,y;
     int ar[n];
         for(i=0;i<n;i++)
     {
       cin>>ar[i];
     }
     cin<<"Enter the value of  the x and y "<<endl;
       cinx,y
     for(i=0;i<n;i++)
     {
         if(ar[i]%5==0)
         {
             int ac=120;
             ac=ac-ar[i];
             ar[i]=ac-0.5;
           cout<<ar[i]<<endl;
     }
     else
        cout<<"Incorrect withdrawl amount "<<endl;
     }
return 0;

 }
