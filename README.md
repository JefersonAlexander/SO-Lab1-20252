# Practica 1 de laboratorio - Introducción al lenguaje C #

## Instrucciones ##

Antes de comenzar a trabajar en esta practica se recomienda que lleve a cabo los siguientes pasos:
1. Haga un fork de este repositorio.
2. La persona que haga el fork agregue como colaborador al compañero de trabajo.
3. Cada uno de los integrantes del equipo puede hacer una copia local del laboratorio con el fin de colaborar en su desarrollo.
4. No olvide ir actualizando la practica del laboratorio a medida que vaya avanzando en esta. Para el caso, vaya llevando a cabo los test proporsionados (tal y como se explico en el laboratorio). Estos test serán el indicativo que digan como va su trabajo.

## Componentes del laboratorio ##

El siguiente laboratorio esta compuesto de dos directorios principales los cuales contienen:
1. **Ejemplos de lenguaje C**: En este directorio hay una cantidad de ejemplos considerables sobre el lenguaje C ademas de links de acceso a la teoria preparada para el caso ([link](./ejemplos)).
2. **Enunciado**: Contiene el enunciado y las instrucciones de los ejercicios que se deben realizar en la practica de laboratorio [[link](./enunciado)]. 

## Importante comprender ##

Para poder realizar la practica, es necesario comprender cabalmente los siguientes conceptos:
1. Manejo de argumentos por linea de comandos ([link con ejemplos](./ejemplos/ejemplos_argc_argv)).
2. Manejo de archivos en C ([link de la teoria](https://github.com/dannymrock/UdeA-SO-Lab/tree/master/lab0/lab0b/parte6))
3. Manejo basico del gcc ([link de la teoria](https://github.com/dannymrock/UdeA-SO-Lab/tree/master/lab0/lab0a/compilador_gcc)).
4. Manejo de la consola de linux ([link de la teoria](https://github.com/dannymrock/UdeA-SO-Lab/tree/master/lab0/lab0a/consola_linux)).

Si no maneja estos conceptos; sobre todo los dos primeros, por favor estudielos con detenimiento, de la comprensión de estos depende el desarrollo de la practica. Tambien, revise la teoria mas simple en caso de no creer tener la suficiente familiaridad con el lenguaje C. Es necesario la comprensión de conceptos mas basicos en C para poder manejar archivos como la implementación de funciones, el manejo de punteros y los arreglos. 

Tenga además en cuenta que se agregan bastantes ejemplos con el fin de que los analice con el fin de comprenderlos. Si tiene dificultades para entenderlos pregunte sin pena en el foro de piazza del curso y vea los videos que allí se compartieron. Recuerden, **No hay pregunta boba, bobo es el que no pregunta**


rm -f wcat
gcc -o wcat wcat.c -Wall -Werror

rm -f wgrep
gcc -o wgrep wget.c -Wall -Werror

echo $?
cat tests/1.rc
cat tests-out/1.rc

cat -A tests/1.rc
cat -A tests-out/1.rc

--Pra correr los text

rm -rf tests-out
./test-wcat.sh

rm -rf tests-out
./test-wgrep.sh




