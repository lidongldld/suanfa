#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
	int number = 0;
	for(int i = 0;i<numsSize;i++){
		if(nums[number]!=nums[i]){
			number++;
			nums[number] = nums[i];
		}		
	}
	number++;
	return number;
}

int main(){
	int test[10] = {0,0,1,1,1,2,2,3,3,4};
	int size = sizeof(test)/4;
	//printf("size:%d",size);
	int result = removeDuplicates(test,size);
	printf("result is :%d\n",result);
	for(int i=0;i<result;i++){
		printf("%d,",test[i]);
	}
	return 1;
}
