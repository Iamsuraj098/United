def operation(x, a):
    def calculation(y):
        if  a == '/':
            return y/x

        elif a == '+':
            return x+y

        elif a == '-':
            return x-y

        elif a == '*':
            return x*y

        elif a == '%':
            return x % y

    return calculation

a = input("enter the ('/','*','-','+','%'): ")
b = int(input("a = "))
c = int(input("b = "))
result = operation(b, a)
print("result = ", result(c))
