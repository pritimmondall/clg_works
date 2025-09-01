// maximum sub array sum with one deletion
// 
// you are given an integer array. Your task is to return the maximum sum of a non empty sub array where you can optonally delete at most one element from the sub array to maximize the sum.













/*
    
   int max_sum = arr[0];
    int curr_sum = arr[0];
    int max_end_here_no_del = arr[0];       
    int max_end_here_one_del = arr[0];

    for(int i = 1; i < n; i++) {
        max_end_here_one_del = (max_end_here_no_del > max_end_here_one_del + arr[i]) ? max_end_here_no_del : max_end_here_one_del + arr[i];
        max_end_here_no_del = (arr[i] > max_end_here_no_del + arr[i]) ? arr[i] : max_end_here_no_del + arr[i];
        if(max_end_here_one_del > max_sum) max_sum = max_end_here_one_del;
        if(max_end_here_no_del > max_sum) max_sum = max_end_here_no_del;
*/