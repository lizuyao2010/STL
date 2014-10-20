#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define tr(container,it)\
   for (typeof((container).begin()) it = (container).begin(); it != (container).end(); it++)

#define all(c) (c).begin(), (c).end()
#define present(c,element) ((c).find(element) != (c).end())
#define cpresent(container,element) (find(all(c),element) != (c).end()
int f(const vector<int>& v)
{
    int r=0;
    tr(v,it) {
        r += (*it)*(*it);
    }
    return r;
}
int main()
{
    vector<int> v(10,5);
    vector<int> v2(5,1);
    v.insert(v.begin(),all(v2));
    sort(all(v));
    reverse(all(v));
    find(all(v),5);
    set< pair <string, pair<int,vector<int> > > > SS;
    map<string, int> M;
    int r=0;
    tr(M, it)
    {
        r+=it->second;
    }
    return 0;
}
