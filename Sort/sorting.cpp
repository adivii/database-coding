void sort(){
	int temp = 0;

	for (int j=0;j < n;j++){
		for (int k=j+1;k < n;k++){
			if (arr[j]>arr[k]){
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
}