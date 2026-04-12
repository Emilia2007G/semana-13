# semana-13
##Bloque 0
### #Ejercicio 0.1
La funcion recibe una copia de la variable al no tener este símbolo & reserva lectura=0 el cual desaparece al terminar la función por lo tanto temperatura se mantiene en 38.

### #Ejercicio 0.2
Al tener el simbolo & haciendo que lectura = 0 se mantenga asi la función acabe, al ingresar temperatura altera su resultado haciendo que este cambie a 0.

### #Ejercicio 0.3
[x] B precio ahora vale 112.00 — la referencia modifico el original.

##Bloque 1
### #Ejercicio 1.1
Al tener ref & cualquier operación realizada sobre este modifica el saldo directamente por eso asigna el valor de 2000.00 a ref y el valor del saldo tambien se actualiza a 2000.00

### # Ejercicio 1.2
Al declarar la funcion double& saldo permite que el valor orginal pueda ser afectado por una opreacion matematica. Aplicando un 10% a los 500 siendo 450.00

### # Ejercicio1.3
Se usa ls funcion intercambiar para intercambiar valores entre dos variables.

##Bloque 2
### # Ejericio 2.1
Se usa un puntero p para guardar la dirección de memoria de stock. Al usar *p se accede directamente al valor en esa dirección. Por eso, al modificar *p = 180, el valor de la variable original stock cambia automáticamente a 180.

### # Ejercicio 2.2
IVA usa un puntero. Al recibir la dirección de la variable, la función usa *precio para entrar al valor y multiplicarlo por el impuesto.

### # Ejercicio 2.3
Como se llama:
 Pregunta 1: ¿Como se llama la funcion en cada caso? Escribe las dos lineas de llamada y senala la diferencia.
 Incrementar pero cambia los signos de los parametros, en la primera version & y en la segunda *
Pregunta 2: ¿Que operador aparece dentro del CUERPO de la version con puntero que no aparece en la version con
referencia?
En la operacion con puntero se utiliza el operador de (*)   
Pregunta 3: Despues de ejecutar, ¿contador vale 15 en ambos casos? Escribe si o no y explica por que. 
Si, porque en ambos casos se esta modificando el valor de contador, en la version con referencia se esta modificando 
directamente el valor de contador, mientras que en la version con puntero se esta modificando el valor al que apunta el puntero, que es contador.
##Bloque 3
## #Ejercicio 3
Se usa dos listas una de nombres y otra de notas. La nota en la posición [1] le pertenece exactamente al estudiante en la posición [1] de la otra lista.
En la función ajustarNota, hay un puntero para recibir la dirección de una nota específica. Permitiendo entrar a donde este ubicado y sumarle el 0.5 al valor original. 
Para el promedio, usamos una referencia en lugar de un valor normal. Al calculae la suma y dividirla para el total de alumnos, el resultado se guarda automáticamente en la variable original.





