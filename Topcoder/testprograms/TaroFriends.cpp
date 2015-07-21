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

class TaroFriends {
public:
	int getNumber(vector <int>, int);
};

int TaroFriends::getNumber(vector <int> coordinates, int X) {
	sort(coordinates.begin(),coordinates.end());
	int ans1;
	int n;
	n=coordinates.size();
	coordinates[0]=coordinates[0]+X;
		for(int j=1;j<n;j++)
		{
			int temp1=0;
			int temp2=0;
			temp1=abs(coordinates[j]+X-coordinates[0]);
			temp2=abs(coordinates[j]-X-coordinates[0]);
			if(temp1>temp2)
			{
				coordinates[j]=coordinates[j]-X;
			}
			else			{
				coordinates[j]=coordinates[j]+X;
			}
		}
		sort(coordinates.begin(),coordinates.end());
		ans1=coordinates[coordinates.size()-1]-coordinates[0];
			return ans1;
}


//Powered by [KawigiEdit] 2.0!
