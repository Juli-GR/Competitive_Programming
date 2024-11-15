// g++ j.cpp -o z -O2 -std=c++17
#include <bits/stdc++.h>
#define fore(i, a, b) for (int i =a; i<b; i++)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define pll pair<ll,ll>
#define fst first
#define snd second
#define vec vector<ll>
using namespace std;

int main(){FIN;

    ll tita, n; cin >> tita >> n;
    double pi = 2 * acos(0.0);
    double tantita = tan((90-tita)*pi/180);
    double overlap = 0;
    ll altura = 0;
    vector<pll> v(n);
    fore(i,0,n){
        cin >> v[i].fst >> v[i].snd;
    }
    sort(ALL(v));
    pll last = v[0];
    fore(i,0,n){
        if (v[i].fst + v[i].snd * tantita >= last.fst + last.snd * tantita){
            if (i!=0 && last.fst + last.snd * tantita > v[i].fst) {
                overlap += last.fst + last.snd * tantita - v[i].fst;
            };
            altura += v[i].snd;
            last = v[i];
        }
    }
    cout << setprecision(8) << fixed << tantita*altura - overlap << "\n";

    return 0;
}
