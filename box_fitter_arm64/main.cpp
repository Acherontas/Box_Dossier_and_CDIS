#include <iostream>
#include <iomanip>
#include "math.h"
#include "box_dossier.h"
#include <thread>
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{
    int number ;
    float rst;
    int rowsx;
    int columnsz;
    int preci;
    string snumber;
    cout<<"enter number,  timer sleep precision , rows\n";
    number=stoi(argv[1]);
    snumber.clear();
    snumber+=to_string(number);
    columnsz=snumber.size();
    preci=stoi(argv[2]);
    rowsx=stoi(argv[3]);
    cout<<"number of " << number <<"\n";
    cout<<"number as string " << snumber <<"\n";
    cout<<"columns " << columnsz <<"\n";
    cout<<"rows " << rowsx <<"\n";
    cout<<"timer sleep precision " << preci <<"\n";

    sum_cdi *smcdi= new sum_cdi();
    smcdi->cdis(number,1);
    cout<<"\n";

    box_dossier *bds=new box_dossier();
    bds->dossi_boxifil(number,rst,rowsx,columnsz,snumber,preci);





    return 0;
}
