#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	int no;
	char ad[50];
	int yas;
	struct ogrenci *next;
};
typedef struct ogrenci node;
node *head, *newNode;

node *createlist(){
	int f,g;
	node *head, *p;
	printf("Listede kaç ogrenci olacak?");
	scanf("%d",&f);
	for(g=0; g<f; g++)
		{
			if(g==0)
				{
					head = (node*) malloc(sizeof (node));
					p=head;
				}
			else
				{
					p-> next=(node*) malloc (sizeof(node));
					p=p->next;
				}
			printf("%d. ogrencinin numarasi=", g+1); scanf("%d", &p->no);
			printf("%d. ogrencinin adi=", g+1); scanf("%d", p->no);
			printf("%d. ogrencinin yasi=", g+1); scanf("%d", &p->yas);
		}
		p->next=NULL;
		return head;
}
