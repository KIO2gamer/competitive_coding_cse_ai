rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

matrix = []
print("Enter matrix values:")

for i in range(rows):
    row = list(map(int, input(f"Row {i+1}: ").split()))
    while len(row) != cols:
        row = list(map(int, input().split()))
    matrix.append(row)

result = [[matrix[row][col] for row in range(len(matrix))] for col in range(len(matrix[0]))]

print("Original Matrix:")
for r in matrix:
    print(r)

print("\nTransposed Matrix:")
for r in result:
    print(r)
