num = int(input("Digite número obtenido: "))
val_compra = float(input("Digite valor de la compra: $"))

if num == 0 or num == 1:
    total_pag = val_compra * 0.95
elif num == 2 or num == 3:
    total_pag = val_compra * 0.87
elif num == 4 or num == 5:
    total_pag = val_compra * 0.78
elif num == 6 or num == 7:
    total_pag = val_compra * 0.7
elif num == 8 or num == 9:
    total_pag = val_compra * 0.5
else:
    print("Error. Número no existe.")
    total_pag = val_compra

print("Valor total a pagar: $", total_pag)