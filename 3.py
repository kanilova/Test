def sign(x):
    if x>0:
        return 1
    elif x==0:
        return 0
    else:
        return -1

x = float(input('Введите x '))
y = float(input('Введите y '))
z = sign(x) + sign(y)
print(f'z = {z}')