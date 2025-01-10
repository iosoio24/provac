#include <iostream>
using namespace std;
int main()
{
int verifica=0;
int m[2][2];
cout<<"inserisci la prima matrice 2x2"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<"inserisci l'elemento"<<i<<""<<j<<endl;
cin>>m[i][j];
if(m[i][j]==3){
verifica=1;
}
}}

cout<<"la matrice è";
cout<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;

}
if(verifica==1){
cout<<"il 3 è presente";
}else{
cout<<"il 3 non è presente";
}
}

