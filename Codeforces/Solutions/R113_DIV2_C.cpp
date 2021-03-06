/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); x++)
#define FORD(x, b, e) for(int x = b; x >= (e); x--)
#define REP(x, n) for(int x = 0; x < (n); x++)
#define VAR(v, n) __typeof(n) v = (n)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(x) ((int)(x).size())
#define FOREACH(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define PB push_back
#define ST first
#define ND second

inline string IntToStr(int x) { ostringstream ss; ss << x; return ss.str(); }
inline int StrToInt(string x) { int i; istringstream iss(x); iss >> i; return i; }

typedef vector<int> VI;
typedef long long LL;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

int n, x, counter = 0;
vector<int> V;
bool in = false;

int main()
{
	scanf("%d %d", &n, &x); V.resize(n);

	REP(i,n)
	{
		scanf("%d", &V[i]);
		if(V[i] == x) in = true;
	}

	if(in == false) { V.push_back(x); counter++; }

	sort(ALL(V));

	while(V[(V.size()+1)/2-1] != x)
	{
		V.push_back(x); sort(ALL(V)); counter++;
	}

	printf("%d\n", counter);

	return 0;
}
