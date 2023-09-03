
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (ll i = 0; i < ll(n); ++i)
#define repi1(i, n) for (ll i = 1; i <= ll(n); i++)
#define rep2(i, s, n) for (ll i = ll(s); i <= ll(n); ++i)
#define rep3(i, s, n, d) for (ll i = ll(s); i < ll(n); i += d)
#define rep(...) overload4(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep1(i, n) for (ll i = ll(n) - 1; i >= 0; i--)
#define rrep2(i, n, t) for (ll i = ll(n) - 2; i >= (ll)t; i--)
#define rrep3(i, n, t, d) for (ll i = ll(n) - 1; i >= (ll)t; i -= d)
#define rrep(...) overload4(__VA_ARGS__, rrp3e, rrep2, rrep1)(__VA_ARGS__)
#define finalR fMax[0] =combo[0][0];fMin[0] = combo[0][0];lMax[n - 1] = combo[n - 1][1];lMin[n - 1] = combo[n - 1][1];
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define SUM(a) accumulate(all(a), 0LL)
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define SORT(a) sort(all(a));
#define REV(a) reverse(all(a));
#define SZ(a) int(a.size()
#define popcount(x) __builtin_popcountll(x)
#define pf push_front
#define pb push_back
#define ef emplace_front
#define eb emplace_back
#define ppf pop_front
#define ppb pop_back
#define endl "\n"
#define ch char
#ifdef __LOCAL
#define debug(...)            \
{                         \
cout << #__VA_ARGS__; \
cout << ": ";         \
print(__VA_ARGS__);   \
cout << flush;        \
}
#else
#define debug(...) void(0);
#endif
#define INT(...)     \
int __VA_ARGS__; \
scan(__VA_ARGS__)
#define LL(...)     \
ll __VA_ARGS__; \
scan(__VA_ARGS__)
#define STR(...)        \
string __VA_ARGS__; \
scan(__VA_ARGS__)
#define CHR(...)      \
char __VA_ARGS__; \
scan(__VA_ARGS__)
#define DBL(...)        \
double __VA_ARGS__; \
scan(__VA_ARGS__)
#define LD(...)     \
ld __VA_ARGS__; \
scan(__VA_ARGS__)
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using LP = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using vc = vector<char>;
using vvc = vector<vc>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vp = vector<P>;
using vvp = vector<vp>;
template <class T>
using PQ = priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>>;
void scan() {}
template <class Head, class... Tail>
void scan(Head &head, Tail &...tail)
{
	cin >> head;
	scan(tail...);
}
template <class T>
void print(const T &t) { cout << t << '\n'; }
template<class T>
void printer(const T &t) {
	cout << t << " ";
}
template <class Head, class... Tail>
void print(const Head &head, const Tail &...tail)
{
	cout << head << ' ';
	print(tail...);
}
void rearrange(const vi &) {}
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
const string yes[] = {"no", "yes"};
const string Yes[] = {"No", "Yes"};
const string YES[] = {"NO", "YES"};
const int inf = 1001001001;
const ll linf = 1001001001001001001;
void finalGod() {
	INT(n);
	if(n == 0) print(0);
	vi v;
	rep1(i,n){
		INT(x);
		v.pb(x);
	}
	SORT(v);
	ll count = 0;
	rep1(i,n){
		if(v[i] != v[i+1]){
			count++;
		}
	}
	print(count);

}
int main()
{
	clock_t start, end;
	start = clock();
	finalGod();
	end = clock();
	cerr << "TOTAL RUN TIME: " << fixed << showpoint << setprecision(5) << ((ld) (end - start) / (ld) CLOCKS_PER_SEC);
}