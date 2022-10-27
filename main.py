a = float(input('input a: '))
x = float(input('input x: '))

EPS = 0.00001

while (abs(x**2 - a) > EPS):
    x = 0.5 * (x + a/x)
    print(x)
print(x)
