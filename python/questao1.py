salario = float(input ("Digite o valor do salário: "))
aumento = float(input ("O aumento será de quantos %? (Digite apenas os numeros) "))


aumento = aumento/100 * salario
salario = salario + aumento

print("O aumento foi de R$", aumento, "e o novo salário é de R$", salario)