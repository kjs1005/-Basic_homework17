#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int value[5]={0};
  int i=0, minimum;
  printf("-----尋找最小值-----\n");
  printf("請連續輸入五個數值-\n");
  for(i=0;i<5;i++){
    printf("請輸入第 %d 個資料：", i+1 );
    scanf("%d", &value[i]);
  }
  minimum=value[0];
  for(i=0;i<5;i++){
    if (minimum>value[i]){
      minimum=value[i];
    }
  }
  printf("最小值：%d\n",minimum);
	return 0;
}
