int x[100][100][100];

int main(){

	int i,j,k;
	for(i=0;i<100;i++)
		for(j=0;i<100;j++)
			for(k=0;k<100;k++){
				x[i][j][k]=i+j+k;
				printf("%d\n",(*(*(*x+i*10000)+j*100)+k*1));
			}
}
