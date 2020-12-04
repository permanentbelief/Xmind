#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>

#include <thread>
#include <atomic>


using namespace std;


void fun()
{
	cout << "A new thread !" << endl;
}

int sum = 0;


void func(size_t num)
{
	for (int i = 0; i < num; i++)
	{
		sum++;
	}
}

typedef bool(*GTF) (int, int);
bool greater_func1(int l, int r)
{
	return l > r;
}
int main()
{
	GTF f = greater_func1;
	cout << f(1, 2) << endl;
	//thread t(fun);
	////t.join();
	//cout << "Main thread!" << endl;

	//cout << sum << endl;
	//thread t1(func, 1000000);
	//thread t2(func, 1000000);
	//t1.join();
	//t2.join();
	//cout << sum << endl;


	system("pause");
}