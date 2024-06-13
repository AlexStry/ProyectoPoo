# ProyectoBiblioteca
ProyectoBiblioteca, Segundo Parcial
<img width="808" alt="Screenshot 2024-06-12 at 11 19 38 p m" src="https://github.com/AlexStry/ProyectoBiblioteca/assets/150042828/cc58cd78-4427-4752-a9b4-247204fb4e16">


Descripcion del código: Mi proyecto es una simulación de cómo funcionaría una biblioteca en línea. Dentro de mi proyecto existen cuatro diferentes clases: Libro (Clase madre), LibroFisico, LibroElectronico y Biblioteca (agregación). Dentro del main se puede crear un objeto de tipo Biblioteca que recibe como parámetros el título del libro y el costo que tiene el libro. Para diferenciar el libro físico del libro electrónico, le agregué un descuento a los libros electrónicos de 10%, lo cual es la única diferencia entre las dos clases. El código tiene una funcionalidad muy simple: después de crear la "Biblioteca", es decir, crear objetos dentro del main, cuando se ejecuta el código, va a mostrar los libros disponibles dentro de la biblioteca junto a sus precios. Este código es bastante simple, pero sirve como ejemplo de cómo funcionaría una tienda en línea o un catálogo en su forma más simple.

Casos de error: Por la misma razón que el código es muy simple, existen muy pocos casos de error o cosas que podrían causar una falla dentro del código. Dentro del código no hay interacción con el usuario, pero si el objeto está creado de forma incorrecta, es decir, se manda el precio antes del título, el código no funcionaría. Forma correcta: LibroElectronico("Hunger Games", 250), Forma incorrecta: LibroElectronico(250, "Hunger Games")

Control de Versiones: Como es mi primera entrega de mi proyecto, no existen cambios en versiones pero voy a incluir mi proceso de creación. Antes que nada, durante el semestre cambié mi código. Empecé con la idea de crear el juego "Snake", pero debido a que tuve varios problemas en Mac y no entendí muy bien cómo utilizar RayLib ni en Mac ni en Windows, decidí cambiar a un proyecto más simple. Comencé creando la funcionalidad básica de mi proyecto, es decir, la funcionalidad de los libros cumpliendo con el requisito de la herencia y los modificadores de acceso. Logré cumplir fácilmente con el requisito de sobrescribir dentro de mi archivo Libro.h, pero tuve mucha más dificultad encontrando una forma de integrar la sobrecarga dentro de mi proyecto. Después de investigar con videos y ejemplos de diferentes fuentes, pude implementarlo de la siguiente manera: Biblioteca& operator+=(Libro* libro);, lo cual sobrecarga el operador += para tener la funcionalidad de poder agregar un libro (Libro* libro) como puntero. Finalmente, la clase Libro se convirtió en una clase abstracta por casualidad cuando llegué a esa parte de la rúbrica. Solo tuve que usar override para poder modificar métodos virtuales declarados en la clase abstracta. Además de esto, tuve varios problemas con mi versión de g++ y no pude actualizarlo, por lo cual en mi caso tuve que usar un archivo makefile para poder ejecutar el código.

Información útil: Para compilar en Mac, Windows y Linux se puede usar el comando "make" o en ciertos casos de Windows "mingw32-make", siempre y cuando se esté utilizando el archivo makefile. Si no se utiliza, se vería de la siguiente manera:
- Mac: g++ -std=c++11 -Wall Libro.cpp Biblioteca.cpp main.cpp -o main
- Windows: g++ -std=c++11 -Wall Libro.cpp Biblioteca.cpp main.cpp -o main
- Linux: g++ -std=c++11 -Wall Libro.cpp Biblioteca.cpp main.cpp -o main

Para ejecutar el código se utiliza ./main o en ciertos casos de Windows main.exe.