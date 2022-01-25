from collections import deque

class Stack:
    def __init__(self):
        self.stack = deque()
    
    def push(self, value):
        self.stack.append(value)
    
    def pop(self):
        return self.stack.pop()
    
    def peek(self):
        return self.stack[-1]

    def size(self):
        return len(self.stack)

    def max(self):
        return max(self.stack)


if __name__ == '__main__':
    f_type = True
    f_element =  True
    print("Enter correct data :")
    n = (int)(input())


    if n>=1 and n<=10**5:
        p = []
        for i in range(n):
            temp = input()
            p.append(temp)
            temp_arr = list(map(int,temp.split()))
        
            if not(temp_arr[0]>=1 and temp_arr[0]<=3):
                f_type = False
                print("Invalid type entered, start over")
                break
        
            if not(temp_arr[1]>=1 and temp_arr[1]<=10**9):
                f_element = False
                print("Invalid value, Again start")
                break
    
    
        def getMax(operations = None):

            myStack = Stack()
            element = []

            for op in operations:
                op_arr = list(map(int,op.split()))
                if len(op_arr)==2:
                    myStack.push(op_arr[1])
                elif op_arr[0] == 2:
                    c= myStack.pop()
                else:
                    element.append(myStack.max())
        
            return element

        if f_type and f_element:
            element = getMax(operations = p)
            for e in element:
                print(e)
    else:
        print("Invalid points, Again start ")
