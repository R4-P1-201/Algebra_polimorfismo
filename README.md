TC1030 – Actividad de polimorfismo 
 
 
En este ejercicio deberás crear la clase Vect, la cual nos permitirá trabajar con vectores. Esta clase deberá heredar de la clase Fraccion y cada elemento del vector deberá ser una fracción (tomar como base el ejercicio realizado en el diagnóstico).  
 
En esta clase se deberán implementar las siguientes operaciones entre vectores. 
 
1.	Suma de vectores: Deberá implementarse con sobrecarga empleando el operador + 
2.	Resta de vectores: Deberá implementarse con sobrecarga empleando el operador -  3. Producto punto: Deberá implementarse con sobrecarga empleando el operador * 
4.	Producto cruz: Solo será válido para vectores de 3 dimensiones. Deberá implementarse como función, dicha función será un método del vector que reciba el vector con el cual desea operar como parámetro de entrada y cómo salida el vector resultante. El método no deberá modificar el objeto que la llame. La función se deberá llamar producto. 
5.	Angulo entre vectores: La función se deberá llamar angulo, de manera similar a la operación de producto cruz, deberá recibir el vector con el cual va a operar y no deberá modificar el vector que llama el método. Esta función deberá devolver el ángulo como un número flotante y el ángulo deberá estar en grados (no en radianes).  
 
Otros métodos para implementar en esta clase: 
1.	Magnitud del vector: Este método deberá ser implementado como una función llamada magnitud y deberá devolver la magnitud del vector como un flotante. 
2.	Escalamiento: Este método multiplicará cada elemento del vector por un número entero, deberá implementarse como función con el nombre de producto [sobrecarga de funciones], esta función recibirá como parámetro un flotante que servirá para el escalamiento y devolverá el vector resultante. Es importante considerar que este método tampoco debe modificar el vector con el cual se llama el método.  
3.	Print: Este método deberá desplegar cada elemento del vector como fracción.  
 
 
En su entregable deberán incluir un archivo main.cpp, el cual es un archivo para validar el funcionamiento de la clase. En este archivo deberán validar al menos los siguientes puntos. 
 
•	Crear dos vectores con 4 dimensiones y verificar todas las operaciones, la operación de producto cruz, deberá mostrar que no está soportada. Se deberán desplegar el resultado de cada operación.  
•	Crear dos vectores con 3 dimensiones y verificar nuevamente todas las operaciones, adicionalmente probar los métodos de magnitud y escalamiento.  
•	Validar que operaciones de vectores con diferentes dimensiones no sea valida 

