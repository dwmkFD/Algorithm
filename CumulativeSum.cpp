#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n; cin >> n;
	vector<long long> v( n );
	vector<long long> sum( n + 1, 0 );

	for ( long long i = 0; i < n; ++i )
		cin >> v[i];

	for ( long long i = 0; i < n; ++i )
		sum[i + 1] = sum[i] + v[i];

	long long q; cin >> q;

	for ( long long i = 0; i < q; ++i )
	{
		long long l, r;
		cin >> l >> r;
		--l;

		cout << sum[r] - sum[l] << endl;
	}

	return ( 0 );
}
