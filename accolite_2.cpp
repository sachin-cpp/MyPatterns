#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int MAX = 3e5+10;
int n, m, u, v, ecnt, head[MAX], ind[MAX], qit, que[MAX], mmax, tmp;
char s[MAX];
struct Edge {
	int v, nxt;
} edge[MAX];
struct Node {
	int rank[26];
} node[MAX];
int max(int a, int b) {
	return a > b ? a : b;
}
void addedge(int u, int v) {
	edge[ecnt].v = v;
	edge[ecnt].nxt = head[u];
	head[u] = ecnt++;
	++ind[v];
}
void getin(int x[],int y[]) {
	for (int i =0; i < m; ++i) {
		addedge(x[i]-1, y[i]-1);
	}
}
void init(int x[],int y[]) {
	memset (head, -1, sizeof (head[0]) * n);
	memset (ind, 0, sizeof (ind[0]) * n);
	memset (node, 0, sizeof (node[0]) * n);
	qit = 0, mmax = -1, ecnt = 0;
	getin(x,y);
	for (int i = 0; i < n; ++i)
		if (ind[i] == 0) {
			que[qit++] = i;
			node[i].rank[s[i]-'a']++;
		}
}
void judge() {
	for (int i = 0; i < qit; ++i) {
		for (int j = head[que[i]]; j != -1; j = edge[j].nxt) {
			u = que[i], v = edge[j].v;
			for (int k = 0; k < 26; ++k) {
				tmp = node[u].rank[k] + (k == (s[v] - 'a'));
				if (tmp > node[v].rank[k]) {
					node[v].rank[k] = tmp;
					mmax = max(mmax, node[v].rank[k]);
				}
			}
			if (!--ind[v])
				que[qit++] = v;
		}
	}
}
int main() {
    int x[4] = {1,1,3,4};
    int y[4] = {2,3,4,5};
	scanf("%d%d%s", &n, &m, s);
	init(x,y);			
	judge();
	printf("%d\n", (qit < n ? -1 : mmax));
	return 0;
}