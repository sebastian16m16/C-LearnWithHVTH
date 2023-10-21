
#include "ArrayFunctions.h"

_Ecu Ecus[NO_OF_ECUS];
_CarPart Infotainment;
_Ecu Headunit = {.ID = 1, .Dependencies = 0, .PartOfCar = 1, .name = "HeadUnit"};
_Ecu WheelPressure = {.ID = 2, .Dependencies = 1, .PartOfCar = 1, .name = "WheelPressure"};
_Ecu OilCheck = {.ID = 3, .Dependencies = 2, .PartOfCar = 1, .name = "OilCheck"};
_Ecu Engine = {.ID = 4, .Dependencies = 2, .PartOfCar = 1, .name = "Engine"};



void AF_Init()
{
    Ecus[0] = Headunit;
    Ecus[1] = WheelPressure;
    Ecus[2] = OilCheck;
    Ecus[3] = Engine;
}

void AF_AddInfo_Ecu(_Ecu tmpEcu)
{
    Headunit.ID = tmpEcu.ID;
    Headunit.Dependencies = tmpEcu.Dependencies;
    Headunit.PartOfCar = tmpEcu.PartOfCar;
}

void AF_Get_Ecus_by_Dependecy(int Dependecie, _Ecu *tmpEcus)
{
    int index = 0;
    for(int i=0; i<NO_OF_ECUS; i++)
    {
        if(Ecus[i].Dependencies == Dependecie)
        {
            if(Ecus[i].name != NULL)
                *(tmpEcus+index++) = Ecus[i];
        }
    }
}

_Ecu AF_Get_Ecu_by_ID(int ID)
{
    _Ecu tmpEcu = {.Dependencies = 0, .ID = -1, .name = "", .PartOfCar = 0};
    for(int i=0; i<NO_OF_ECUS; i++)
    {
        if(Ecus[i].ID == ID)
        {
            return Ecus[i];
        }
    }
    return tmpEcu;
}

void AF_PrintEcus(_Ecu *Arr)
{
    printf("The ecus are: \n");
    for(int i=0; i<NO_OF_ECUS; i++)
    {   if(Arr[i].name != NULL)
        {
            printf("%d. %s \n", i, Arr[i].name);
        }
        else
        {break;}
    }
}


int GetSum_of_Elements(int *arr)
{
    int RetVal = 0;
    for(int i=0; i<NO_OF_ELEMENTS; i++)
    {
        RetVal += *(arr+i);
    }

    return RetVal;
}


void Poppulate_Array(int *arr)
{
    for(int i=0; i<NO_OF_ELEMENTS; i++)
    {
        *(arr+i) = i;
    }
}

void Print_Array(int *arr)
{
    printf("The array ellements are: ");
    for(int i=0; i<NO_OF_ELEMENTS; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}