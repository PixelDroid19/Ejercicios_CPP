# Ejercicios_CPP

### Usar caracteres especiales en consola

Configure sus programas para que acepte los caracteres especiales como tildes y acentos "Ñ Ó Á", recuerde que la función setlocale(); debe de ir dentro de la funcion main y antes de cualquier texto, de lo contrario el texto que se imprima antes de esta función no permitirá estos caracteres.

`#include <locale.h> // Libreria que contiene la funcion setlocale`

`setlocale(LC_ALL, "spanish");`
 
