
# etc password 
output=`cat /etc/passwd`

# remover comentários
output=`echo "$output" | grep -v '^#'`

# Divisão resto zero - linha sim linha não
output=`echo "$output" | awk 'FNR % 2 == 0'`

# filtrando login
output=`echo "$output" | cut -d ':' -f1`

# deixando o login inverso (pra depois ordenar)
output=`echo "$output" | rev`

# Ordenando 
output=`echo "$output" | sort -r`

# Procurando as 2 variáveis de ambiente
output=`echo "$output" | awk 'FNR >= ENVIRON["FT_LINE1"] && FNR <= ENVIRON["FT_LINE2"]'`

# trocando quebra de linha por vírgula
output=`echo "$output" | tr '\n' ',' | sed 's/,/, /g'`

# trocando a última virgula por ponto
output=`echo "$output" | sed 's/, $/./'`

# print 
echo -n "$output"