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

class BoxesDiv2 {
public:
	int findSize(vector <int>);
};

int BoxesDiv2::findSize(vector <int> candyCounts) {
	vector <int> a;
	vector <int> b;
	vector <int> a2;
	a2.push_back(1);
	for(int i=0;i<10;i++)
	{
		a2.push_back(2*a2[i]);
	}
	for(int i=0;i<candyCounts.size();)
	{
		for(int j=0;j<10;j++)
		{
			if(a2[j]>=candyCounts[i])
			{
				a.push_back(a2[j]);
				i++;
				break;
			}
		}
	}
	sort(a.begin(),a.end());
	for(;a.size()>1;)
	{
		for(int i=0;i<a.size();i++)
		{
			b.push_back(a[i]);
		}
		a.clear();
		for(int i=0;i<=b.size()-2;i=i+2)
		{
			a.push_back(b[i]+b[i+1]);
		}
		if(b.size()%2==1)
			a.push_back(b[b.size()-1]);
		b.clear();
		for(int i=0;a.size();)
		{
			for(int j=0;j<10;j++)
			{
				if(a2[j]>=a[i])
				{
					a[i]=a2[j];
					i++;
					break;
				}
			}
		}	
	}
	return a[0];
}


double test0() {
	int t0[] = {8,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BoxesDiv2 * obj = new BoxesDiv2();
	clock_t start = clock();
	int my_answer = obj->findSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 16;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {5,6};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BoxesDiv2 * obj = new BoxesDiv2();
	clock_t start = clock();
	int my_answer = obj->findSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 16;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BoxesDiv2 * obj = new BoxesDiv2();
	clock_t start = clock();
	int my_answer = obj->findSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 16;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1,1,13,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BoxesDiv2 * obj = new BoxesDiv2();
	clock_t start = clock();
	int my_answer = obj->findSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 32;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BoxesDiv2 * obj = new BoxesDiv2();
	clock_t start = clock();
	int my_answer = obj->findSize(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1024;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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
