//---------------------------------------------------------------------------

#include <vcl.h>
#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include <string.h>
using namespace std;
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::connexionClick(TObject *Sender)
{
	this->Destination->Visible=false;
	this->InformationNavigation->Visible=false;
	this->Compte->Visible=false;
	this->PageConnexion->Visible=true;

	 int count;
	 string user,pass,u,p;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::inscriptionClick(TObject *Sender){
	this->Destination->Visible=false;
	this->InformationNavigation->Visible=false;
	this->Compte->Visible=false;
	this->PageInscription->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::valideConnexionClick(TObject *Sender){
	//Connexion
	int count;
	string pseudoCon,mdpCon,p,m;
	pseudoCon = AnsiString(this->pseudo->Text).c_str();
	string mdpIns;
	mdpCon = AnsiString(this->mdp->Text).c_str();

    ifstream input("database.txt");
		while(input>>p>>m){
			if(p==pseudoCon && m==mdpCon){
				count=1;
			}
        }
        input.close();

		if(count==1){
			this->connexion->Visible = false;
			this->inscription->Visible = false;
			this->deconnexion->Visible = true;
			this->idconnexion->Visible = true;
			this->idconnexion->Caption = "Bienvenue'.pseudoCon.'"; //pseudoCon
		}

		else {
				//ShowMessage("Fail");
				int rep = Application->MessageBoxW(L"Pseudo ou mot de passe incorrect", L"", MB_YESNO|MB_ICONERROR);
		}


	this->Destination->Visible=true;
	this->InformationNavigation->Visible=true;
	this->Compte->Visible=true;
	this->PageConnexion->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::valideInscriptionClick(TObject *Sender)
{
	//si inscription valide alors envoie de donnée a la bdd et rafficher menu principal avec les connxion
	//sinon erreur recommencé ou annulé
	int rep = Application->MessageBoxW(L"Etes vous sûr des informations ?", L"", MB_YESNO|MB_ICONINFORMATION);

	if(rep == IDYES){
		ShowMessage("Votre inscription est validé !");
		string pseudoIns;
		pseudoIns = AnsiString(this->pseudoInscription->Text).c_str();
		string mdpIns;
		mdpIns = AnsiString(this->mdpInscription->Text).c_str();
		ofstream ins("database.txt",ios::app);
		ins<<pseudoIns<<' '<<mdpIns<<endl;

	}

	else {
        ShowMessage("Votre inscription est annulé !");
    }

	this->Destination->Visible=true;
	this->InformationNavigation->Visible=true;
	this->Compte->Visible=true;
	this->PageInscription->Visible=false;
}


void __fastcall TForm1::goClick(TObject *Sender){
   //	ShowMessage(this->list->ItemIndex);

   //Ajout de temps pris plus fin trajet
	if (list->ItemIndex == 0) {
			this->trajetStMaloBrest->Visible=true;
			this->Image1->Visible=false;
			this->stop->Visible=true;
			//ShowMessage("GOGOGOGOGO");
	}
}

//---------------------------------------------------------------------------

void __fastcall TForm1::deconnexionClick(TObject *Sender){
	int rep = Application->MessageBoxW(L"Etes vous sûr de vous déconnecter ?", L"", MB_YESNO|MB_ICONINFORMATION);

	if (rep == IDYES) {
		this->connexion->Visible=true;
		this->inscription->Visible=true;
		this->idconnexion->Visible=false;
		this->deconnexion->Visible=false;
	}

}

//---------------------------------------------------------------------------



void __fastcall TForm1::stopClick(TObject *Sender)
{
	   this->stop->Visible=false;
		this->trajetStMaloBrest->Visible=false;
		this->Image1->Visible=true;
}
//---------------------------------------------------------------------------

