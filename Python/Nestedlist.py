# Nested list Hacker rank question
if __name__ == '__main__':
    lis = list()
    li = list()
    for _ in range(int(input())):
        lis.append([input(), float(input())])
    lis.sort(key=lambda x: x[1])
    temp = lis[0][1]
    n = len(lis)
    for i in range(1, n):
        if lis[i][1] > temp:
            li.append(lis[i][0])
            if lis[i] == lis[n - 1] or lis[i + 1][1] > lis[i][1]:
                break
    li.sort()
    for i in li:
        print(i)
