/*
Implemente um programa que leia uma data (cadeia de caracteres) no formato
dd/dd/dddd e indica se o texto lido é uma data válida ou não. São aceitas datas tanto no
formato brasileiro quanto no formato americano. Se a data lida for válida, indicar se ela
está no formato brasileiro ou no formato americano.
*/
#include <stdio.h>
int VerificarData(char data[], int tam);
void brasileiro(char data[],int tam);
void americano(char data[],int tam);

int main(){
    char data[20];
    int tam,res;
    printf("Digite uma data no formato **/**/****: ");
    fgets(data,20,stdin);
    tam=(strlen(data)-1);
    res=VerificarData(data,tam);
    if(res==1){
    brasileiro(data,tam);
    americano(data,tam);
    }
    else if (res==0)
        printf("Data invalida.");
    return 0;
}
int VerificarData(char data[], int tam){ //Verificar se a data está no formato **/**/-
    int aprovado,teste,res;
    res=0;
    aprovado=0;
    for(int i=0;i<tam;i++){
        if(i==2 || i==5){
            if(data[i]=='/')
            aprovado++;
        }
        else{
            teste=data[i];
            if(teste>=48 && teste<=57)
            aprovado++;
        }
    }
    if(aprovado==tam)
    res=1;
    return res;
}
void brasileiro(char data[],int tam){
    int teste,passou;
    passou=0;
    if(data[3]=='0' && data[4]=='2'){ //Retirando-se os dias 29,30 e 31 de fevereiro
        if((data[0]=='2' && data[1]=='9')||(data[0]=='3' && (data[1]=='0'||data[1]=='1')))
        passou=passou+10;
    }
    if(data[0]=='0' || data[0]=='1' || data[0]=='2'){ //Testar dias 0*/, 1*/ e 2*/
    passou++;
    }
    else if((data[0]=='3' && data[1]=='0')||(data[0]=='3' && data[1]=='1')){ //Testar dias 30 e 31 
    passou++;
    }
    if(data[3]=='0'){ //Testar messes **/0*
        passou++;
    }
    else if(data[3]=='1'){
        if(data[4]=='0' || data[4]=='1'|| data[4]=='2') //Testar messes **/1*
        passou++;
    }
    if(passou==2)
        printf("\nA data informada pode ser lida no formato brasileiro (dd/mm/aa).",data);
    else
        printf("\nA data informada nao pode ser lida no formato brasileiro (dd/mm/aa).",data);
}
void americano(char data[],int tam){
    int teste,passou;
    passou=0;
    if(data[0]=='0' && data[1]=='2'){ //Retirando-se os dias 29,30 e 31 de fevereiro
        if((data[3]=='2' && data[4]=='9')||(data[3]=='3' && (data[4]=='0'||data[4]=='1')))
        passou=passou+10;
    }
    if(data[3]=='0' || data[3]=='1' || data[3]=='2'){ //Testar dias **/0*/, **/1* e **/2*
    passou++;
    }
    else if((data[3]=='3' && data[4]=='0')||(data[3]=='3' && data[4]=='1')){ //Testar dias **/30 e **/31 
    passou++;
    }
    if(data[0]=='0'){ //Testar messes 0*/
        passou++;
    }
    else if(data[0]=='1'){
        if(data[1]=='0' || data[1]=='1'|| data[1]=='2') //Testar messes 1*/
        passou++;
    }
    if(passou==2)
        printf("\nA data informada pode ser lida no formato americano (mm/dd/aa).",data);
    else
        printf("\nA data informada nao pode ser lida no formato americano (mm/dd/aa).",data);
}