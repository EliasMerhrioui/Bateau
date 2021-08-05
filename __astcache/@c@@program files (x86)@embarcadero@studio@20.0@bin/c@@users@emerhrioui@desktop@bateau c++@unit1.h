//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Net.HttpClient.hpp>
#include <System.Net.HttpClientComponent.hpp>
#include <System.Net.URLClient.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TGroupBox *Compte;
	TGroupBox *InformationNavigation;
	TGroupBox *Destination;
	TButton *connexion;
	TButton *inscription;
	TButton *go;
	TLabel *coordonnee;
	TLabel *latitude;
	TLabel *longitude;
	TLabel *vitessebateau;
	TLabel *direction;
	TGroupBox *Map;
	TGroupBox *PageConnexion;
	TGroupBox *PageInscription;
	TLabel *pseudos;
	TLabel *motdepasse;
	TButton *valideConnexion;
	TLabel *pseudosInscription;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *valideInscription;
	TEdit *pseudo;
	TEdit *pseudoInscription;
	TEdit *mdpInscription;
	TEdit *mailInscription;
	TEdit *telephoneInscription;
	TCheckBox *admin;
	TEdit *mdp;
	TImage *trajetStMaloBrest;
	TComboBox *list;
	TButton *deconnexion;
	TStaticText *idconnexion;
	void __fastcall connexionClick(TObject *Sender);
	void __fastcall inscriptionClick(TObject *Sender);
	void __fastcall valideConnexionClick(TObject *Sender);
	void __fastcall valideInscriptionClick(TObject *Sender);
	void __fastcall goClick(TObject *Sender);
	void __fastcall deconnexionClick(TObject *Sender);

private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
