from selenium import webdriver
from selenium.webdriver.common.by import By
import re

driver = webdriver.Firefox()
driver.get("http://micampus.csf.itesm.mx/index.php/division-de-diseno-ingenieria-y-arquitectura/directorio")

nombres = []
correos = []

#Nombres
cont = 0
options = driver.find_elements(By.CSS_SELECTOR, "* td")
for option in options:
    if(option):
        val = option.text
        #val = option.text.encode('utf-8').strip()
        cont+=1
        
        #Agregar correo
        if cont%4==0:
            correos.append(val)
        
        #Agregar nombres
        if (cont-1)%4==0:
            val = val.split("\n")[0]
            val = val.encode('utf-8').strip()
            nombres.append(val)

#Arreglos
for i in range(len(nombres)):
    print(nombres[i])

for i in range(len(correos)):
    print(correos[i])
