describe ("Prueba de Flynn Paff") {
  it ("cuando lo hacemos para 10 numeros") {
    int* numeros = calcularFlynnPaffPara(10);
    
    should_int(numeros[0]) be equal to(1);
    should_int(numeros[1]) be equal to(2);
    should_int(numeros[2]) be equal to(3);
    should_int(numeros[9]) be equal to(10);
  } end
  
  it ("cuando lo hacemos para 5 numeros") {
    int* numeros = calcularFlynnPaffPara(4);
    
    should_int(numeros[0]) be equal to(1);
    should_int(numeros[1]) be equal to(2);
    should_int(numeros[2]) be equal to(3);
    should_int(numeros[4]) be equal to(5);
  } end
} end

