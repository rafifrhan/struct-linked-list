#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
using namespace std;

struct TNode{
    int data;
    TNode *next;
};

TNode *head, *tail;

int init(){
	head = NULL;
	tail = NULL;
	}

int isEmpty(){
	if(tail == NULL) return 1;
	else return 0;
}

int insertDepan(int databaru){
	TNode*baru;
	baru = new TNode;
	baru->data = databaru;
	baru->next = NULL;
	
	if(isEmpty()==1){
		head=tail=baru;
		tail->next=NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	cout<<"Data Masuk\n";
}

int insertBelakang(int databaru){
	TNode*baru,*bantu;
	baru= new TNode;
	baru->data = databaru;
	baru->next = NULL;
	if(isEmpty()==1){
		head=baru;
		tail=baru;
		tail->next = NULL;
	}
	else {
		tail-> next= baru;
		tail=baru;
	}
	cout<<"Data Masuk\n";
}

int tampil(){
	TNode *bantu;
	bantu =head;
	if(isEmpty()==1){
	while(bantu!=NULL){
		cout<<bantu->data<<"->";
		bantu=bantu->next;
	}
	cout<<"NULL";
	}else cout<<"masih kosong\n";
}

int hapusDepan(){
TNode *hapus;
int d;
if (isEmpty()==0){
	if(head!=tail){
		hapus =head;
		d = hapus->data;
		head = head->next;
		delete hapus;
	} else {
		d = tail->data;
		head=tail=NULL;
	}
	cout<<d<<"terhapus";
} else cout<<"Masih Kosong\n";
}

int hapusBelakang(){
	TNode *bantu, *hapus;
	int d;
	if(isEmpty()==0){
		bantu = head;
		if(head!=tail){
			while(bantu->next!=tail){
				bantu = bantu->next;
			}
			hapus = tail;
			tail=bantu;
			d = hapus->data;
			delete hapus;
			tail->next = NULL;
		} else {
			d= tail->data;
			head=tail=NULL;
		} 
		cout<<d<<" terhapus\n";
		} else cout<<"Masih Kosong\n";
	}
int bersih()
{
	TNode*bantu,*hapus;
	bantu = head;
	while(bantu=NULL)
	{
		hapus = bantu;
		bantu = bantu->next;
		delete  hapus;
		}
		head = NULL;
		system("cls");
}

int main()
{
	int pil,databaru;
	do
	{
	system("cls");
	cout<<endl<<endl;
	cout<<"================================="<<endl;
	cout<<"=      PROGRAM LINKED LIST      ="<<endl;
	cout<<"================================="<<endl;
	cout<<"= 1. Insert Depan               ="<<endl;
	cout<<"= 2. Insert Belakang            ="<<endl;
	cout<<"= 3. Delete Depan               ="<<endl;
	cout<<"= 4. Delete Belakang            ="<<endl;
	cout<<"= 5. Tampil Data                ="<<endl;
	cout<<"= 6. Clear                      ="<<endl;
	cout<<"= 7. exit                       ="<<endl;
	cout<<"================================="<<endl;
	cout<<" Masukan Pilihan : "; cin>>pil;
	
	switch(pil)
	{
		case 1: system("cls");{
			cout<<"Masukan Data = ";
			cin>>databaru;
			insertDepan(databaru);
			break;
		}
		case 2: system("cls");{
			cout<<"Masukan Data = ";
			cin>>databaru;
			insertBelakang(databaru);
			break;
		}
		case 3: system("cls");{
			hapusDepan();
			break;
		}
		case 4: system("cls");{
			hapusBelakang();
			break;
		}
		case 5: {
			tampil();
			getch();
			break;
		}
		case 6:system("cls");{
			bersih();
			break;
		}
		case 7:{
			return 0;
			break;
		}
		default: system("cls");
		{
		cout<<"\n maaf, pilihan yang anda pilih tak tersedia";	
		}

}
while(pil=7);
}



