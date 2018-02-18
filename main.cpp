#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout <<"Hello world!" <<endl<<"How are you?"<<endl<<"\""<<endl;
    int ageUtilisateur (16);
    int nombreAmis(432);//How many friends does the player have?

    double pi(3.14159);

    bool estMonAmi(true), estMonMeilleurAmis(false);//Is this user a friend of mine?

    char lettre('a');

    string nomUtilisateur ("Albert Einstein");

    string nomJoueur;

    int nombreJoueurs;

    bool aGagne; //Did the player win?
    cout<<"1-Vous vous appelez "<<nomUtilisateur<<" et vous avez "<<ageUtilisateur<<" ans"<<endl;

    int& maVariable(ageUtilisateur);//Déclaration d'une référence nommée maVariable accrochée à la variable ageUtilisateur

    cout<<"2-Vous vous appelez "<<nomUtilisateur<<" et vous avez "<<maVariable<<" ans"<<endl;

    return 0;
}
