#include "Increment/Increment.h"
#include "Arrays/ArrayFunctions.h"




int main()
{
    /* Easy value by referece*/
    int x = 10; /* 0000 1010 */
    Increment(&x);

    printf("X = %d\n", x);

    /*Array*/
    int array[NO_OF_ELEMENTS] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    int *arr=(int*)malloc(NO_OF_ELEMENTS*sizeof(int));

    printf("Array#1\n");
    Print_Array(array);
    printf("Suma elementelor din array e %d\n", GetSum_of_Elements(array));

    printf("Array#2\n");
    Poppulate_Array(arr);
    Print_Array(arr);
    printf("Suma elementelor din array e %d\n", GetSum_of_Elements(arr));


    /*Structs and arrays*/
    AF_Init();
    int len = 0;
    _Ecu CheckEcus[NO_OF_ECUS];
    AF_Get_Ecus_by_Dependecy(2, CheckEcus);
    AF_PrintEcus(CheckEcus);

    return 0;
}