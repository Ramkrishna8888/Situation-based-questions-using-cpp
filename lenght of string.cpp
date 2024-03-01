#include<bits/stdc++.h>
using namespace std;
// created a getstring name function for counting the length of the string
int getstring(char name[])
{
    int count=0;
for(int i =0;name[i]!='\0';i++)
{
   count++;
}
return count;
}
int main()
{
   // using character array
    char name[20];
    cin>>name;
    int n = getstring(name);
    cout<<"The length of the string is "<<n;
    return 0;
}
