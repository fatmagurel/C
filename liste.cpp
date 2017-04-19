#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	char ad[50];
	int num;
	int yas;
	struct ogrenci *next;
};

typedef struct ogrenci node;
node *head, *newNode;
node *listeOlustur(int);
void dolasma(node*);
node *dugumEkle(node *);
node *dugumSilme(node*);

int main()
{
	node *head;
	int secim=0,n;
	printf("\n1-Liste Olustur	2-Listede Dolas	3-Dugum Ekle	4-Dugum Sil	5-Exit\n");
	while(1)
	{
		printf("Secim [1-5]?");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				head=listeOlustur(n);
				//printf("Adres:%x\n",head);
				dolasma(head);
				break;
			case 2:
				dolasma(head);
				break;
			case 3:
				head=dugumEkle(head);
				dolasma(head);
				break;
			case 4:
				head=dugumSilme(head);
				dolasma(head);
				break;
			case 5:
				exit(0);
		}
	}
}

node *listeOlustur(int n)
{
	node *head, *p;
	int ogrenci_sayisi,sayac;
	printf("Listeye kac ogrenci eklenecek:\n");
	scanf("%d",&ogrenci_sayisi);
	for(sayac=0;sayac<ogrenci_sayisi;sayac++)
	{
		if(sayac==0)
		{
			head=(node*)malloc(sizeof(node));
			p=head;
		}
		else
		{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		printf("%d. Ogrencinin adini girin:\n",sayac+1);
		scanf("%s",p->ad);
		printf("Numarasini girin:\n");
		scanf("%d",&p->num);
		printf("Yasini girin:\n");
		scanf("%d",&p->yas);
	}
	p->next=NULL;
	return head;
}

void dolasma(node *head)
{
	int counter=1;
	node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d- %s %d %d\n",counter,p->ad,p->num,p->yas);
		p=p->next;
		counter++;
	}
}

node *dugumEkle(node *head){
	node *p, *q;
	int stdNo;
	node *newnode=(node*)malloc(sizeof(node));
	printf("Ogrencinin adi:\n"); scanf("%s",newnode->ad);
	printf("Ogrencinin numarasi:\n"); scanf("%d", &newnode->num);
	printf("Ogrencinin yasi:\n"); scanf("%d", &newnode->yas);
	printf("Hangi ogrenci numarasindan once yazilsin:\nListe sonuna eklemek icin 0 gir."); scanf("%d",&stdNo);
	
	p=head;
	if(p->num==stdNo)
	{
		newnode->next=p;
		head=newnode;
	}
	else
	{
		while(p->next!=NULL && p->num!=stdNo)
		{
			q=p;
			p=p->next;
		}
		if(p->num==stdNo)
		{
			q->next=newnode;
			newnode->next=p;
		}
		else if(p->next==NULL)
		{
			p->next=newnode;
			newnode->next=NULL;
		}
	}
	return head;
}

node *dugumSilme(node* head)
{
	int stdNo;
	node *p, *q;
	printf("Silinecek ogrencinin numarasini girin:\n");
	scanf("%d",&stdNo);
	
	p=head;
	
	if(p->num==stdNo)
	{
		head=p->next;
		free(p);
	}
	else
	{
		while(p->next!=NULL && p->num!=stdNo)
		{
			q=p;
			p=p->next;
		}
			if(p->num==stdNo)
			{
				q->next=p->next;
				free(p);
			}
			else if(p->next==NULL)
			{
				printf("Silinecek dugum bulunamadi.\n");
			}
	}	
	return head;
	
}




















