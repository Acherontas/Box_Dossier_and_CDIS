#include "box_dossier.h"
//ctor
box_dossier::box_dossier(){}
//dtor
box_dossier::~box_dossier(){}
//copy ctor
box_dossier::box_dossier(const box_dossier& other){}
// handle self assignment//assignment operator
box_dossier& box_dossier::operator=(const box_dossier& rhs){if (this == &rhs) return *this; return *this;}

int box_dossier::dossi_boxifil(int number,float rst,int rowsx,int columnsz,string snumber,int preci){
    int tmpvl=1;
    char ck;
    int mlk=0;
    int tmpsum=0;
    int j=0;
    int k=0;
    int frno=0;
    int mri=0;
    int lri=0;
    int ar[rowsx][columnsz];
    for(int i=0;i<=snumber.size()-1;i++){cout<<snumber.at(i) << " ";}
    cout<<"\n";
    cout<<"----------------------------------------------------------------\n";
    for(int i=0;i<=snumber.size()-1;i++){
            ck=snumber.at(i);
            mlk=stoi(&ck);
            mri=0;
            lri=0;
            for(;;){
                    ar[j][k]=tmpvl;
                    j+=1;
                    tmpsum+=tmpvl;
                    if(tmpsum>mlk){ar[j-1][k]=0;}
                    if(j==rowsx-1){
                                    tmpsum=mlk-tmpsum;
                                    ar[j][k]=tmpsum;
                                    if(tmpsum==-1){ar[j][k]=0;}
                                    if(ar[j-1][k]==0){ar[j][k]=0;}
                                    }
                    mri+=1;
                    if(mri-1==0 && mlk==1){ar[j][k]=0; lri=1;}
                    if(j==rowsx-1){break;}
                    std::this_thread::sleep_for(std::chrono::milliseconds(preci));
            }
            tmpvl=1;
            tmpsum=0;
            k+=1;
            j=0;
    }
   for(int j=0;j<rowsx;j++){
        for(int k=0;k<columnsz;k++){
            cout<<ar[j][k] << " " ;
            std::this_thread::sleep_for(std::chrono::milliseconds(preci));
        }
        cout<<"\n";
   }
   cout<<"----of-dashes-----------------------------\n";
   int xlr=0;
   string mxr;
   int per_line_plagia=0;
   int per_line_isia=0;
   int count_isia=0;
   int count_plagia=0;
   int ar_main[preci];
   int ar_secon[preci];
   int pos_idx=0;
   for(int j=0;j<rowsx;j++){
        for(int k=0;k<columnsz;k++){
               xlr=0;mxr.clear();
                if(ar[j][k]!=0){
                        while(xlr<ar[j][k]){
                                            mxr+="|";
                                            per_line_isia+=1;
                                            count_isia+=1;
                                            xlr+=1;
                                           }
                    mxr+=" ";
                }
                if(ar[j][k]==0){
                                mxr+=" / ";
                                per_line_plagia+=1;
                                count_plagia+=1;
                               }
                cout<<mxr;
        }
        ar_main[pos_idx]=per_line_isia; ar_secon[pos_idx]=per_line_plagia; pos_idx+=1;
        cout<<" per line isia ::== " << per_line_isia <<" ";
        cout<<" per line plagia ::== " << per_line_plagia <<"\n";
        per_line_isia=0;
        per_line_plagia=0;
            cout<<"\n";
   }
cout<<"counter isia ::== " << count_isia <<"\n";
cout<<"counter plagia ::== " << count_plagia <<"\n";

cout<<"---oftype of main----\n";
int xsum=0;int ysum=0;
for(int i=0;i<=pos_idx;i++){cout<<ar_main[i] << " "; xsum+=ar_main[i];}
cout<<"\n";
cout<<"with summary number ::== " << xsum <<"\n";
cout<<"---oftype of secondary---\n";
for(int i=0;i<=pos_idx;i++){cout<<ar_secon[i] << " " ; ysum+=ar_secon[i];}
cout<<"\n";
cout<<"with summary sub-number ::== " << ysum <<"\n";
return 0;
}


