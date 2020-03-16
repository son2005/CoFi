a, b = eval(dir()[0])
c = a + b - 2
while b:
    a, b = b, a % b
return c + a
