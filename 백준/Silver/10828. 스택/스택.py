import sys

class Stack():
    def __init__(self):
        self.stack = []

    def push(self, x):
        self.stack.append(x)
    
    def pop(self):
        if len(self.stack) == 0:
            return "-1"
        else:
            return self.stack.pop()
    
    def size(self):
        return len(self.stack)
    
    def empty(self):
        if len(self.stack) == 0:
            return True
        else:
            return False

    def top(self):
        if len(self.stack) == 0:
            return "-1"
        else:
            return self.stack[-1]

N = int(sys.stdin.readline())

stack = Stack()

for i in range(N):
    command = sys.stdin.readline().split()
    if command[0] == "push":
        stack.push(int(command[1]))
    elif command[0] == "pop":
        print(stack.pop())
    elif command[0] == "size":
        print(stack.size())
    elif command[0] == "empty":
        print(1 if stack.empty() else 0)
    elif command[0] == "top":
        print(stack.top())