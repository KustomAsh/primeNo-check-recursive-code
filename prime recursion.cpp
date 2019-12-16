#include<iostream>
using namespace std;
bool fun(int n,int t);
int main()
{
	int num;
	cout << "Enter Number : "; cin >> num;
	if(fun(num,num/2)==true) cout << "It is prime.";
	else cout << "It is not Prime.";
	system("pause>0");
}
bool fun(int n,int t)
{
	if (t < 2)return true;
	if (n%t == 0)
		return false;
	else return fun(n, t - 1);
}