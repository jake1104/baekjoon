import sys
l=[int(sys.stdin.readline()) for _ in range(9)]
def a():
    for a in l:
        for b in l:
            for c in l:
                for d in l:
                    for e in l:
                        for f in l:
                            for g in l:
                                if a+b+c+d+e+f+g==100 and a!=b and a!=c and a!=d and a!=e and a!=f and a!=g and b!=c and b!=d and b!=e and b!=f and b!=g and c!=d and c!=e and c!=f and c!=g and d!=e and d!=f and d!=g and e!=f and e!=g and f!=g:
                                    for h in [a,b,c,d,e,f,g]:
                                        print(h)
                                    return
a()