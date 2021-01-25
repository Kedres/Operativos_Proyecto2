# Operativos_Proyecto2

# Pre-requisitos

Para el presente proyecto es necesario contar con la libreria libpng-dev y libqrencode-dev por lo que es un requisito correr los siguientes comandos en una terminal de Ubuntu

~~~
sudo apt-get install libpng-dev
sudo apt-get install libqrencode-dev
~~~

# Compilado y ejecucion

para compilar el proyecto se debe incluir as librerias mencionadas en pre requisitos en el comando de construccion por lo que el comando completo seria

~~~
gcc main.c -lpng -lqrencode -o main
~~~

para ejecutar el archivo compilado se debe usar el comando

~~~
./main
~~~
