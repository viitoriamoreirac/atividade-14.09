cigarros_por_dia = int(input("Digite a quantidade de cigarros fumados por dia: "))

anos_fumados = int(input("Digite quantos anos voce ja fumou: "))

minutos_perdidos = cigarros_por_dia * 10 * anos_fumados * 365

dias_perdidos = minutos_perdidos / 1440

print(f"Voce perdera aproximadamente {dias_perdidos:.0f} dias de vida devido ao tabagismo.")
