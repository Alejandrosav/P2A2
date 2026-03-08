indicativo = int(input("Digite el indicativo: "))
num_min = int(input("Digite # de minutos: "))

if indicativo == 1:
    ciudad = "Bogotá"; tarifa = 50
elif indicativo == 2:
    ciudad = "Cali"; tarifa = 70
elif indicativo == 4:
    ciudad = "Medellín"; tarifa = 100
elif indicativo == 5:
    ciudad = "Barranquilla"; tarifa = 160
elif indicativo == 6:
    ciudad = "Pereira"; tarifa = 180
elif indicativo == 7:
    ciudad = "Cúcuta"; tarifa = 190
else:
    print("Indicativo no existe.")
    ciudad = "Ninguna"; tarifa = 0

val = num_min * tarifa

print("Ciudad a la que marca:", ciudad)
print("Tarifa: $", tarifa)
print("Valor llamada: $", val)