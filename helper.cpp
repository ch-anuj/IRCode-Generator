#include <iostream>
#include<string>
#include <cstring>
#include <cstdlib>
#include <string.h>
using namespace std;
typedef struct parameters
{
	int type;
	struct parameters *next;
}parameters;
typedef struct lst
{
	char var_name[25];
	char type[7];
	struct lst * next;
}lst;
typedef struct gst{
	char f_name[25];
	struct lst* f_tableHead;
	struct lst* f_tableTail;
	char ret_type[7];
	struct gst* next;
	int nParam;
	parameters* p_list;
}gst;
typedef struct C
{
	char varName[25];
	struct C *next;	
}C;
C* headC = NULL;
C* tailC = NULL;
gst *PtrGst=NULL;
lst *PtrLst=NULL;
int lookupGst(char* fooName,gst* headGst){
  gst* temp = headGst;
  while(temp!=NULL){
    if(strcmp(temp->f_name,fooName)==0){
    	PtrGst = temp;
    	return 1;
    }
    temp = temp->next;
  }
  return 0;
}

void insert_gst(char* fooName,gst** tailGst,gst** headGst){
	int k;
	k=lookupGst(fooName,*headGst);
	if(k==1){
		cout<<"error! (duplicate insertion tried)";		
		return;
	}
  gst* temp = (gst*)malloc(sizeof(gst));
  temp->next = NULL;
  temp->f_tableHead=NULL;
  temp->f_tableTail=NULL;
  temp->p_list = NULL;
  strcpy(temp->f_name,fooName);
  if((*tailGst)!=NULL){
  	// gst table is not empty
    (*tailGst)->next = temp;
  }
  (*tailGst) = temp;
  if((*headGst)==NULL)(*headGst) = (*tailGst);
  return;
}
int lookupLst(char* varName,lst* headLst){
  lst* temp = headLst;
  while(temp!=NULL){
    if(strcmp(temp->var_name,varName)==0){
    	PtrLst = temp;
    	return 1;
    }
    temp = temp->next;
  }
  return 0;
}
void insert_lst(char* varName,lst** tailLst,lst** headLst){
	int k;
	k=lookupLst(varName,*headLst);
	if(k==1){
		cout<<"error! (duplicate insertion tried)";
		return;
	}
  lst* temp = (lst*)malloc(sizeof(lst));
  temp->next = NULL;
  strcpy(temp->var_name,varName);
  if((*tailLst)!=NULL){
  	// lst table is not empty
    (*tailLst)->next = temp;
  }
  (*tailLst) = temp;
  if((*headLst)==NULL)(*headLst) = (*tailLst);
  return;
}
void printGst(gst* headA){
  cout<<"\n--printing gst----\n";
  gst* temp = headA;
  while(temp!=NULL){
    cout<<temp->f_name<<" "<<temp->ret_type<<" "<<temp->nParam<<endl;
    temp=temp->next;
  }
  cout<<"\n------\n";
}
void printLst(lst* headA){
  cout<<"\n--printing lst----\n";
  lst* temp = headA;
  while(temp!=NULL){
    cout<<temp->var_name<<" "<<temp->type<<" "<<endl;
    temp=temp->next;
  }
  cout<<"\n------\n";
}
int setPtrGst(char* fooName,gst* headGst){
	lookupGst(fooName,headGst);
	if(PtrGst!=NULL)return 1;
	else return 0;
}
int setPtrLst(char* varName){
	if(PtrGst==NULL){
		cout<<"error in setting ptrlst because ptrgst is null!";
		return 0;
	}
	lookupLst(varName,PtrGst->f_tableHead);
	if(PtrLst!=NULL)return 1;
	else return 0;
}
void printAllTables(gst* headGst){
	gst* temp = headGst;
	printGst(headGst);
  	while(temp!=NULL){
    	printLst(temp->f_tableHead);
    temp=temp->next;
  }

}
void addNodeC(char* label,C** tailC,C** headC){
	cout<<"adding node "<<label<<" to C \n";

  C* temp = (C*)malloc(sizeof(C));
  temp->next = NULL;
  strcpy(temp->varName,label);
  if((*tailC)!=NULL){
    (*tailC)->next = temp;
    (*tailC) = (*tailC)->next;
  }
  else{
  	(*tailC) = temp;
  }
  
  
  if((*headC)==NULL)(*headC) = (*tailC);
//  cout<<"exiting 8 ";
  return ;
}
void printlistC(C* headC){
	cout<<"entering printlistC\n";
	if(headC==NULL)return;
	C* temp = headC;
  while(temp!=NULL){
    cout<<temp->varName<<endl;
    temp = temp->next;
  }
  cout<<"\nexiting printlistC";
}

int main(){

	addNodeC(strdup("int"),&tailC,&headC);
	addNodeC(strdup("int"),&tailC,&headC);

	printlistC(headC);
	
	







	return 0;	
	// gst* headGst=NULL;
	// gst* tailGst=NULL;
	// insert_gst(strdup("main"),&tailGst,&headGst);
	// insert_gst(strdup("foo"),&tailGst,&headGst);
	// insert_gst(strdup("max"),&tailGst,&headGst);
	// if(setPtrGst(strdup("main"),headGst)==1 ){
	// 	strcpy(PtrGst->ret_type,strdup("int"));
	// 	PtrGst->nParam=2;
	// 	PtrGst=NULL;
	// 	//always reset the pointer after using
	// }
	// if(setPtrGst(strdup("foo"),headGst)==1 ){
	// 	if(PtrGst!=NULL){
	// 		strcpy(PtrGst->ret_type,strdup("int"));
	// 		PtrGst->nParam=3;
	// 		PtrGst=NULL;
	// 	}
		
	// }
	// if(setPtrGst(strdup("max"),headGst)==1 ){
	// 	if(PtrGst!=NULL){
	// 		strcpy(PtrGst->ret_type,strdup("void"));
	// 		PtrGst->nParam=2;
	// 		PtrGst=NULL;
	// 	}
	// }	
	// if(setPtrGst(strdup("main"),headGst)==1){
	// 	insert_lst(strdup("a"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("a"));
	// 	strcpy(PtrLst->type,"int");

	// 	insert_lst(strdup("b"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("b"));
	// 	strcpy(PtrLst->type,"char");
	// 	insert_lst(strdup("c"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("c"));
	// 	strcpy(PtrLst->type,"char");
	// }
	// if(setPtrGst(strdup("foo"),headGst)==1){
	// 	insert_lst(strdup("d"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("d"));
	// 	strcpy(PtrLst->type,"int");
	// }
	// if(setPtrGst(strdup("max"),headGst)==1){
	// 	insert_lst(strdup("e"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("e"));
	// 	strcpy(PtrLst->type,"int");

	// 	insert_lst(strdup("f"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("f"));
	// 	strcpy(PtrLst->type,"int");
	// 	insert_lst(strdup("a"),&(PtrGst->f_tableTail),&(PtrGst->f_tableHead));
	// 	setPtrLst(strdup("a"));
	// 	strcpy(PtrLst->type,"int");
	// }
	// printAllTables(headGst);
	

}