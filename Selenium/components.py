from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()
driver.get("http://nitrowriters.com/form/form.html")

txt = driver.find_element_by_id("my_text_field")
txt.send_keys("Sobreescribe esto")


txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("Este es un primer ejemplo")

descriptions = driver.find_elements(By.CLASS_NAME, "description")
for desc in descriptions:
    print(desc.text)

txt_area = driver.find_element(By.TAG_NAME, "textarea")
txt_area.send_keys("Este es el texto del text area")

#link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
#print(link.text)
#link.click()

inputs = driver.find_elements(By.TAG_NAME, "input")
for input_ in inputs:
    if input_.get_attribute("type") == "text":
        input_.send_keys("el mismo texto en todos lados")

#Universal selector
print("__________________________")
print("UNIVERSAL SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "* option")
for option in options: 
    print(option.text)

#Groupint type selector
print("__________________________")
print("GROUP SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "* h1,h2,h3")
for option in options: 
    print(option.text)

#Descendant selector
print("__________________________")
print("DESCENDANT SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "div  a")
for option in options: 
    print(option.text)


#Child selector
print("__________________________")
print("CHILD SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "div > a")
for option in options: 
    print(option.text)

#following sibling selector
print("__________________________")
print("FOLLOWING SIBLING SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "li + li")
for option in options: 
    print(option.text)



#general sibling selector
print("__________________________")
print("GENERAL SIBLING SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "li + *")
for option in options: 
    print(option.text)



#Class selector
print("__________________________")
print("CLASS SELECTOR")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, ".description")
for option in options: 
    print(option.text)
    
#ID selector
print("__________________________")
print("ID selector")
print("__________________________")
options = driver.find_elements(By.CSS_SELECTOR, "#li_2")
for option in options: 
    print(option.text)
