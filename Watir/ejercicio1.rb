require 'watir'
browser = Watir::Browser.new :firefox
browser.goto 'http://blazedemo.com'

#selecciona origen y destino
opciones = browser.select_list(:name => "fromPort").select("Mexico City")
opciones = browser.select_list(:name => "toPort").select("New York")

#Da submit al form
browser.element(:css => 'input[type=submit]').click

#Escoge el ultimo vuelo disponible (vuelo 4)
buttons = browser.inputs(:value => "Choose This Flight").last.click

#Llena el form para el vuelo
browser.text_field(:id => "inputName").set("Luis")
browser.text_field(:id => "address").set("Street123")
browser.text_field(:id => "city").set("Mexico City")
browser.text_field(:id => "state").set("DF")
opciones = browser.select_list(:name => "cardType").select("amex")
browser.text_field(:id => "zipCode").set("01234")
browser.text_field(:id => "creditCardNumber").set("012345678909876")
browser.text_field(:id => "creditCardMonth").set("8")
browser.text_field(:id => "creditCardYear").set("2018")
browser.text_field(:id => "nameOnCard").set("Luis Guitron")
browser.checkbox(:id => "rememberMe").set

#Da submit al form
browser.element(:css => 'input[type=submit]').click
