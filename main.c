#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int value[5]={0};
  int i=0, minimum;
  printf("-----�M��̤p��-----\n");
  printf("�гs���J���Ӽƭ�-\n");
  for(i=0;i<5;i++){
    printf("�п�J�� %d �Ӹ�ơG", i+1 );
    scanf("%d", &value[i]);
  }
  minimum=value[0];
  for(i=0;i<5;i++){
    if (minimum>value[i]){
      minimum=value[i];
    }
  }
  printf("�̤p�ȡG%d\n",minimum);
	return 0;
}
