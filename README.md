# 💻 Ejercicios de Programación con Funciones y Ficheros (C++)

Este repositorio contiene la resolución de una serie de ejercicios de programación en C++ enfocados en el uso de **funciones personalizadas (paso por valor y referencia)**, la **manipulación de estructuras (`struct`)** y la **lectura/escritura de datos en ficheros de texto (`fstream`)**.

---

## 👤 Información del Alumno

| Concepto | Detalle |
| :--- | :--- |
| **Autor** | Marcos de Aza |
| **Curso** | Primero de Ingeniería Informática |
| **Universidad** | Universidad Europea de Valencia |

---

## 📂 Estructura del Repositorio

El proyecto está organizado para mantener un código limpio y una gestión clara de los archivos de entrada y salida (`.txt`).

* `calculadora_circulo.cpp`: Solución al Ejercicio 1.
* `intercambio_referencia.cpp`: Solución al Ejercicio 2.
* `Ejercicio3_Numeros/`: Carpeta para la gestión de ficheros numéricos.
    * `procesar_numeros.cpp`: Solución al Ejercicio 3.
    * `numeros.txt`: Fichero de entrada (requerido).
    * `resultado_dobles.txt`: Fichero de salida (generado por el programa).
* `Ejercicio4_Usuarios/`: Carpeta para la gestión de structs y lectura de texto compleja.
    * `gestion_usuarios.cpp`: Solución al Ejercicio 4.
    * `usuarios.txt`: Fichero de entrada con datos estructurados (requerido).

---

## 🎯 Descripción de los Ejercicios

### 1. Calculadora Geométrica del Círculo
Programa en C++ que pide el radio e implementa tres funciones independientes para calcular:
* Diámetro
* Perímetro
* Área

### 2. Intercambio de Variables por Referencia
Programa que demuestra el uso del **paso por referencia (`&`)** en una función para intercambiar el valor de dos variables sin necesidad de devolver un resultado.

### 3. Procesamiento de Ficheros Numéricos
Programa que lee una serie de números de `numeros.txt`, los multiplica por dos y guarda los resultados en `resultado_dobles.txt`.

### 4. Gestión de Usuarios con Structs y Ficheros
Programa que lee datos estructurados (Nombre, Apellidos, Estado Online/Offline) de un fichero, los guarda en un `array` de `structs` y luego muestra un mensaje solo para los usuarios cuyo estado es **"online" (1)**.
