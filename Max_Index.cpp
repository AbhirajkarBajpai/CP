int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
         int leftMin[n], rightMax[n];

    // Fill leftMin array
    leftMin[0] = a[0];
    for(int i = 1; i < n; i++){
        leftMin[i] = min(leftMin[i-1], a[i]);
        
    }
        
    rightMax[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], a[i]);}
    
        
        
    int i = 0, j = 0, maxDiff = -1;
    while (i < n && j < n) {
        if (leftMin[i] <= rightMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        } else {
            i++;
        }
    }
     return maxDiff;
    }
