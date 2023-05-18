N = int(input())
tree = {}

for i in range(N): #트리를 입력받아
    root, left, right = input().split()
    tree[root] = [left, right]
   
class Node(object):
    def __init__(self, item):
        self.item = item
        self.left = self.right = None

class BinaryTree(object):
    def __init__(self):
        self.root = None

def preorder(root):
    if(root != ".") :
        print(root, end = "")
        preorder(tree[root][0]) #left
        preorder(tree[root][1]) #right

def inorder(root):
    if(root != "."):
        inorder(tree[root][0]) #left
        print(root, end="")
        inorder(tree[root][1]) #right

def postorder(root):
    if root != ".":
        postorder(tree[root][0]) #left
        postorder(tree[root][1]) #right
        print(root, end="")

        

preorder('A')
print()
inorder('A')
print()
postorder('A')
