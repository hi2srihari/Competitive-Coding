#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int l=0,b=0,len=0;
	char str1[81]="",str2[81]="";
	cin>>str1;
	for(;str1[len]!='\0';len++)
    {
        //loop to calculate length
    }
	//calculate length and breadth of rectangle
	/*constraint:
	floor(sqrt(len))<=l,b<=ceil(sqrt(len))
	 */
	b=(int)ceil(sqrt(len));
	l=(int)(sqrt(len))/b;
	/*now encrypt!!*/
	for(int i=0;i<b;i++)//iterate thru first b letters one at a time
	{
		for(int j=i;j<len;j=j+(b))
		{
			cout<<str1[j];
		}
		cout<<" ";
	}
	return 0;
}
