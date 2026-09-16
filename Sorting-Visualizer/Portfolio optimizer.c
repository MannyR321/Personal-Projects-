#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
char           symbol[6];     //The Asset Identifier  //  sized for GSPC, NVDA, TSLA, AVGO, ANET (4 letters + null)
int            num_days;    //The Data MetaData
double         *prices;      // The Price Track
double         *returns;     // The Perforance Track
double         mean_return;  // Intergrated Performance Tracker 
double         variance;     // integrated Risk Tracker 

}Asset;

int main(void) {

Asset myAsset[6];  //Declare one Asset varriable

strcpy(myAsset[0].symbol,"GSPC");

strcpy(myAsset[1].symbol,"NVDA");

strcpy(myAsset[2].symbol,"TSLA");

strcpy(myAsset[3].symbol,"AVGO");

strcpy(myAsset[4].symbol,"ANET");

strcpy(myAsset[5].symbol,"AMD");

myAsset[0].num_days = 500;
myAsset[1].num_days = 499;
myAsset[2].num_days = 498;
myAsset[3].num_days = 497;
myAsset[4].num_days = 496;
myAsset[5].num_days = 495;


printf("symbol: %s, Days: %d\n",myAsset[0].symbol, myAsset[0].num_days);
printf("symbol: %s, Days: %d\n",myAsset[1].symbol, myAsset[1].num_days);
printf("symbol: %s, Days: %d\n",myAsset[2].symbol, myAsset[2].num_days);
printf("symbol: %s, Days: %d\n",myAsset[3].symbol, myAsset[3].num_days);
printf("symbol: %s, Days: %d\n",myAsset[4].symbol, myAsset[4].num_days);
printf("symbol: %s,  Days: %d\n",myAsset[5].symbol, myAsset[5].num_days);

 return 0;

}

