"""3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.
"""
import json
lista_dados=[]
menor=0
maior=0
soma=0
media=0
tam=0
dias=0
with open("dados.json") as json_arq:
    dados=json.load(json_arq)
for i in dados:
    lista_dados.append(i['valor'])

for i in lista_dados:
    if(i<=0):
        pass
    else:
        tam+=1
        soma+=i
media=soma/tam    
for i in lista_dados:
   
    if i>=media:
        dias+=1
        
maior=max(lista_dados)
menor=min(lista_dados)


        
print("maior faturamento ",maior)
print("menor faturamento",menor)
print("media de faturamento",media)
print("numeros de dias no mês com faturamento superior a média mensal",dias)


