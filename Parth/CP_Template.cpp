// ----------------------------- CP BOILERPLATE (C++17) -----------------------------
/*
  Tips:
  - Toggle DEBUG locally to enable dbg(...) prints.
  - Use FOR/ROF for loops, all(...) for ranges.
  - modint: modular arithmetic (default MOD = 1e9+7) — change as needed.
  - DSU, Fenwick (BIT), SegTree (point update / range query) included.
  - nCr precompute (fac/ifac) + sieve provided.
  - y_combinator for neat recursive lambdas.
*/

#include <bits/stdc++.h>
using namespace std;

//------------------------------ Optional PBDS -------------------------------------
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class Key, class Cmp = less<Key>>
using ordered_set = tree<Key, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;
*/

//------------------------------ Fast I/O ------------------------------------------
static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

//------------------------------ Macros & Utils ------------------------------------
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)((x).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
using ll = long long;
using ull = unsigned long long;
using ld = long double;

template <class T>
inline bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

//------------------------------ Debug (toggle) ------------------------------------
#ifdef LOCAL
#define dbg(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
template <class T>
void _print(const T &v);
template <class A, class B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ',' << p.second << ')'; }
template <class T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '[';
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (i)
            os << ',';
        os << v[i];
    }
    return os << ']';
}
template <class T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << '{';
    bool f = 1;
    for (auto &x : v)
    {
        os << (f ? "" : ",") << x;
        f = 0;
    }
    return os << '}';
}
template <class K, class V>
ostream &operator<<(ostream &os, const map<K, V> &v)
{
    os << '{';
    bool f = 1;
    for (auto &x : v)
    {
        os << (f ? "" : ",") << x.first << ':' << x.second;
        f = 0;
    }
    return os << '}';
}

inline void debug_out_impl() { cerr << '\n'; }
template <typename T, typename... Ts>
void debug_out_impl(const char *names, T &&value, Ts &&...args)
{
    while (*names == ',' || *names == ' ')
        ++names;
    const char *comma = names;
    int par = 0;
    while (*comma && (*comma != ',' || par))
    {
        if (*comma == '(')
            ++par;
        if (*comma == ')')
            --par;
        ++comma;
    }
    cerr.write(names, comma - names) << " = " << value;
    if constexpr (sizeof...(args))
    {
        cerr << " | ";
        debug_out_impl(comma, std::forward<Ts>(args)...);
    }
    else
        cerr << '\n';
}
template <typename... Ts>
void debug_out(const char *names, Ts &&...args) { debug_out_impl(names, std::forward<Ts>(args)...); }
#else
#define dbg(...)
#endif

//------------------------------ RNG / Hash ----------------------------------------
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
static inline ull rng64() { return rng(); }
struct custom_hash
{
    static ull splitmix64(ull x)
    {
        x += 0x9e3779b97f4a7c15ULL;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
        x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
        return x ^ (x >> 31);
    }
    size_t operator()(ull x) const { return splitmix64(x + 0x9e3779b97f4a7c15ULL); }
    template <class T, class U>
    size_t operator()(const pair<T, U> &p) const
    {
        return splitmix64(((ull)p.first << 32) ^ (ull)p.second);
    }
};

//------------------------------ Modint --------------------------------------------
const int MOD = 1'000'000'007;
// const int MOD = 998244353;
struct mint
{
    int v;
    mint(long long x = 0)
    {
        v = int(x % MOD);
        if (v < 0)
            v += MOD;
    }
    mint &operator+=(const mint &o)
    {
        v += o.v;
        if (v >= MOD)
            v -= MOD;
        return *this;
    }
    mint &operator-=(const mint &o)
    {
        v -= o.v;
        if (v < 0)
            v += MOD;
        return *this;
    }
    mint &operator*=(const mint &o)
    {
        v = int((long long)v * o.v % MOD);
        return *this;
    }
    friend mint operator+(mint a, const mint &b) { return a += b; }
    friend mint operator-(mint a, const mint &b) { return a -= b; }
    friend mint operator*(mint a, const mint &b) { return a *= b; }
    static mint pow(mint a, long long e)
    {
        mint r = 1;
        while (e)
        {
            if (e & 1)
                r *= a;
            a *= a;
            e >>= 1;
        }
        return r;
    }
    static mint inv(mint a) { return pow(a, MOD - 2); }
    mint &operator/=(const mint &o) { return *this *= inv(o); }
    friend mint operator/(mint a, const mint &b) { return a /= b; }
    friend ostream &operator<<(ostream &os, const mint &m) { return os << m.v; }
};

