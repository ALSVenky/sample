#include<iostream>
#include <bits/stdc++.h>
using namespace std;
const int V=4;
int travllingSalesmanProblem(int graph[][V],int s){
    vector<int> vertex;
    for (int i = 0; i < V; i++){
        if (i != s)
            vertex.push_back(i);
    }

    int min_path = INT_MAX;
    do {
        int current_pathweight = 0;
        // compute current path weight
        int k = s;
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        // for(int i=0;i<vertex.size();i++){
        //     cout<<vertex[i]<<" ";
        // }
        // cout<<endl;
        current_pathweight += graph[k][s];
        min_path = min(min_path, current_pathweight);
    } while (next_permutation(vertex.begin(), vertex.end()));

    return min_path;
}
int main(){
    int graph[][V] = { { 0, 11, 15, 20 },
                       { 11, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s=0;//starting point 
    cout<<travllingSalesmanProblem(graph, s) << endl;

    return 0;
}