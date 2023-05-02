#include <stdio.h>
#include <stdlib.h>
#define N 256
#define RANGE 3168
int main(void){
	int i = 0, num;
	FILE *fp; // FILE型構造体
	char fname[] = "data.txt";
	char word[N];
	num = rand()%RANGE;
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}
	while(fgets(word, N, fp) != NULL) {
		if(i == num){
			break;
		}
		i++;
	}
	int j, len, max, search = 0, attempt = 0, clear;
	char input[N];
	printf("//////単語当てゲーム//////\n");
	for(len=0; word[len]!='\0'; ++len);
	printf("(ヒント:%d文字)\n",len - 2);
	while(attempt < 5){
		while(1){
			printf("%d回目>>>",attempt + 1);		
			scanf("%s",&input);
			for(max=0; input[max]!='\0'; ++max);
			if(max == len -2){
				break;
			}else{
				printf("⚠%d文字で入力してください⚠\n",len - 2);
			}
		}
		clear = 0;
		for(i=0;i<len;i++){
			if(input[i] == word[i]){
				printf("\x1b[33m%c\x1b[m",input[i]);
				clear++;
			}else{
				for(j=0;j<5;j++){
					if(input[i] == word[j]){
						search = 1;
					}
				}
				if(search == 1){
					printf("\x1b[35m%c\x1b[m",input[i]);
					search = 0;
				}else{
					printf("%c",input[i]);
				}
			}	
		}
		if(clear + 2 == len){
			printf("\n//////CLEAR//////");
			return 0;
		}else{
			printf("\n");
			attempt++;
		}
	}
	printf("//////GAME OVER//////\n答え:%s",word);
	return 0;
}
