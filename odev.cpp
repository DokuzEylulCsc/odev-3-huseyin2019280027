//Hüseyin ELİBOL 2019280027

#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    char cvp;
    int sorusayisi;
    int ogrencisayisi;
    ofstream dosyaYaz;

    cout<<"Soru sayýsýný giriniz:";
    cin>>sorusayisi;

    char cevaplar[sorusayisi];

    cout<<"Cevap anahtarýný oluþturunuz."<<endl;

    for(int i=0;i<sorusayisi;i++){
        cout<<i+1<<". Sorunun cevabýný girini"<<endl;
        cin>>cevaplar[i];
    }


     cout<<"Öðrenci sayýsýný girininiz";
     cin>>ogrencisayisi;

    int numaralar[ogrencisayisi];

    for(int s=0;s<ogrencisayisi;s++){
            cout<<s+1<<". oðrencinin numarasýný girin";
            cin>>numaralar[s];
    }


        dosyaYaz.open("finput.txt");

            dosyaYaz<<sorusayisi<<endl;

            for(int j=0;j<sorusayisi;j++){
                dosyaYaz<<cevaplar[j]<<",";
            }


            for(int e=0;e<ogrencisayisi;e++){
                cout<<numaralar[e]<<"Numaralý öðrencinin cavaplarýnýn arada virgül býrakarak giriniz ve entre basýnýz";
                cin>>cvp;
                dosyaYaz<<numaralar[e]<<","<<cvp<<endl;
            }

        dosyaYaz.close();



    return 0;
}
