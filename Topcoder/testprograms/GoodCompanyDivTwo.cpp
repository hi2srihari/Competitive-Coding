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

class GoodCompanyDivTwo {
public:
	int countGood(vector <int>, vector <int>);
};

int GoodCompanyDivTwo::countGood(vector <int> superior, vector <int> workType) 
{
	int ans=1;
	for(int i=0;i<superior.size()-1;i++)
	{
		int p=1;
		vector <int> temp;
		temp.erase(temp.begin(),temp.end());
		temp.push_back(workType[i]);
		for(int j=i+1;superior[j]==i and j<superior.size();j++)
		{
			temp.push_back(workType[j]);
			for(int k=0;k<temp.size()-1;k++)
			{
				if(workType[j]==temp[k])
				{
					p=0;
					break;
				}
			}
			if(p==0)
				break;
		}
		if(p==1)
			ans++;
	}
	return ans;
			
}


double test0() {
	int t0[] = {-1, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {-1, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {-1, 0, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 4, 3, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {-1, 0, 1, 0, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3, 3, 5, 2, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {-1, 0, 1, 1, 1, 0, 2, 5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 2, 3, 4, 5, 3, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {-1, 0, 0, 1, 1, 3, 0, 2, 0, 5, 2, 5, 5, 6, 1, 2, 11, 12, 10, 4, 7, 16, 10, 9, 12, 18, 15, 23, 20, 7, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4, 6, 4, 7, 7, 1, 2, 8, 1, 7, 2, 4, 2, 9, 11, 1, 10, 11, 4, 6, 11, 7, 2, 8, 9, 9, 10, 10, 9, 8, 8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodCompanyDivTwo * obj = new GoodCompanyDivTwo();
	clock_t start = clock();
	int my_answer = obj->countGood(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 27;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
