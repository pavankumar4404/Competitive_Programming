#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> dijkstra(vector<vector<int>> adj[], int v, int src){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // {dist, node}
        vector<int> dist(v, INT_MAX);
        pq.push({0, src});
        dist[src] = 0;
        while(!pq.empty()){
            int node = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            for(auto i: adj[node]){
                int adjNode = i[0];
                int ew = i[1];
                if(ew + d < dist[adjNode]){
                    dist[adjNode] = ew + d;
                    pq.push({ d + ew, adjNode});
                }
            }
        }
        return dist;
    }
};


int main(){
    int V = 3, E = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.dijkstra(adj, V, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}