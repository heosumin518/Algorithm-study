base, hiht = map(float, input().split())
area = base * hiht / 2
print(str(format(base, ".6f"))+", "+str(format(hiht, ".6f"))+", "+str(int(format(area, ".6f"))))