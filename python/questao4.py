km_percorridos = float(input("Digite a quantidade de km percorridos: "))

dias_alugados = int(input("Digite a quantidade de dias de aluguel: "))

preco_total = (60 * dias_alugados) + (0.15 * km_percorridos)

print(f"O preco a pagar pelo aluguel do carro é de R${preco_total:.2f}")
