int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

    int *returnArr = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    int prod = 1, proder = 0;
    
    for ( int i = 0; i < numsSize; ++i )
        if ( nums[i] )
            prod *= nums[i];
        else
            switch ( proder ) {
                case 1:
                    return returnArr;
                case 0:
                    proder = 1;
                    break;
            }
        
    for ( int i = 0; i < numsSize; ++i ){
        if ( !nums[i] ){
            returnArr[i] = prod;
            break;
        }
        if ( proder )
            returnArr[i] = 0;
        else
            returnArr[i] = prod/nums[i];
    }
    return returnArr;
}
