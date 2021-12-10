#ifndef HEADER_H
//PAQC
#define MAX_RECORD 10
//PAQC
#define MAX_PRODUCT_NAME_LEN 20
//PAQC
struct Date
{
    int day;
    int month;
    int year;
};

struct DailySalesList
{
    //PAQC
    int revenue;
    //PAQC
    int price[MAX_RECORD];
    //PAQC
    struct Date date2[MAX_RECORD];
};

struct SingleSaleRecord
{
    int numberSold;
    int TotalProd;
    double salePrice;
    //PAQC
    char productName[MAX_PRODUCT_NAME_LEN];
    //PAQC
    struct Date date1;
};
//date
//day month year

//PAQC
struct names 
{
 char flowerName[MAX_PRODUCT_NAME_LEN]
};
//PAQC
struc ProductSaleList
{
    struct SingleSaleRecord arrayRecord[MAX_RECORD];

    int counter;
}
//PAQC
int readSalesFile(FILE* fp, struct ProductSalesList* prodList, struct DailySalesList* dailySales)
int addSale (struct ProductSalesList* prodList, struct DailySalesList* dailySales, char productName[MAX_PRODUCT_NAME_LEN], struct* SingleSaleRecord);
int products(struct ProductSalesList* prodList);
#endif