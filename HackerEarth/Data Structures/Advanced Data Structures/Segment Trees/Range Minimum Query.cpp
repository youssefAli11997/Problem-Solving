#include <iostream>
using namespace std;
const int MAX = 100005;
int arr[MAX], seg[4 * MAX + 5], n, q, x, y;

void build(int node, int start, int end){
    if(start == end)
        seg[node] = arr[start];
    else{
        int mid = start + (end - start) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        seg[node] = min(seg[2 * node], seg[2 * node + 1]);
    }
}

void update(int node, int start, int end, int idx, int val){
    if(start == end){
        arr[idx] = val;
        seg[node] = val;
    }
    else{
        int mid = start + (end - start) / 2;
        if(idx >= start && idx <= mid)
            update(2 * node, start, mid, idx, val);
        else
            update(2 * node + 1, mid + 1, end ,idx, val);
        seg[node] = min(seg[2 * node], seg[2 * node + 1]);
    }
}

int query(int node, int start, int end, int l, int r){
    if(start >= l && end <= r) // in
        return seg[node];
    else if(end < l || start > r) // out
        return (int)1e6;
    else{ // partially in, partially out
        int mid = start + (end - start) / 2;
        int p1 = query(2 * node, start, mid, l, r);
        int p2 = query(2 * node + 1, mid+1, end, l, r);
        return min(p1, p2);
    }
}

int main(){
    cin>>n>>q;
    for(int i=0; i<n; i++) cin>>arr[i];
    build(1, 0, n - 1);
    while(q--){
        char c; cin>>c;
        if(c == 'q'){
            int left, right;
            cin>>left>>right;
            int mn = query(1, 0, n - 1, left - 1, right - 1);
            cout<< mn <<endl;
        }else{
            cin>>x>>y;
            update(1, 0, n - 1, x-1, y);
        }
    }
    return 0;
}
