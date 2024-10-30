# **Vaccine Delivery System**
> *A system designed to manage patient records and streamline vaccine delivery and sales.*

## **Introduction**
The Vaccine Delivery System is designed to record and manage patient data while facilitating the efficient delivery and sale of vaccines. This system aims to organize patient information and generate sale labels that support direct vaccine delivery to patients' homes, including all necessary information on vaccine doses and patient details.

## **Project Description**
- **Main functionality:** Registers patient information and generates labels for vaccine sales, which include detailed patient data for home delivery.
- **Technologies used:** C++ for core implementation.
- **Challenges faced:** Ensuring accurate data input and management for various patient details, such as medical history and vaccination records.
- **Future improvements:** Implementing a graphical user interface (GUI) and enhancing database integration for long-term patient data storage.

## **Table of Contents**
1. [Introduction](#introduction)
2. [Project Description](#project-description)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Testing](#testing)
6. [License](#license)

## **Installation**
1. **Prerequisites**:
   - **C++ Compiler** - Ensure a C++ compiler like `g++` is installed. [Installation Guide](https://gcc.gnu.org/install/)

2. **Clone the repository:**
   ```bash
   git clone https://github.com/ivmg5/Vaccine-Delivery-System.git
   cd Vaccine-Delivery-System
   ```

3. **Compile the code:**
   ```bash
   g++ Code.cpp -o VaccineDeliverySystem
   ```

4. **Run the program:**
   ```bash
   ./VaccineDeliverySystem
   ```

### **Configuration Options**
   - No additional configuration required.

## **Usage**
Follow these basic steps:
1. Run the program as shown above.
2. Enter patient details as prompted, including symptoms, risk factors, address, and other essential information.
3. After entering the required information, the system will generate and display a vaccine delivery label for the patient.

**Example usage:**
```cpp
Enter patient's name: John Doe
Enter patient's age: 45
...
Doses applied: 2
```

## **Testing**
Run the following command to test program functionality:
```bash
./VaccineDeliverySystem
```
Verify that patient data is accurately recorded and the sale label is generated correctly.

## **License**
This project is licensed under the MIT License.

[![Build Status](https://img.shields.io/badge/status-active-brightgreen)](#)
[![Version](https://img.shields.io/badge/version-1.0-blue)](#)
