#include<iostream>
#include<string>

using namespace std;

class Patients //Database of each client
{
    private:
        string symptoms, name, riskFactors, address, sex, citizenship, maritalStatus, occupation;
        int age, phoneNumber, dosesNumber;
    public:
        Patients()
        {
            symptoms = " ";
            name = " ";
            riskFactors = " ";
            address = " ";
            sex = " ";
            citizenship = " ";
            maritalStatus = " ";
            occupation = " ";
            age = 0;
            phoneNumber = 0;
            dosesNumber = 0;
        }
        Patients(string newSymptoms, string newName, string newRiskFactors, string newAddress, string newSex, string newCitizenship, string newMaritalStatus, string newOccupation, int newAge, int newPhoneNumber, int newDosesNumber)
        {
            symptoms = newSymptoms;
            name = newName;
            riskFactors = newRiskFactors;
            address = newAddress;
            sex = newSex;
            citizenship = newCitizenship;
            maritalStatus = newMaritalStatus;
            occupation = newOccupation;
            age = newAge;
            phoneNumber = newPhoneNumber;
            dosesNumber = newDosesNumber;
        }
        ~Patients(){}
        void print()
        {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Sex: " << getSex() << endl;
            cout << "Citizenship: " << getCitizenship() << endl;
            cout << "Marital Status: " << getMaritalStatus() << endl;
            cout << "Occupation: " << getOccupation() << endl;
            cout << "Address: " << getAddress() << endl;
            cout << "Phone Number: " << getPhoneNumber() << endl;
            cout << "Risk Factors: " << getRiskFactors() << endl;
            cout << "Symptoms: " << getSymptoms() << endl;
            cout << "Doses Applied: " << getDosesNumber() << endl;
        }
        void setSymptoms(string newSymptoms)
        {
            symptoms = newSymptoms;
        }
        void setName(string newName)
        {
            name = newName;
        }
        void setRiskFactors(string newRiskFactors)
        {
            riskFactors = newRiskFactors;
        }
        void setAddress(string newAddress)
        {
            address = newAddress;
        }
        void setSex(string newSex)
        {
            sex = newSex;
        }
        void setCitizenship(string newCitizenship)
        {
            citizenship = newCitizenship;
        }
        void setMaritalStatus(string newMaritalStatus)
        {
            maritalStatus = newMaritalStatus;
        }
        void setOccupation(string newOccupation)
        {
            occupation = newOccupation;
        }
        void setAge(int newAge)
        {
            age = newAge;
        }
        void setPhoneNumber(int newPhoneNumber)
        {
            phoneNumber = newPhoneNumber;
        }
        void setDosesNumber(int newDosesNumber)
        {
            dosesNumber = newDosesNumber;
        }
        string getSymptoms()
        {
            return symptoms;
        }
        string getName()
        {
            return name;
        }
        string getRiskFactors()
        {
            return riskFactors;
        }
        string getAddress()
        {
            return address;
        }
        string getSex()
        {
            return sex;
        }
        string getCitizenship()
        {
            return citizenship;
        }
        string getMaritalStatus()
        {
            return maritalStatus;
        }
        string getOccupation()
        {
            return occupation;
        }
        int getAge()
        {
            return age;
        }
        int getPhoneNumber()
        {
            return phoneNumber;
        }
        int getDosesNumber()
        {
            return dosesNumber;
        }
};

class Sales //Offers the vaccine to the client
{
    private:
        Patients client;
        int doses;
    public:
        Sales()
        {
            doses = client.getDosesNumber() + 1;
        }
        Sales(Patients newClient, int newDoses)
        {
            client = newClient;
            doses = newDoses + 1;
        }
        ~Sales(){}
        void printSale()
        {
            cout << "Name: " << client.getName() << endl;
            cout << "Address: " << client.getAddress() << endl;
            cout << "Phone Number: " << client.getPhoneNumber() << endl;
            cout << "Number of doses: " << getDoses() << endl;
        }
        void setClient(Patients newClient)
        {
            client = newClient;
        }
        void setDoses(int newDoses)
        {
            doses = newDoses;
        }
        Patients getClient()
        {
            return client;
        }
        int getDoses()
        {
            return doses;
        }
};

void patientDatabase(Patients patients[], int NUM)
{
    for(int i = 0; i < NUM; i++)
    {
        string symptom, name, riskFactors, address, sex, citizenship, maritalStatus, occupation;
        int age, phoneNumber, dosesNumber;
        cout << "Enter the patient's name: "<< endl;
        cin >> name;
        patients[i].setName(name);
        cout << "Enter the patient's age: "<< endl;
        cin >> age;
        patients[i].setAge(age);
        cout << "Enter the patient's sex: "<< endl;
        cin >> sex;
        patients[i].setSex(sex);
        cout << "Enter the patient's nationality: "<< endl;
        cin >> citizenship;
        patients[i].setCitizenship(citizenship);
        cout << "Enter the patient's marital status: "<< endl;
        cin >> maritalStatus;
        patients[i].setMaritalStatus(maritalStatus);
        cout << "Enter the patient's occupation: "<< endl;
        cin >> occupation;
        patients[i].setOccupation(occupation);
        cout << "Enter the patient's address: "<< endl;
        cin >> address;
        patients[i].setAddress(address);
        cout << "Enter the patient's phone number: "<< endl;
        cin >> phoneNumber;
        patients[i].setPhoneNumber(phoneNumber);
        cout << "Enter the patient's risk factors: "<< endl;
        cin >> riskFactors;
        patients[i].setRiskFactors(riskFactors);
        cout << "Enter the patient's symptoms: "<< endl;
        cin >> symptom;
        patients[i].setSymptoms(symptom);
        cout << "How many doses has the patient received?: "<< endl;
        cin >> dosesNumber;
        patients[i].setDosesNumber(dosesNumber);
    }
}

void printDatabase(Patients patients[], int NUM)
{
    for(int i = 0; i < NUM; i++)
    {
        patients[i].print();
    }
}

int main()
{
    int NUM;
    NUM = 1;
    Patients patients[NUM];
    patientDatabase(patients, NUM);
    Sales sale1{patients[0], patients[0].getDosesNumber()};
    sale1.printSale();
    return 0;
}
