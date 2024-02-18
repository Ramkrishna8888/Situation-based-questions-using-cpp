#include<iostream>
using namespace std;
class SI
{
   private:
       int p,r,t,sw,pt;
       float si;
       public:
           jump:
       void getdata()
       {
           cout<<"Enter the Principal rate,rate of interest,time duration"<<endl;
             cin>>p>>r;
             //getting input for time period
             cout<<"Time period : "<<endl;
             cout<<"PRESS 1 for Days"<<endl<<"PRESS 2 for Weeks"<<endl<<"PRESS 3 for Months"<<"PRESS 4 for Year"<<endl;
             cin>>sw;

       }
       void putdata()
       {
           switch(sw)
           {
               case 1:
               //calculating time period in days
                 cout<<"Enter the time period in Days"<<endl;
                   cin>>t;
                 //condition for the leap year
                  if(t>365)
                  {
                   pt=365-t;

                  }
                  else
                  {
                      pt=366-t;
                  }
                  break;
               case 2:
                //calculating the Time period in weeks
                if(t>=1||t<=)
                cout<<"Enter the time period in weeks"<<endl;
                  cin>>t;
                  pt=52-t;
                  break;
               case 3:
                //calculating the Time period in month
                cout<<"Enter the time period in months"<<endl;
                   cin>>t;
                   if(t>=1||t<=12)
                   pt=12-t;
                    else
                      cout<<"Invalid input"<<endl<<"Redirecting to Period time"<<endl;
                      goto jump;

           }

           si=(p*r*t)/100;
           cout<<"Simple interest = "<<si<<endl;

       }


};
int main()
{
    SI obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
