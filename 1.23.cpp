#include <bits/stdc++.h>
using namespace std;

void last_digit(long long int x){
	int digit = x%10;
	x = x/10;
	cout<<digit;
}

int main()
{
	int base = 5;
	long long int n; cin>>n;

	long long int x = pow(5,n);

	for (int i = 1; i <= 2; ++i)
	{
		last_digit(x);
	}
	cout<<"\n";


}



