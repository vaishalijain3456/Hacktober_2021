def reshape(m, r, c):
    req = []
    for i in range(len(m)):
        for j in range(len(m[1])):
            req.append(m[i][j])
    res = []

    for i in range(r):
        res.append([])

    for i in range(r):
        for j in range(c):
            res[i].append(req[j])

    return res


row1 = int(input("Enter the number of rows in the given matrix: "))
col1 = int(input("Enter the number of columns in the given matrix: "))

pro = row1 * col1
factors = []

for a in range(1, pro + 1):
    if pro % a == 0:
        factors.append(a)
given = []

for a in range(row1):
    given.append([])
    for b in range(col1):
        given[a].append(int(input("Enter the elements of the matrix: ")))

if len(factors) > 2:
    row2 = int(input("Enter the number of rows in the reshaped matrix: "))
    col2 = int(input("Enter the number of columns in the reshaped matrix: "))

    if row1 * col1 != row2 * col2:
        print("The given matrix cannot be reshaped to the given dimensions")
    else:
        print("The reshaped matrix is", reshape(given, row2, col2))
