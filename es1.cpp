#include <iostream>
using namespace std;
int main()
{
int prodotto=1;
int x;
int y;
int max=0;
int m[4][4];
cout<<"inserisci la prima matrice 2x2"<<endl;
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<"inserisci l'elemento"<<i<<""<<j<<endl;
m[i][j]=rand()%20;
if(i==j){
prodotto=prodotto*m[i][j];
if(m[i][j]>max){
max=m[i][j];
x=i;
y=j;
}

}
}}
cout<<"la prima matrice è";
cout<<endl;
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<m[i][j]<<" ";

}
cout<<endl;
}
cout<<"il prodotto della diagonale è "<<prodotto;
cout<<endl;
cout<<"il numero massimoi sulla diagonale è "<<max<<" si trova in posizione "<<x<<" "<<y;
}
