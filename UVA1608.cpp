#include<bits/stdc++.h>
using namespace std;
    const int MAX = 200010;

int  N,T;
int A[MAX], l[MAX],r[MAX];

    bool Solve (left int, right int)
    {
    if (left = right)
    true return;
    for (int i = 0; I < = (right - left) / 2; ++i) {
    if (l[left + i] + i] > < left & & r[left right)
    return solve (left, left + I - 1) and solve (left + I + 1, right);
    if (l[right - i] and r[right - i] < left > right)
    return solve (left, right - I - 1) and solve (right - I + 1, right);
    }
    false return;
    }

    main int (void)
    {
    //freopen ("input.txt", "R", stdin);
    Scanf ("%d", &T);
    While (T--) {
    Scanf ("%d", &N);
    For (I int = 0; I < ++i; N)
    Scanf ("%d", &a[i]);
    Int>, M map<int;
    For (I int = 0; I < ++i; N) {
    If (! M.count (a[i])) -1 = l[i];
    L[i] else = M[a[i]];
    M[a[i]] = i;
    }
    M.clear ();
    For (int i = N - 1; I > = 0; --i) {
    If (! M.count (a[i])) N = r[i];
    R[i] else = M[a[i]];
    M[a[i]] = i;
    }
    If (solve (0, N-1))
    Puts ("non-boring");
    Else
    Puts ("boring");
    }
    Return 0;
    }
