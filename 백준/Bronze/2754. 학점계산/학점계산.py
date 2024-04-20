import sys
g=sys.stdin.readline()[:-1]
print(4.3 if g=='A+' else (4.0 if g=='A0' else (3.7 if g=='A-' else (3.3 if g=='B+' else (3.0 if g=='B0' else (2.7 if g=='B-' else (2.3 if g=='C+' else (2.0 if g=='C0' else (1.7 if g=='C-' else (1.3 if g=='D+' else (1.0 if g=='D0' else (0.7 if g=='D-' else 0.0))))))))))))