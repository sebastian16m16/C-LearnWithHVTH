#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NO_OF_ELEMENTS 10
#define NO_OF_ECUS 4

/*Enums*/
enum CARS
{
    AUDI,
    VW,
    DACIA
};

/*Globals - structs*/
typedef struct CarPart
{
    int ID;
    char* car;
}_CarPart;

typedef struct ElectronicControlUnit
{
    /* data */
    int ID;
    int Dependencies;
    int PartOfCar;
    char* name;
}_Ecu;


/*Prototypes of functions*/
int GetSum_of_Elements(int array[]);
void Print_Array(int *arr);
void Poppulate_Array(int *arr);
void AF_PrintEcus(_Ecu *Arr);
_Ecu AF_Get_Ecu_by_ID(int ID);
void AF_Get_Ecus_by_Dependecy(int Dependecie, _Ecu tmpEcus[]);
void AF_AddInfo_Ecu(_Ecu tmpEcu);
void AF_Init();

