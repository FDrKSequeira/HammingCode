#include<stdio.h>
#include<string.h>
void main(){
char h_msg[20]={0},msg[20];
int siz=0,i,j,pos=1,ps=0;
int loc_chk[20]={0},loc_chk_siz=1,y=1;
ret:printf("Enter the message size :");
scanf("%d",&siz);
if(siz<=3){
    printf("minimun size of message bit ranges from 3 ~ msg[20]\n");
    goto ret;
}
h_msg[pos]='x';
loc_chk[0]=pos;
 ckpos:if(siz>pos){
 pos=pos+pos;
 h_msg[pos]='x';
 loc_chk[y]=pos;
 loc_chk_siz+=1;

 y++;
 goto ckpos;
 }
 printf("--------------------------------------\n");

 printf("Enter message bits :\n");

 for(i=1;i<=siz;i++){

    scanf("\n%s",&msg[i]);
 }

 for(i=1,j=1;;i++){

    if(j<=siz){
        if(h_msg[i]!='x'){
            h_msg[i]=msg[j];
            j++;
        }
    }
    else{
        goto nxt;
    }
 }
nxt:printf("..................hamming code check generation.......................\n");
for(i=1;i<=loc_chk_siz+siz;i++){
    printf("%c",h_msg[i]);
}
int c,xy,count,ones_count=0;





for(c=0;c<loc_chk_siz;c++){
    printf("\n.........................................\n");
ones_count=0;
        count=loc_chk[c];
xy=count;
    for(y=xy;y<=loc_chk_siz+siz;y++)
    {

 printf("%c",h_msg[y]);
 if(h_msg[y]=='1'){
    ones_count++;

 }
 if(y==count+xy-1){
          count=count+xy+xy;
for(i=1;i<=xy;i++){

    y++;

 }
 }
}
if(ones_count%2==0)
{
  printf("\nsince no. of 1's is even pos[%d] will assigned as : 0",loc_chk[c]);
  h_msg[loc_chk[c]]='0';
}
else{
     printf("\nsince no. of 1's is odd pos[%d] will assigned as : 1",loc_chk[c]);
  h_msg[loc_chk[c]]='1';
}
}
printf("\n..................after hamming code check.......................\n\t\t");
for(i=1;i<=loc_chk_siz+siz;i++){
    printf("%c",h_msg[i]);
}
int intr_err=0, pos_err;
printf("\nDo you want to introduce an error (1-0):");
scanf("%d",&intr_err);

if(intr_err==1){
  printf("\nEnter the position of an error :");
  scanf("%d",&pos_err);
  if(h_msg[pos_err]=='1'){
      h_msg[pos_err]='0';
  }
  else{
     h_msg[pos_err]='1';
  }

}


printf("\n..................error detection check.......................\n");
int err=0;
for(c=0;c<loc_chk_siz;c++){
    printf("\n.........................................\n");
ones_count=0;
        count=loc_chk[c];
xy=count;
    for(y=xy;y<=loc_chk_siz+siz;y++)
    {

 printf("%c",h_msg[y]);

 if(y!=xy){
        if(h_msg[y]=='1'){
    ones_count++;

 }
 }

 if(y==count+xy-1){
          count=count+xy+xy;
for(i=1;i<=xy;i++){

    y++;

 }
 }
}
if(ones_count%2==0)
{
if(h_msg[loc_chk[c]]=='0'){
    printf("\nno error detected at pos[%d] ",loc_chk[c]);
}else{
printf("\nerror detected at pos[%d] ",loc_chk[c]);
err=err+loc_chk[c];

}

}
else{
        if(h_msg[loc_chk[c]]=='1'){
                  printf("\nno error detected at pos[%d] ",loc_chk[c]);

} else{
printf("\nerror detected at pos[%d] ",loc_chk[c]);
err=err+loc_chk[c];

}

}
}
printf("\n..................receivers message.......................\n\t\t\t[");
for(i=1;i<=loc_chk_siz+siz;i++){
    printf("%c",h_msg[i]);
}
printf("]");


printf("\n..................receivers message error check.......................\n\t\t\t");
for(i=1;i<=loc_chk_siz+siz;i++){


        if(err==i){
            printf("[");
             printf("%c",h_msg[i]);
               printf("]");
        }
else{
     printf("%c",h_msg[i]);
}

}
if(err!=0){
printf("\n ERROR WAS DETECTED IN THE POSITION %d",err);
}
else{
    printf("\nNO ERROR IN THE MESSAGE \n\n");
}
printf("\n-----------------------------end----------------------------------");
}
