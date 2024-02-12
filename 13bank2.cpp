#include<iostream>
using namespace std;
class Transaction
{
    public:
    double bal,balance = 1000;
    double amount;
    //creating a function for deposite of amount
    void deposite()
    {
        cout<<"Enter amount "<<endl;
        cin>>amount;
        bal = balance + amount ;
        cout<<"Updated balance is : "<<bal;
    }
    //creating a function for withdrawl
    void withdrawl()
    {
        cout<<"Enter the amount to withdrawl "<<endl;
          cin>>amount;
          //checking balance, is it more than 1000 or not
          if(bal>1000)
          {
              bal=bal-amount;
              cout<<"The update amount is : \n";
              cout<<bal<<endl;
    }
           else
          cout<<"The amount is low can't withdrawl \n"<<endl;
    }
    // creating function for checking the balance
    void check()
    {
        cout<<"Your total balance is = "<<bal<<endl;

    }
    // function for exit
    void exit()
    {
       cout<<"Thankyou Have a nice day...";
    }
};
int main ()
{
    int choice;
    do
    {   Transaction t1;
        cout<<endl<<endl<<"Select your choice "<<endl;
        cout<<endl<<"1.Deposite \n2. Withdraw\n3.Check balance \n4 Exit"<<endl;
        cin>>choice;
     // using switch case for choosing the choices
        switch (choice)
        {
      case 1:
        t1.deposite();
        break;
      case 2:
         t1.withdrawl();
         break;
      case 3:
          t1.check();
          break;
      case 4:
           t1.exit();
           exit(0);
        }
    }
    while(choice!=5);
    return 0;

}
