require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'http://nitrowriters.com/form/form.html'

#escribir sobre un cuadro de texto
browser.text_field(:id => "my_text_field").set("hola")
browser.textarea(:id => "a_text_area").set("hola text area")
browser.radio(:id => "familiar_rails_2").set

#permite obtener un conjunto de checkboxe y seleccionarlos todos
checks = browser.checkboxes(:name => /element_14/)
checks.each do |check|
    check.set
end

#contar el numero de elementos que tiene un select
puts browser.select_list(:id => "usage").options.count

#selecciona tercera opcion de un select
opciones = browser.select_list(:id => "usage").options
cont = 0
opciones.each do |op|
    if(cont==3)
        op.select
    end
    cont+=1
end

#browser.select_list(:id => "usage").options(:index).select(1)
