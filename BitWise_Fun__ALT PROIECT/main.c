#include <stdio.h>
#include <stdlib.h>

typedef unsigned char UInt8;

#define BATHROOM_SENSOR (1 << 5) /* "<<" - SHIFT LEFT with said positions*/
#define POOPING_SENSOR (1 << 3)  /* ">>" - SHIFT RIGHT with said positions*/
#define PISSING_SENSOR 0x0001u; /* 0000 0001*/
#define WATER_SENSOR 0x0002u;   /* 0000 0010*/
#define PAYMENT_SENSOR 0x0004u; /* 0000 0100*/
#define WIFE_SENSOR 0x0008u;    /* 0000 1000*/
#define HUSBAND_SENSOR 0x0010u; /* 0001 0000*/
#define CHILD_SENSOR 0x0020u;   /* 0010 0000*/
#define VEGETABLE_SENSOR 0x0040u;   /* 0100 0000*/
#define FAVORITE_SENSOR 0x0080u;   /* 1000 0000*/


UInt8 active_sensors;
UInt8 le_mask = 0x19u;
UInt8 EncryptMASK = 0x73;


void Activate_Sensor_with_index(int index);
void Apply_Mask(UInt8 Mask);
UInt8 EncryptData(UInt8 password);

int main()
{    
    UInt8 password = (UInt8)234u;
    Apply_Mask(le_mask);
    printf("Active Sensors value is %d\n", active_sensors);

    printf("Password is: %d\n", password);
    printf("Password after encryption is %d\n", EncryptData(password));

    return 0;
}

void Activate_Sensor_with_index(int index)
{
    active_sensors |= (1 << index);
}

void Apply_Mask(UInt8 Mask)
{
    active_sensors |= Mask;
}

UInt8 EncryptData(UInt8 password)
{
    password &= EncryptMASK;

    return password;
}

UInt8 DecryptData(UInt8 password)
{
     
}