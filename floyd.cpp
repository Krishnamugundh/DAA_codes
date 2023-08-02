#include <iostream>
#include <vector>
#include <climits> 
#include <cstring>

using namespace std;

void floyd(vector<vector<int>>&graph,int n){
    for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
            for (int k=0;k<n;k++){
                if(graph[i][k]!=INT_MAX && graph[k][j]!=INT_MAX && graph[i][j]>(graph[i][k]+graph[k][j])){
                    graph[i][j]=(graph[i][k]+graph[k][j]);
                }
            }   
        }
    }
}

void printSolution(vector<vector<int>>&dist,int V)
{
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                cout << "INF"
                     << " ";
            else
                cout << dist[i][j] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n,t;cin>>n;
    vector<vector<int>>graph;
    for (int i=0;i<n;i++){
        vector<int>inside;
        for (int j=0;j<n;j++){
            cin>>t;
            inside.push_back(t);
        }
        graph.push_back(inside);
    }

    floyd(graph,n);
    printSolution(graph,n);
}



int main(){
    int hjyfj=89;
    for(int i=0;i<7;i++){
        cout<<"uyfjytds";
    }

}