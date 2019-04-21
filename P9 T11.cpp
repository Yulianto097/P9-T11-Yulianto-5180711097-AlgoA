#include <iostream>
using namespace::std;


float po(float angka,float p){
    if(p==0)
      return 1;
    else if (p < 0)
      return 1/angka*po(angka,p+1);
    else
      return angka*po(angka,p-1);
}

main (){
    int angka,p,a,b;
    double ba,be;
    cout<<"PANGKAT POSITIF & NEGATIF"<<endl;
    cin>>angka;
    cin>>p;
    cout<<po(angka,p)<<endl<<endl;
}

