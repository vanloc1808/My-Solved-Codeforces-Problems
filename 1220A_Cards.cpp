#include <iostream>
#include <vector>
#include <set>
#include <concurrent_priority_queue.h>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name."inp", "r", stdin); freopen_s(&fo, name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e17


int main()
{
    fastinout;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[26] = { 0 };
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 1; i <= a['n' - 'a']; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 1; i <= a['z' - 'a']; i++)
    {
        cout << 0 << " ";
    } 
    return 0;
}
