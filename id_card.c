#include <stdio.h>
#include <string.h>

struct id_card {
    char name[10];
    long int enroll;
    char class[10];
    long int number;
    char address[100];
    char clg_name[100];
};

int main()
{    
    printf("Student's ID Card\n\n");
    struct id_card Dulari;
    strcpy(Dulari.name, "Dulari");
    Dulari.enroll = 236400316186;
    strcpy(Dulari.class, "IT33");
    strcpy(Dulari.clg_name, "R.C.Technical Institute");
    Dulari.number = 9687637410;
    strcpy(Dulari.address, "10/7 tiger flat, nava vadaj,Ahmedabad");
    printf("Name: %s\n", Dulari.name);
    printf("Enrollment: %ld\n", Dulari.enroll);   
    printf("Class: %s\n", Dulari.class);
    printf("College Name: %s\n", Dulari.clg_name);
    printf("Phone Number: %ld\n", Dulari.number); 
    printf("Address: %s\n", Dulari.address);
}