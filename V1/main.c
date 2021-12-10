#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"
#define MAX_PRODUCT_NAME_LEN 30

int main()
{
    
    struct Date date = {0};
    struct DailySalesList dailySales = {0};
    struct ProductSaleList prodList = { {0} };


    while (1)
    { //control with break;
        printf("****** Seneca Gardens ******");
        printf("Select one of the following options :\n"
               "1-View All Sales\n"
               "2-View Sales By Product\n"
               "3-View Sales by Date sorted by revenue\n"
               "0 - Exit\n");

        int options = getIntFromRange(0, 3);
        if (options == 1)
        { //View All Sales
            displaySaleDetailHeader();
            displaySaleDetailRecord();
        }
        else if (options == 2)
        { //View Sales By Product
        }
        else if (options == 3)
        { //View Sales By Date sorted by revenue
        }
        else if (options == 0)
        { //Exit
            printf("Good Bye\n");
            break;
        }
    }
    return 0;
}
