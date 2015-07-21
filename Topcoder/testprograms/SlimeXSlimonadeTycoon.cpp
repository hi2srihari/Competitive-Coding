#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class SlimeXSlimonadeTycoon {
public:
	int sell(vector <int>, vector <int>, int);
};

int SlimeXSlimonadeTycoon::sell(vector <int> morning, vector <int> customers, int stale_limit) {
	int s;
	s=stale_limit;
	int ans=0;
	for(int i=0;i<morning.size();i++)
	{
		int j=i-s+1;
		if(j<0)
			j=0;
		for(;j<=i;j++)
		{
			if(customers[i]==0)
				break;
			if(customers[i]>=morning[j])
			{
				ans=ans+morning[j];
				morning[j]=0;
				customers[i]=customers[i]-morning[j];
			}
			else
			{
				ans=ans+customers[i];
				customers[i]=0;
				morning[j]=morning[j]-customers[i];
			}
		}
	}
	return ans;
}


//Powered by [KawigiEdit] 2.0!
