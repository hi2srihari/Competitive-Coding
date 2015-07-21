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

class MovingRooksDiv2 {
public:
	string move(vector <int>, vector <int>);
};

string MovingRooksDiv2::move(vector <int> Y1, vector <int> Y2) {
	int s;
	s=Y1.size()-1;
	int i,j;
	for(int k=s;k>0;k--)
	{
		i=0;j=0;
		for(i=0;i<=s;i++)
		{
			if(Y1[i]==s)
				break;
		}
		for(j=0;j<=s;i++)
		{
			if(Y2[i]==s)
				break;
		}
		if(k==s)
		{
			if(i>j)
				return "Impossible";
		}
		else
		{
			int p=0;
			int h;
			if(i==j)
				continue;
			else if(i<j)
			{
				if(Y1[j]>Y1[i])
					return "Impossible";
			}
			else
			{
				for(h=j;h>=0;h--)
				{
					if(Y1[h]>k)
					{
						p=1;
						break;
					}
				}
				if(p==0 or Y1[h]!=Y2[h])
					return "Impossible";
			}	
		}
	}
	return "Possible";
}


double test0() {
	int t0[] = {0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {0,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {3,1,2,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,2,1,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {3,1,2,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,2,0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
