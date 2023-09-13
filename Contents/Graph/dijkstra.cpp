// 邊權重皆為正數時使用
// 1. 輸入有總點、總邊，接著輸入點,點,距離（權重）時使用
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// 定義城市數量的上限
#define MAX_CITIES 100

// 定義無限大的距離
#define INF INT_MAX

// 城市數量、道路數量
int numCities, numRoads;

// 圖的鄰接矩陣表示法
vector<vector<int>> graph(MAX_CITIES, vector<int>(MAX_CITIES, INF));

// Dijkstra演算法，計算從指定城市出發到其他城市的最短路徑
void dijkstra(int startCity) {
    vector<int> dist(numCities, INF);
    vector<bool> visited(numCities, false);

    dist[startCity] = 0;

    for (int i = 0; i < numCities - 1; i++) {
        int u = -1;
        for (int j = 0; j < numCities; j++) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        visited[u] = true;

        for (int v = 0; v < numCities; v++) {
            if (!visited[v] && graph[u][v] != INF) {
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
            }
        }
    }

    // 輸出最短路徑結果
    cout << "從城市 " << startCity << " 出發到其他城市的最短路徑如下：" << endl;
    for (int i = 0; i < numCities; i++) {
        if (i != startCity) {
            cout << "到城市 " << i << " 的最短距離為 " << dist[i] << endl;
        }
    }
}

int main() {
    // 讀取城市數量和道路數量
    cin >> numCities >> numRoads;

    // 初始化圖的鄰接矩陣
    for (int i = 0; i < numRoads; i++) {
        int city1, city2, distance;
        cin >> city1 >> city2 >> distance;
        graph[city1][city2] = distance;
        graph[city2][city1] = distance; // 因為是雙向道路
    }

    // 選擇起始城市，這裡以城市0為例
    int startCity = 0;

    // 執行Dijkstra演算法
    dijkstra(startCity);

    return 0;
}
