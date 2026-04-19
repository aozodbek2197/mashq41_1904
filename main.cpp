// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={1,2,3,4,5};
    int x=3;

    int l=0,r=v.size()-1;
    while(l<=r){
        int m=(l+r)/2;
        if(v[m]==x){ cout<<m; break;}
        else if(v[m]<x) l=m+1;
        else r=m-1;
    }
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

vector<int> qs(vector<int> a){
    if(a.size()<=1) return a;
    int p=a[0];
    vector<int> l,r;
    for(int i=1;i<a.size();i++)
        (a[i]<=p?l:r).push_back(a[i]);

    auto L=qs(l), R=qs(r);
    L.push_back(p);
    L.insert(L.end(),R.begin(),R.end());
    return L;
}

int main(){
    vector<int> v={5,3,1};
    v=qs(v);
    for(int x:v) cout<<x<<" ";
}
