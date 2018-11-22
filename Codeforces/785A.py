n = int(input())
ans = 0
polygon = {'Tetrahedron':4, 'Cube': 6, 'Octahedron':8, 'Dodecahedron':12, 'Icosahedron':20}
for _ in range(n):
    type = input()
    ans += polygon[type]

print(ans)