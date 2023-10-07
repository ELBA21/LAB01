def fib(n)->int:
    if  n==1 or n==0:
        return 1
    else:
        return fib(n-1) + fib(n-2)

if __name__ == "__main__":
    n=-1
    while(n<0):
        print("Ingrese un N positivo")
        n = int (input())
    for i in range(1,n+1):
        print("fib(" + str(i) + ") =" + str(fib(i)))