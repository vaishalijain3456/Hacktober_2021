
# a program to implement depth first search algorithm.
# this program is 6 rows and 6 colums 

ad_max=[
    #0 1 2 3 4 5
    [0,1,1,1,0,0],#0
    [1,0,0,0,1,1],#1
    [1,0,0,0,0,1],#2
    [1,0,0,0,0,0],#3
    [0,1,0,0,0,0],#4
    [0,1,1,0,0,0]#5
]
visited=[0,0,0,0,0,0]
ans=[]
stack=[]

def stack_display():
    for val in stack:
        print(val,end='|||')
    print()

def dfa(n):
    if visited[n] != 0:
        return
    else:
        visited[n] = 1
        stack.append(n)
        stack_display()
        num=0 

        for relation in ad_max[n]:
            if relation != 0:
                dfa(num)
            num=num+1
        #print(n)
        ans.append(n)
        stack.pop()
        stack_display()

src_node=int(input('enter node number: '))
dfa(src_node)


# output of the program
# enter node number: 2
# 2|||
# 2|||0|||
# 2|||0|||1|||
# 2|||0|||1|||4|||
# 2|||0|||1|||
# 2|||0|||1|||5|||
# 2|||0|||1|||
# 2|||0|||
# 2|||0|||3|||
# 2|||0|||
# 2|||
