import math  
e = float(input('Введите e: '))
f = float(input('Введите f: '))
g = float(input('Введите g: '))
h = float(input('Введите h: '))


a = math.sqrt((abs(e-1/f))+g) 

b= math.sin(e)+math.cos(h)

c=g/e*f-1

print(f'Значение a = {a}')
print(f'Значение b = {b}')
print(f'Значение c = {c}')
