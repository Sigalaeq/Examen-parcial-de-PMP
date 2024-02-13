#include <bits/stdc++.h>
using namespace std;

class circulo {
private:
float radio;
public:
int x;
int y;
circulo();
circulo (int x2,int y2);
circulo (int x2, int y2, float r);
void setradio(float r);
float getradio();
float getarea();
void intersects(circulo circulo );

};

int main(){
circulo c1;
c1.x=7;
c1.y=8;
c1.setradio(7.5);
circulo c2(9,12);
c2.setradio(12);
circulo c3(43,48,12.5);
cout<<c1.getarea()<<endl;
cout<<c2.getarea()<<endl;
cout<<c3.getarea()<<endl;
c1.intersects(c2);
c3.intersects(c2);
c1.intersects(c3);


}

circulo::circulo(){
    radio=0.0;
    x=0;
    y=0;
};

circulo::circulo(int x2, int y2){
radio=0;
x2=x;
y2=y;

};

circulo::circulo(int x2,int y2,float r){
if(r>0)
 radio=r;
 else{
 radio=0.0;
 };
x2=x;
y2=y;

};

float circulo::getradio(){
cout<< "Este es el radio de su circulo ";
return radio;
}

 void circulo::setradio(float r){
if(r>0)
    radio=r;
    else{
    radio=0.0;
    };

}

float circulo::getarea(){
float area;
area=3.1416*(pow(radio,2));
cout<<"El aa de tu circulo es";
return area;
}

void circulo::intersects(circulo circulo){
float dist=sqrt((circulo.x-x)*(circulo.x-x))+((circulo.y-y)*(ciruclo.y-y));
float suma=radio+circulo.getradio();
if(dist<suma)
cout<<"Los circulos se intersectan";
else{
    cout<<"No se instersectan";
}
}