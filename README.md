# Programa de Registro y Venta de Vacunas para Pacientes

## Descripción:

Este programa se diseñó con el propósito de registrar expedientes de pacientes y proporcionar etiquetas para la venta de vacunas. Estas etiquetas ayudan en el envío de las vacunas a domicilio, ya que contienen toda la información necesaria del paciente.

### Funcionamiento:

- Al ejecutar el programa, se solicita al usuario que ingrese el número de pacientes que se registrarán (`NUM`).
  
- A continuación, se crea un arreglo con un tamaño basado en el número de pacientes ingresado.
  
- A través de un ciclo, se pregunta y registra la información de cada paciente, tales como síntomas, nombre, factores de riesgo, domicilio, entre otros.

- Posteriormente, se crea un objeto de tipo `Ventas` que guarda la información del paciente y tiene la responsabilidad de imprimir la etiqueta para la venta de la vacuna.

- Es importante destacar que a la información del número de dosis ya aplicadas al paciente se le suma uno, ya que representa la dosis que se le administrará a continuación.

## Clases:

### 1. Pacientes:

- **Atributos Privados**:
  - `sintomas`
  - `nombre`
  - `factoresRiesgo`
  - `domicilio`
  - `sexo`
  - `nacionalidad`
  - `estadoCivil`
  - `ocupacion`
  - `edad`
  - `numeroTelefono`
  - `numeroDosis`
  
- **Métodos**:
  - Constructores
  - Destructor
  - `imprime()`: Imprime la información del paciente.
  - Getters para cada atributo.
  - Setters para cada atributo.

### 2. Ventas:

- **Atributos Privados**:
  - `cliente` (de tipo `Pacientes`)
  - `dosis`
  
- **Métodos**:
  - Constructores
  - Destructor
  - `imprimeVenta()`: Imprime la etiqueta de venta para el paciente.
  - Getters para `cliente` y `dosis`.
  - Setters para `cliente` y `dosis`.

## Código fuente:

El código fuente proporcionado contiene la definición y la implementación de las clases `Pacientes` y `Ventas`, así como las funciones `baseDatosPacientes` e `imprimeBaseDatos` que respectivamente registran e imprimen la información de los pacientes. 

El programa en su ejecución principal solicita la cantidad de pacientes a registrar, recopila su información y finalmente imprime la etiqueta de venta de la vacuna para el primer paciente registrado.

---
# Programa de Registro y Venta de Vacunas para Pacientes

## Descripción:

Este programa se diseñó con el propósito de registrar expedientes de pacientes y proporcionar etiquetas para la venta de vacunas. Estas etiquetas ayudan en el envío de las vacunas a domicilio, ya que contienen toda la información necesaria del paciente.

### Funcionamiento:

- Al ejecutar el programa, se solicita al usuario que ingrese el número de pacientes que se registrarán (`NUM`).
  
- A continuación, se crea un arreglo con un tamaño basado en el número de pacientes ingresado.
  
- A través de un ciclo, se pregunta y registra la información de cada paciente, tales como síntomas, nombre, factores de riesgo, domicilio, entre otros.

- Posteriormente, se crea un objeto de tipo `Ventas` que guarda la información del paciente y tiene la responsabilidad de imprimir la etiqueta para la venta de la vacuna.

- Es importante destacar que a la información del número de dosis ya aplicadas al paciente se le suma uno, ya que representa la dosis que se le administrará a continuación.

## Clases:

### 1. Pacientes:

- **Atributos Privados**:
  - `sintomas`
  - `nombre`
  - `factoresRiesgo`
  - `domicilio`
  - `sexo`
  - `nacionalidad`
  - `estadoCivil`
  - `ocupacion`
  - `edad`
  - `numeroTelefono`
  - `numeroDosis`
  
- **Métodos**:
  - Constructores
  - Destructor
  - `imprime()`: Imprime la información del paciente.
  - Getters para cada atributo.
  - Setters para cada atributo.

### 2. Ventas:

- **Atributos Privados**:
  - `cliente` (de tipo `Pacientes`)
  - `dosis`
  
- **Métodos**:
  - Constructores
  - Destructor
  - `imprimeVenta()`: Imprime la etiqueta de venta para el paciente.
  - Getters para `cliente` y `dosis`.
  - Setters para `cliente` y `dosis`.

## Código fuente:

El código fuente proporcionado contiene la definición y la implementación de las clases `Pacientes` y `Ventas`, así como las funciones `baseDatosPacientes` e `imprimeBaseDatos` que respectivamente registran e imprimen la información de los pacientes. 

El programa en su ejecución principal solicita la cantidad de pacientes a registrar, recopila su información y finalmente imprime la etiqueta de venta de la vacuna para el primer paciente registrado.

<img width="867" alt="Screenshot 2023-10-25 at 8 51 07 p m" src="https://github.com/ivmg5/Vaccine-Delivery-System/assets/102205596/c5623173-f649-4d33-a2be-4197f4b37738">


---
