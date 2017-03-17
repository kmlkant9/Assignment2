#include <bits/stdc++.h>
using namespace std;

struct Edge
{    int source, endvertex, weight;
};

void BMF(const Edge edges[], int source, int ar[], int n, int e) {
    for(int i=0; i<n; i++)
        ar[i]=INT_MAX;

    ar[source]=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<e; j++) {
            if(ar[edges[j].source]+edges[j].weight<ar[edges[j].endvertex])
                ar[edges[j].endvertex]=ar[edges[j].source]+edges[j].weight;
        }
    }

    for(int i=0; i<e; i++) {
        if(ar[edges[i].source]+edges[i].weight<ar[edges[i].endvertex]) {
            cout<<"negative_cycle"<<endl;
        }
    }
    cout<<"source vertex "<< source<<":"<<endl;
    cout<<"Minimum costs vertex"<<endl;
    for(int i=0; i<n; i++) 
        cout<<i<<" is "<<ar[i]<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);

    int n,e; //n:no of nodes,e:no of edges
    cin>> n >> e;
    int source;
    cin >> source;
    Edge edges[e];
    int ar[n]; //to store min weight

    for(int i=0; i<e; i++) {
        cin>> edges[i].source >> edges[i].endvertex >> edges[i].weight;
    }

    BMF(edges, source, ar, n, e);
    return 0;
}
