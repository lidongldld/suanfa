#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
	int temp = *nums;
	for(int i = 1;i<numsSize;i++){
		if(temp!=nums[i]){
			temp = nums[i];
		}else{
			for(int j= i;j+1<numsSize;j++){
				nums[j] = nums[j+1];
			}
			numsSize--;
		}
	}
	return numsSize;
}

int main(){
	int test[] = {0,0,1,1,1,2,2,3,3,4};
	int size = sizeof(test);
	int result = removeDuplicates(test,size);
	printf("result is :%d\n",result);
	for(int i=0;i<result;i++){
		printf("%d,",test[i]);
	}
	return 1;
}
