__author__ = "niketanrane"


class Graph:

    def __init__(self, nodes):
        self.nodes = nodes
        self.vec = [[] for n in range(nodes)]

    def addEdge(self, u, v):
        self.vec[u].append(v)
        self.vec[v].append(u)

    def DFS(self, src):
        self.vis = [False] * self.nodes
        self.path = []
        self.dfsUtil(src)

        for i, _ in enumerate(self.vis):
            if not self.vis[i]:
                self.dfsUtil(i)

        return self.path

    def dfsUtil(self, src):
        if self.vis[src]:
            return

        self.path.append(src)
        self.vis[src] = True

        for node in self.vec[src]:
            if not self.vis[node]:
                self.dfsUtil(node)

        return self.path

if __name__ == "__main__":
    g = Graph(10)
    g.addEdge(0, 1)
    g.addEdge(2, 3)
    g.addEdge(3, 3)
    g.addEdge(3, 9)
    g.DFS(2)
    print(g.path)
