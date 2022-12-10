#include<iostream>
using namespace std;
bool Palindrome(int x)
{
  int rem=0, rev=0, temp=0;
  while(temp!=0)
  {
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
  }
  if(rev==x)
    return true;
  else
    return false;
}

int main()
{
  int num;
  cout<<"Enter a number: "<<endl;
  cin>>num;
  if(num<0 || num%10==0)
  {
    cout<<"False"<<endl;
    return 0;
  }
  if(Palindrome(num))
     cout<<"True"<<endl;
  else
     cout<<"False"<<endl;
  return 0;
}
