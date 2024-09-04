"""4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.  
"""
soma=0
num_dados=[]
estados=[]
resul=[]
dados_estados={
	"SP": 67836.43,
        
	"RJ": 36678.66,

	"MG":29229.88,
	
        "ES":27165.48,
	
	"Outros":19849.53
	}
num_dados=list(dados_estados.values())
estados=list(dados_estados.keys())
soma=sum(num_dados)
for i in num_dados:
    resul.append(round(((i*100)/soma),2))
for j in range(0,len(resul)):
    print(estados[j],":",resul[j],"%")
    

