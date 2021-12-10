#ifndef HEADER_H
#define MAX_RECORD 10
#define MAX_PRODUCT_NAME_LEN 20

struct Date
{
    int day;
    int month;
    int year;
};

struct DailySalesList
{
    char product;
    int sold;
    double price
};

struct SingleSaleRecord
{
    int numberSold;
    double salePrice;
    char productName[MAX_PRODUCT_NAME_LEN];
    struct Date saleDate;

};

//This structure has all the data we need to display
struct ProductSaleList
{
    struct SingleSaleRecord arrayRecord[MAX_RECORD];
    int counter;
};

//New functions
/*int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales);
int addSale (struct ProductSalesList* prodList, struct DailySalesList* dailySales, char productName[MAX_PRODUCT_NAME_LEN], struct* SingleSaleRecord);
int products(struct ProductSalesList* prodList);
*/
#endif