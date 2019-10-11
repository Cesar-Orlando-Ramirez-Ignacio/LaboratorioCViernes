#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	/***********Actividad #1************/
	
char pal[40],pal2[40], b=' ';
int n,i,x,a=0,p=0,e=0;

printf("Ingresa una palabra para verificar si es palindroma:	");
gets(pal);
n=strlen(pal);
for(i=0;i<=n;i++){
	if(pal[i]==b)
	i++;
	pal2[e]=pal[i];
	e++;
}
	for(x=n-1;x>=0;x--)
	printf("\n %c \t",pal[x]);
	x=0;
	n=strlen(pal2);
	for(x=n-1;x>=0;x--){
		if(pal2[x]==pal2[a])
		p++;
		a++;
	}
	if(p==n)
	printf("\n Es palindroma \n");
	else
	printf("\n No es palindroma \n");
	
	/***********Actividad #2***********/
	
	char texto[10];
	int ca=0,cb=0,cc=0,cd=0,ce=0,cf=0,cg=0,ch=0,ci=0,cj=0,ck=0,cl=0,cm=0,cn=0,co=0,cp=0,cq=0,cr=0,cs=0,ct=0,cu=0,cv=0,cw=0,cx=0,cy=0,cz=0;
    printf("\nIngresa un texto de 10 letras:	");
    scanf("%s",texto);
    
    for(i=0;i<10;i++){
        if(texto[i]=='a'||texto[i]=='A'){ca=ca+1; }else if(texto[i]=='b'||texto[i]=='B'){cb=cb+1; }else if(texto[i]=='c'||texto[i]=='C'){cc=cc+1; }else if(texto[i]=='d'||texto[i]=='D'){cd=cd+1; }
		else if(texto[i]=='e'||texto[i]=='E'){ce=ce+1; }else if(texto[i]=='f'||texto[i]=='F'){cf=cf+1; }else if(texto[i]=='g'||texto[i]=='G'){cg=cg+1; }else if(texto[i]=='h'||texto[i]=='H'){ch=ch+1; }
		else if(texto[i]=='i'||texto[i]=='I'){ci=ci+1; }else if(texto[i]=='j'||texto[i]=='J'){cj=cj+1; }else if(texto[i]=='k'||texto[i]=='K'){ck=ck+1; }else if(texto[i]=='l'||texto[i]=='L'){cl=cl+1;} 
		else if(texto[i]=='m'||texto[i]=='M'){cm=cm+1; }else if(texto[i]=='n'||texto[i]=='N'){cn=cn+1; }else if(texto[i]=='o'||texto[i]=='O'){co=co+1; }else if(texto[i]=='p'||texto[i]=='P'){cp=cp+1; }
		else if(texto[i]=='q'||texto[i]=='Q'){cq=cq+1; }else if(texto[i]=='r'||texto[i]=='R'){cr=cr+1; }else if(texto[i]=='s'||texto[i]=='S'){cs=cs+1; }else if(texto[i]=='t'||texto[i]=='T'){ct=ct+1; }
		else if(texto[i]=='u'||texto[i]=='U'){cu=cu+1; }else if(texto[i]=='v'||texto[i]=='V'){cv=cv+1; }else if(texto[i]=='w'||texto[i]=='W'){cw=cw+1; }else if(texto[i]=='x'||texto[i]=='X'){cx=cx+1; }
		else if(texto[i]=='y'||texto[i]=='Y'){cy=cy+1; }else if(texto[i]=='z'||texto[i]=='Z'){cz=cz+1; }
	}
	printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\nF:%d\nG:%d\nH:%d\nI:%d\nJ:%d\nK:%d\nL:%d\nM:%d\nN:%d\nO:%d\nP:%d\nQ:%d\nR:%d\nS:%d\nT:%d\nU:%d\nV:%d\nW:%d\nX:%d\nY:%d\nZ:%d\n",ca,cb,cc,cd,ce,cf,cg,ch,ci,cj,ck,cl,cm,cn,co,cp,cq,cr,cs,ct,cu,cv,cw,cx,cy,cz);
	return 0;
}
