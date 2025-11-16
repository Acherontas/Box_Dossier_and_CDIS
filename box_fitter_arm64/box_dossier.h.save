#ifndef BOX_DOSSIER_H
#define BOX_DOSSIER_H
#include <iostream>
#include <iomanip>
#include "math.h"
#include <string>
#include <thread>
using namespace std;

class box_dossier
{
    public:
        box_dossier();
        virtual ~box_dossier();
        box_dossier(const box_dossier& other);
        box_dossier& operator=(const box_dossier& other);
        string isios_sum[15];
        string plagios_sum[15];
        string isios_subsum[15];
        string plagios_subsum[15];
        int pin_ctl=0;
        int dossi_boxifil(int number,float rst,int rowsx,int columnsz,string snumber,int preci);
        int show_results();

    protected:

    private:

};

#endif // BOX_DOSSIER_H
