__author__ = "niketanrane"

class Graph:

    def __init__(self, nodes):
        self.nodes = nodes
        self.vec = [[] for _ in range(self.nodes + 1)]

    def addEdge(self, src, dest):
        self.vec[src].append(dest)
        return

    def BFS(self, src, dest):
        queue = [src]
        visited = [False] * (self.nodes + 1)
        visited[src] = True
        while queue:
            cur = queue.pop(0)
            if cur == dest:
                print("YES")
                return
            for node in self.vec[cur]:
                if not visited[node]:
                    visited[node] = True
                    queue.append(node)
        print("NO")

n, m = map(int, input().split())
gr = Graph(n)
#arr = [x for x in map(int, input().split())]
for index, x in enumerate(map(int, input().split())):
    gr.vec[index+1].append(index + 1 + x)
    #print(gr.vec)

gr.BFS(1, m)

