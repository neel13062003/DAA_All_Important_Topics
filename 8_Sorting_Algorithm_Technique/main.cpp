1) Bubble Sort

void bubbleSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;     //swap(arr[j],arr[j+1]);
            }
        }
    }
}

2) Quick sort

int partitionArray(vector<int> &nums, int low, int high) {
	if (low >= high) return -1;
	int pivot = low, l = pivot + 1, r = high;
	while (l <= r)
		if (nums[l] < nums[pivot]) l++;
		else if (nums[r] >= nums[pivot]) r--;
		else swap(nums[l], nums[r]);
	swap(nums[pivot], nums[r]);
	return r;
}

void quickSort(vector<int> &nums, int low, int high) {
	if (low >= high) return;
	int pivot = partitionArray(nums, low, high);
	quickSort(nums, low, pivot);
	quickSort(nums, pivot + 1, high);
}



3) Selection sort

void selectionSort(vector<int> &nums) {
	int minInd, startInd, currInd, size = nums.size();
	if (size <= 1) return;
	for (startInd = 0; startInd < size - 1; startInd++) {
		for (currInd = startInd + 1, minInd = startInd; currInd < size; currInd++)
			if (nums[minInd] > nums[currInd])
				minInd = currInd;
		if (minInd != startInd)
			swap(nums[startInd], nums[minInd]);
	}
}


4) Insertion sort

void insertionSort(vector<int> &nums) {
	int sortedInd, unsortedInd, key, size = nums.size();
	if (size <= 1) return;
	for (unsortedInd = 1; unsortedInd < size; unsortedInd++) {
		key = nums[unsortedInd], sortedInd = unsortedInd;
		while (--sortedInd >= 0 and key < nums[sortedInd])
			nums[sortedInd + 1] = nums[sortedInd];
		nums[sortedInd + 1] = key;
	}
}


5) Merge sort

void merge(int arr[], int l, int mid, int r){
        int n1= mid-l+1;
        int n2= r-mid;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++) a[i]=arr[l+i];
        for(int j=0;j<n2;j++) b[j]=arr[mid+1+j];
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]=a[i];
                i++,k++;
            }else{
                arr[k]=b[j];
                j++,k++;
            }
        }
        while(i<n1) arr[k]=a[i]; i++;k++;
        while(j<n2) arr[k]=b[j]; j++,k++;
}

void mergeSort(int arr[], int left, int right){
        if(left<right){
            int mid=(left+right)/2;
            mergeSort(arr,left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
}

6) Quick sort

int partition (int nums[], int low, int high){
        if(low>=high) return -1;
        int pivot=low,l=pivot+1,r=high;
        while(l<=r){
            if(nums[l]<nums[pivot]) l++;
            else if(nums[r] >=nums[pivot]) r--;
            else swap(nums[l],nums[r]);
        }
        swap(nums[pivot],nums[r]);
        return r;
    }

    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int nums[], int low, int high){
        if(low>=high) return;
        int pivot=partition(nums,low,high);
        quickSort(nums,low,pivot);
        quickSort(nums,pivot+1,high);
    }




