from collections import deque
# stack=deque()
# stack.append("1")
# stack.append("2")
# stack.append("3")
# stack.append("4")
# print(stack)

class stack:
    def __init__(self) -> None:
        self.container = deque()
    def push(self,val):
        self.container.append(val)
    def pop(self):
        return self.container.pop()
    def peek(self):
        return self.container[-1]

    def is_empty(self):
        return len(self.container)==0
    def size(self):
        return len(self.container)
def reverse_string(self):
    return (self)[::-1]

print(reverse_string("abbcdef"))
