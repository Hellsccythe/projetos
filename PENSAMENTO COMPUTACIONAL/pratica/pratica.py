# Receber dois números do usuário 
numero1 = float(input("Digite o primeiro número:  ")) 
numero2 = float(input("Digite o segundo número:  "))  

# Calcular a média 
media = (numero1 + numero2) / 2 

# Imprimir a média 
print(f"A média dos dois números é: {media}") 


# Receber um número do usuário 
numero = int(input("Digite um número:  "))  

# Verificar se o número é par ou ímpar  
if numero % 2 == 0: 
     print(f"O número  {numero} é par.") 
else: 
      print(f"O número  {numero} é ímpar.")