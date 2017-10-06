from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support.ui import Select
import random
import string
import time


#Funcion para generar prefijos aleatorios para los correos
def randPrefix(N):
    prefix = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(N))
    return prefix

'''

Obtener nombres y correos de la página del Tec

'''

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
        cont+=1
        
        #Agregar correo
        if cont%4==0:
            correos.append(randPrefix(15) + val)
        
        #Agregar nombres
        if (cont-1)%4==0:
            val = val.split("\n")[0]
            nombres.append(val)
'''

Usar nombres y correos en blazedemo.com

'''

#Guarda origenes y destinos en arreglos
driver.get("http://blazedemo.com")

fromP = driver.find_element_by_name("fromPort")
departures = fromP.find_elements_by_tag_name("option")
toP = driver.find_element_by_name("toPort")
destinations = toP.find_elements_by_tag_name("option")

#Store vals in array
deps = []
dests = []

for dep in departures:
    deps.append(dep.text)

for dest in destinations:
    dests.append(dest.text)


#Registros
for i in range(7):
    driver.get("http://blazedemo.com/register")    
    
    #Llena info del usuario con action chains
    ActionChains(driver).move_to_element(driver.find_element_by_id('name')).click().send_keys(nombres[i]).perform()
    ActionChains(driver).move_to_element(driver.find_element_by_id('company')).click().send_keys("ORG").perform()
    ActionChains(driver).move_to_element(driver.find_element_by_id('email')).click().send_keys(correos[i]).perform()
    ActionChains(driver).move_to_element(driver.find_element_by_id('password')).click().send_keys("123456").perform()
    ActionChains(driver).move_to_element(driver.find_element_by_id('password-confirm')).click().send_keys("123456").perform()
    ActionChains(driver).move_to_element(driver.find_element(By.CSS_SELECTOR, "button[type='submit']")).click().perform()

    #Verifica que el usuario entre correctamente
    WebDriverWait(driver, 3).until(EC.presence_of_element_located((By.CLASS_NAME, "dropdown-toggle")))

    #Origen y destino
    driver.get("http://blazedemo.com")
    Select(driver.find_element_by_name('fromPort')).select_by_value(deps[i])
    select = Select(driver.find_element_by_name('toPort')).select_by_value(dests[i])
    driver.find_element(By.CSS_SELECTOR, "div > input").click()

    #Selecciona el primer vuelo
    driver.find_element(By.XPATH,"//*[@value='Choose This Flight']").click()

    #Informacion de vuelo
    driver.find_element_by_id('inputName').send_keys(nombres[i])
    driver.find_element_by_id('address').send_keys("calle 123")
    driver.find_element_by_id('city').send_keys("Mexico city")
    driver.find_element_by_id('state').send_keys("CDMX")
    driver.find_element_by_id('zipCode').send_keys("12345")
    Select(driver.find_element_by_name('cardType')).select_by_value('amex')
    driver.find_element_by_id('creditCardNumber').send_keys("1234567890")
    driver.find_element_by_id('creditCardMonth').clear()
    driver.find_element_by_id('creditCardMonth').send_keys("6")
    driver.find_element_by_id('creditCardYear').clear()
    driver.find_element_by_id('creditCardYear').send_keys("2018")
    driver.find_element_by_id('nameOnCard').send_keys(nombres[i])
    driver.find_element(By.CLASS_NAME, "checkbox").click()
    driver.find_element(By.CSS_SELECTOR, "input[type='submit']").click()
    
    #Logout
    driver.get("http://blazedemo.com/home") 
    driver.find_element(By.CLASS_NAME, "dropdown-toggle").click()
    driver.find_element(By.CLASS_NAME, "dropdown-menu").click()
