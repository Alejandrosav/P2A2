num1 = int(input("Digite número 1: "))
num2 = int(input("Digite número 2: "))
num3 = int(input("Digite número 3: "))
num4 = int(input("Digite número 4: "))

if num1 > num2 and num1 > num3 and num1 > num4:
    may = num1
else:
    if num2 > num1 and num2 > num3 and num2 > num4:
        may = num2
    else:
        if num3 > num1 and num3 > num2 and num3 > num4:
            may = num3
        else:
            may = num4

            print(f"El número mayor es el: {may}")
