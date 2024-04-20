M, N, L = map(int, input().split())
people = sorted(map(int, input().split()))
animals = [tuple(map(int, input().split())) for _ in range(N)]
def can_hunt(stand, animal):
    x,y=animal
    left,right=0,len(stand)-1
    while left<=right:
        mid=(left+right)//2
        if abs(stand[mid]-x)+y<=L:
            return True
        if stand[mid]<x:
            left=mid+1
        else:
            right=mid-1
    return False
count=0
for animal in animals:
    if can_hunt(people, animal):
        count+=1
print(count)