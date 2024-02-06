/*Suppose you are working as a Gym trainer and you want to calculates and displays a person’s body mass index (BMI).
 The BMI is often used to determine whether a person lifestyle is overweight or underweight.
A person’s BMI is calculated with the following formula:

BMI = weight /height^2
where weight is measured in pounds and height is measured in inches. Display a message indicating whether the person has optimal weight,
 is underweight, or is overweight. A sedentary person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25.
  If the BMI is less than 18.5, the person is considered to be underweight.
If the BMI value is greater than 25, the person is considered to be overweight.*/
#include<iostream>
 using namespace std;
 class Bmi
 {
     public :
     double weight,bmi,height;
     void bmii()
     {
         cout<<"Enter your the weight (in pound) and height (in inches)  : "<<endl;
         cin>>weight>>height;
         //performing BMI formula
         bmi=(weight/(height*height))*703;
         cout<<"Your BMI is "<<bmi<<endl;
         if(bmi>=18.5&&bmi<=25)
            cout<<"You're optimal"<<endl;
         else
            if(bmi<18.5)
            cout<<"you're underweight"<<endl;
            else
              if(bmi>25)
                cout<<"Your overweight "<<endl;
     }
 };
   int main()
   {
       Bmi obj;
       obj.bmii();
       return 0;

   }