//------------------------------ nCr Precompute ------------------------------------
struct Comb
{
    vector<mint> fac, ifac;
    Comb() {}
    Comb(int n) { init(n); }
    void init(int n)
    {
        fac.assign(n + 1, 1);
        ifac.assign(n + 1, 1);
        FOR(i, 1, n + 1)
        fac[i] = fac[i - 1] * i;
        ifac[n] = mint::inv(fac[n]);
        ROF(i, 1, n)
        ifac[i - 1] = ifac[i] * i;
    }
    mint C(int n, int r)
    {
        if (r < 0 || r > n)
            return 0;
        return fac[n] * ifac[r] * ifac[n - r];
    }
};

//------------------------------ Sieve (primes up to N) ----------------------------
vector<int> sieve_primes(int N)
{
    vector<int> lp(N + 1), primes;
    for (int i = 2; i <= N; ++i)
    {
        if (!lp[i])
            lp[i] = i, primes.push_back(i);
        for (int p : primes)
        {
            long long d = 1LL * p * i;
            if (p > lp[i] || d > N)
                break;
            lp[d] = p;
        }
    }
    return primes;
}

//------------------------------ DSU ------------------------------------------------
struct DSU
{
    int n;
    vector<int> p, r;
    DSU(int n = 0) { init(n); }
    void init(int n_)
    {
        n = n_;
        p.resize(n);
        r.assign(n, 0);
        iota(all(p), 0);
    }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (r[a] < r[b])
            swap(a, b);
        p[b] = a;
        if (r[a] == r[b])
            r[a]++;
        return true;
    }
};

//------------------------------ Fenwick (BIT) -------------------------------------
template <class T>
struct Fenwick
{
    int n;
    vector<T> bit;
    Fenwick(int n = 0) { init(n); }
    void init(int n_)
    {
        n = n_;
        bit.assign(n + 1, T{});
    }
    void add(int idx, T val)
    {
        for (++idx; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }
    T sumPrefix(int idx)
    {
        T r{};
        for (++idx; idx > 0; idx -= idx & -idx)
            r += bit[idx];
        return r;
    }
    T sumRange(int l, int r)
    {
        if (r < l)
            return T{};
        return sumPrefix(r) - (l ? sumPrefix(l - 1) : T{});
    }
};

//------------------------------ Segment Tree (point upd, range query) -------------
template <class T>
struct SegTree
{
    int n;
    T ID; // identity for op
    vector<T> st;
    function<T(const T &, const T &)> op;
    SegTree(int n = 0, T id = T{}, function<T(const T &, const T &)> f = [](const T &a, const T &b)
                                   { return a + b; })
        : n(n), ID(id), op(move(f)) { st.assign(2 * n, ID); }
    void init(int n_, T id, function<T(const T &, const T &)> f)
    {
        n = n_;
        ID = id;
        op = move(f);
        st.assign(2 * n, ID);
    }
    void build(const vector<T> &a)
    {
        n = sz(a);
        st.assign(2 * n, ID);
        for (int i = 0; i < n; ++i)
            st[n + i] = a[i];
        for (int i = n - 1; i > 0; --i)
            st[i] = op(st[i << 1], st[i << 1 | 1]);
    }
    void setPoint(int p, T v)
    {
        for (st[p += n] = v; p > 1; p >>= 1)
            st[p >> 1] = op(st[p], st[p ^ 1]);
    }
    T query(int l, int r)
    { // [l,r)
        T resl = ID, resr = ID;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1)
        {
            if (l & 1)
                resl = op(resl, st[l++]);
            if (r & 1)
                resr = op(st[--r], resr);
        }
        return op(resl, resr);
    }
};

//------------------------------ y_combinator --------------------------------------
template <class F>
struct y_combinator_result
{
    F f;
    template <class T>
    explicit y_combinator_result(T &&f) : f(std::forward<T>(f)) {}
    template <class... Args>
    decltype(auto) operator()(Args &&...args)
    {
        return f(*this, std::forward<Args>(args)...);
    }
};
template <class F>
decltype(auto) y_combinator(F &&f)
{
    return y_combinator_result<std::decay_t<F>>(std::forward<F>(f));
}

//------------------------------ Read helpers --------------------------------------
template <class T>
inline void read(T &x) { cin >> x; }
template <class A, class B>
inline void read(pair<A, B> &p)
{
    read(p.first);
    read(p.second);
}
template <class T>
inline void read(vector<T> &a)
{
    for (auto &x : a)
        read(x);
}

//------------------------------ Solve --------------------------------------------
void solve()
{
    // Write your per-testcase solution here.
    // Example: echo the sum of an array.
    int n;
    read(n);
    vector<ll> a(n);
    read(a);
    ll ans = 0;
    for (ll x : a)
        ans += x;
    cout << ans << '\n';
}

//------------------------------ Main ---------------------------------------------
int main()
{
    fastio();
    int T = 1;
    if (!(cin >> T))
        return 0; // If input empty, exit.
    while (T--)
        solve();
    return 0;
}