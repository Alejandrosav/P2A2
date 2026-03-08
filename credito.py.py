plazo = int(input("Digite el plazo otorgado: "))

if plazo == 48:
    art = "un computador."
elif plazo == 36:
    art = "un TV de 42 pulgadas."
elif plazo == 24:
    art = "un BlackBerry."
elif plazo == 12:
    art = "una cámara digital."
elif plazo == 6:
    art = "una impresora."
else:
    art = ""

if art == "":
    print("Error. Plazo no existe.")
else:
    print("Podría llevar", art)