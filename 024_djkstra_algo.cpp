#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
#define forc(i,a,b) for(char i=a;i<=b;i++)
#define rep(i, n) forn(i, 0, n-1)

// Containers
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Methods
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()

#define v 9

// step 3:
void printSolution(int dist[]){
	cout << "Vertex \t Distance from Source" << endl;
    	for (int i = 0; i < v; i++)
        	cout << i << " \t\t\t\t" << dist[i] << endl;
}

// step 2:
// To find min distance from the src to i which is not yet included in spt tree.
int minDist(int dist[], bool sptSet[]){
	int min = INT_MAX, minIndex;
	for(int i = 0; i<v; i++){
		if(sptSet[i]==false && dist[i]<=min){
			min = dist[i], minIndex = i;
		}
	}
	return minIndex;
}


// step 1:
void dijkstra(int graph[v][v], int src){
	int dist[v]; // dist[i] will hold the shortest path from src to i.
	bool sptSet[v]; // sptSet[i] will be true if vertex i is included in spt tree.
	for(int i = 0; i<v; i++){
		dist[i] = INT_MAX, sptSet[i] = false;
	}
	dist[0] = 0;
	for(int i = 0; i<v-1; i++){

		// u = min distance vertex from the src
		// that are not processed yet
		int u = minDist(dist,sptSet);

		sptSet[u] = true; // marking picked vertex as processed

		for(int i = 0; i<v; i++){
			// condition: does'nt visited yet && there must be a edge between u and i &&
			// dist of u from src must not be infinite && dist of u from src plus dist between u and i
			// must be less than dist of i from the src
			// in that case: keep dist of i equal to the sum of dist of u from src and
			// dist b/w u and i
			if(!sptSet[i] && graph[u][i] && dist[u]!=INT_MAX && 
				dist[u]+graph[u][i]<dist[i]){
				dist[i] = dist[u] + graph[u][i];
			}
		}

	}
	// print the solution now
	printSolution(dist);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){} 
	int graph[v][v] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 
    // Function call
    dijkstra(graph, 0);
}








