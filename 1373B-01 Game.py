t = int(input())

for _ in range(t):
    s = input().strip()
    cnt0 = s.count('0')
    cnt1 = s.count('1')

    moves = min(cnt0, cnt1)

    if moves % 2 == 1:
        print("DA")   # Alice wins
    else:
        print("NET")  # Bob wins
