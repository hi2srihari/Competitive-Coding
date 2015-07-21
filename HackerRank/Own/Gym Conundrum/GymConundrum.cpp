#include<iostream>
using namespace std;
int noOfRestDays(int C,int D)
{
  int rest=0;
  int m=1,a=1;
  if(C>D)
    return 0;
  else
  {
    for(int i=0;i<m;i++)
    {
      for(;a<m;a++)
      {
	if((m*C+a)<=D)
	{
	  cout<<endl<<(m*C)+a<<" is a rest day\n";
	  rest++;
	}
	  
	else
	  return rest;
      }
    }
  }
}
main()
{
  int T;
  cin>>T;
  int res[10];
  for(int i=0;i<T;i++)
  {
    int C=0,D=0;
    cin>>C>>D;
    res[i]=((D-noOfRestDays(C,D))/C);
  }
  for(int i=0;i<T;i++)
  {
    cout<<res[i]<<endl;
  }
}
