preco = float(input ("Digite o valor do produto: "))
desconto = float(input ("O desconto será de quantos %? (Digite apenas os numeros) "))


desconto = desconto/100 * preco
preco = preco - desconto

print("O desconto foi de R$", desconto, "e o novo preço é de R$", preco)