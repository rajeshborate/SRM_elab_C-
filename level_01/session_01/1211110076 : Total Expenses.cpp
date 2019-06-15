#include <iostream>
using namespace std;
int main()
{	
  float item, price,dis,tot;
  cin>>item>>price;
  float amt;
  amt=item*price;
  if(amt>10000){
  	dis=amt*0.2;
    tot=amt-dis;
    cout<<tot;
  }
  else
    cout<<amt;
  

	return 0;
}
