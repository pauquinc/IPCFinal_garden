//Seneca Gardens is a garden centre that sells a variety of plants for the home gardener.The sales data is stored in a file(shown below) and a program is needed that will summarize the contents of the file in various ways.Your job is to write the program that will produce output similar to that shown below.
//You MUST use the following function to read the data fileand you are not allowed to make any changes to the function.This means that you will have to create the correct data structures required by the function as well as any other functions used by the function.
//File Reading Function
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "header.h"
#include <string.h>


//saleDate

void clearStandardInputBuffer(void)
{
    while (getchar() != '\n') {
        ; // On purpose: do nothing
    }
}

int getInteger(void)
{

    int value = 0;
    char newLine = 'x';

    do {
        scanf("%d%c", &value, &newLine);
        if (newLine != '\n') {
            clearStandardInputBuffer();
            printf("ERROR: Value must be an integer: ");
        }
    } while (newLine != '\n');

    return value;
}

int getIntFromRange(int lower, int upper)
{
    int num = 0;
    do {
        num = getInteger();
        if (num < lower || num > upper) {
            printf("Enter a valid integer between %d and %d", lower, upper);
        }
    } while (num < lower || num > upper);

    return num;
}


void displaySaleDetailHeader(void)
{
    printf("DAY MONTH YEAR                       PRODUCT #SOLD   PRICE\n");
}

void displaySaleDetailRecord(struct ProductSalesList* prodList)
{
int i;

displaySaleDetailHeader();
for(i=0, i <= productList->counter,i++)
{
    printf("%d %d %d %s %d %lf", productList->arrayRecord[i].date1.day, productList->arrayRecord[i].date1.month,productList->arrayRecord[i].date1.year, productList->arrayRecord[i].productName, productList->arrayRecord[i].salePrice);
}
}

// This function must be completed to find geraniums and add the number of sales and the total price.
/*void DisplaySaleByProduct(struct ProductSalesList* prodList)
{
int i, j;
for(i=0, i <= prodList->counter,i++)
{
    for()
    {

    }
}
for(i=0, i <= prodList->counter,i++)
{
    
    prinf("PRODUCT # SOLD PRICE");
    printf("%s %d %lf", prodList->arrayRecord[i].date1.day, prodList->arrayRecord[i].date1.month,prodList->arrayRecord[i].date1.year, productList->arrayRecord[i].productName, productList->arrayRecord[i].salePrice);
}
}
*/

int addSale(struct ProductSalesList* prodList, struct DailySalesList* dailySales, char* productName, struct SingleSaleRecord*);
{
struct SingleSaleRecord arrayRecord = { 0 };
prodList->arrayRecord[prodList->counter] = *saleRec;
prodList->counter++;
}

int readSalesFile(FILE * fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales)
{
    int numberSalesRead = 0, valuesRead;
    struct SingleSaleRecord saleRec = { 0 };
    char productName[MAX_PRODUCT_NAME_LEN];

    while (!feof(fp))
    {
        valuesRead = fscanf(fp, "%[^/]/%d/%lf/%d/%d/%d%*c", 
                            productName, &saleRec.numberSold, &saleRec.salePrice, &saleRec.saleDate.month, &saleRec.saleDate.day, &saleRec.saleDate.year);
        if (valuesRead > 0)

        {
            addSale(prodList, dailySales, productName, &saleRec);
            numberSalesRead++;
        }
    }
    return numberSalesRead;
}
