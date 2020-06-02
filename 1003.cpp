#include <bits/stdc++.h>
using namespace std;
int arr[44]={1,1,};

int fibo(int n)
{
	if(n<=1)
		return arr[n];
	else
	{
		if(arr[n]>0)
			return arr[n];
	}
	return arr[n]=fibo(n-1)+fibo(n-2);
}
int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int tmp;
		cin >> tmp;
		if(tmp==0)
			printf("1 0\n");
		else if(tmp==1)
			printf("0 1\n");
		else
		{
			fibo(tmp);
			cout << arr[tmp-2] << " " << arr[tmp-1] << endl;
		}
	}
	return 0;
}