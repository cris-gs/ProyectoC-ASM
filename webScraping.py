import requests
import json
from datetime import datetime
now = datetime.now()

user_agent = {'User-agent':'Mozilla/5.0'}
colonesEuros = requests.get("https://es.valutafx.com/CRC-EUR.htm", headers= user_agent)
eurosColones = requests.get("https://es.valutafx.com/EUR-CRC.htm")
colonesDolares = requests.get("https://es.valutafx.com/CRC-USD.htm")
dolaresColones = requests.get("https://es.valutafx.com/USD-CRC.htm")
eurosDolares = requests.get("https://es.valutafx.com/EUR-USD.htm")
dolaresEuros = requests.get("https://es.valutafx.com/USD-EUR.htm")

from bs4 import BeautifulSoup
soup1 = BeautifulSoup(colonesEuros.content, 'html.parser')
soup2 = BeautifulSoup(eurosColones.content, 'html.parser')
soup3 = BeautifulSoup(colonesDolares.content, 'html.parser')
soup4 = BeautifulSoup(dolaresColones.content, 'html.parser')
soup5 = BeautifulSoup(eurosDolares.content, 'html.parser')
soup6 = BeautifulSoup(dolaresEuros.content, 'html.parser')

dia = str(now.day)
mes = str(now.month)
año = str(now.year)

descripcion = soup1.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'w+') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|CRC-EUR|"+texto.replace(",",".") + "\n")
       file.close
descripcion = soup2.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'a') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|EUR-CRC|"+texto.replace(",",".") + "\n")
       file.close
descripcion = soup3.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'a') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|CRC-USD|"+texto.replace(",",".") + "\n")
       file.close
descripcion = soup4.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'a') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|USD-CRC|"+texto.replace(",",".") + "\n")
       file.close
descripcion = soup5.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'a') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|EUR-USD|"+texto.replace(",",".") + "\n")
       file.close
descripcion = soup6.find('div', {'class':'rate-value'})
with open('Tipo_de_Cambio.txt', 'a') as file:
       texto = descripcion.text.replace("\r\n","")
       file.write(dia +"/"+ mes +"/"+ año +"|USD-EUR|"+texto.replace(",",".") + "\n")
       file.close

