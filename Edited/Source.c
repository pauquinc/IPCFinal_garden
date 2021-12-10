//Seneca Gardens is a garden centre that sells a variety of plants for the home gardener.The sales data is stored in a file(shown below) and a program is needed that will summarize the contents of the file in various ways.Your job is to write the program that will produce output similar to that shown below.
//You MUST use the following function to read the data fileand you are not allowed to make any changes to the function.This means that you will have to create the correct data structures required by the function as well as any other functions used by the function.
//File Reading Function
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "header.h"

//saleDate

void clearStandardInputBuffer(void)
{
    while (getchar() != '\n')
    {
        ; // On purpose: do nothing
    }
}

int getInteger(void)
{

    int value = 0;
    char newLine = 'x';

    do
    {
        scanf("%d%c", &value, &newLine);
        if (newLine != '\n')
        {
            clearStandardInputBuffer();
            printf("ERROR: Value must be an integer: ");
        }
    } while (newLine != '\n');

    return value;
}

int getIntFromRange(int lower, int upper)
{
    int num = 0;
    do
    {
        num = getInteger();
        if (num < lower || num > upper)
        {
            printf("Enter a valid integer between %d and %d", lower, upper);
        }
    } while (num < lower || num > upper);

    return num;
}

void displaySaleDetailHeader(void) //TO DO hea
{
    printf("DAY MONTH YEAR                       PRODUCT #SOLD   PRICE\n");
}

//PAQC
void displaySaleDetailRecord(struct ProductSalesList* prodList)
{
int i;
displaySaleDetailHeader();
for(i=0, i <= prodList->counter,i++)
{
    printf("%d %d %d %s %d %lf", prodList->arrayRecord[i].date1.day, prodList->arrayRecord[i].date1.month,prodList->arrayRecord[i].date1.year, productList->arrayRecord[i].productName, productList->arrayRecord[i].salePrice);
}
}
//PAQC
void DisplaySaleByProduct(struct ProductSalesList* prodList)
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

//PAQC -Falta inicializar en main/ solo llena la estructura
int addSale(struct ProductSalesList* prodList, struct DailySalesList* dailySales, char productName[MAX_PRODUCT_NAME_LEN], struct* SingleSaleRecord);
{
struct SingleSaleRecord arrayRecord = { 0 };
prodList->arrayRecord[prodList->counter] = *saleRec;
prodList->counter++;

}

int readSalesFile(FILE *fp, struct ProductSalesList *prodList, struct DailySalesList *dailySales)
{
    int numberSalesRead = 0, valuesRead;
    struct SingleSaleRecord saleRec = {0};
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
//Sample Data File
//productName, numberSold, salePrice, saleDate - month, day, year
//geraniums / 1 / 9.99 / 09 / 08 / 2021
//bird of paradise / 1 / 44.50 / 09 / 08 / 2021
//tulips / 12 / 3.99 / 09 / 08 / 2021
//geraniums / 6 / 9.99 / 09 / 09 / 2021
//impatiens / 12 / 2.0 / 09 / 09 / 2021

//Sample Output

//****** Seneca Gardens ******
//Select one of the following options :
//1-View All Sales
//2-View Sales By Product
//3-View Sales by Date sorted by revenue
//0-Exit
//1 -------------------->input
//DAY MONTH YEAR                       PRODUCT #SOLD   PRICE
//08    09 2021                     geraniums     1    9.99
//09    09 2021                     geraniums     6    9.99
//08    09 2021              bird of paradise     1   44.50
//08    09 2021                        tulips    12    3.99
//09    09 2021                     impatiens    12    2.00
//
//Select one of the following options :
//1-View All Sales
//2-View Sales By Product
//3-View Sales by Date sorted by revenue
//0-Exit
//2 -------------------->input
//      PRODUCT #SOLD REVENUE
//     geraniums   7  69.93
// bird of paradise  1   44.50
//      tulips    12   47.88
//   impatiens   12   24.00
//
//Select one of the following options :
//1 - View All Sales
//2 - View Sales By Product
//3 - View Sales by Date sorted by revenue
//0 - Exit
//3 -------------------->input
// REVENUE DAY MONTH YEAR
//  102.37  08    09 2021
//   83.94  09    09 2021
//
//Select one of the following options :
//1 - View All Sales
//2 - View Sales By Product
//3 - View Sales by Date sorted by revenue
//0 - Exit
//4
//Enter a valid integer between 0 and 3: 0
//Good Bye