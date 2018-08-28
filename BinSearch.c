int BinSerach_1(int target,int num[],int length);
int BinSerach_2(int target,int num[],int length);

int BinSerach_1(int target,int num[],int length)
{
	int i=0,
		left=0,
		right=length,	//此表示right指向查询域外。则往后要求right=mid;判断条件为left<right，不能包括等于。
		mid=0;
						
	while(left<right){
		mid=(left+right)/2;
		if(num[mid]==target){
			return mid;
		}
		if(target>num[mid]){
			left=mid+1;
		}else{
			right=mid;
		}
	}
	return -1;
}

int BinSerach_2(int target,int num[],int length){
	int i=0,
		left=0,
		right=length-1, //需要考虑到数组长度为1的情况
		mid=0;

	while(left<=right){
		mid=(left+right)/2;
		if(num[mid]==target)
			return mid;
		if(target>num[mid]){
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return -1;
}
