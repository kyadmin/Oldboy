#include  <stdio.h>



int fun(int *array, int start,int end, int num ){
    
    int mid = (start + end ) /2 ;
    printf("start:%d, end:%d, mid:%d\n", start,end,mid);
    
    if (array[end] < num ){
        
        printf("no num in array is bigger than the num %d\n", num );
    }else if (array[mid] > num ){
        //left
        //        fun(array, start, mid -1,num);
        //                
        //                    }else if (array[mid] == num){
        //                            
        //                                    printf("find num %d in array 's position is %d" , num, mid);
        //                                            
        //                                                } else if (start >= end ){
        //                                                        
        //                                                                printf("cannot find this num %d:",num);
        //                                                                    }
        //                                                                        
        //                                                                            else{
        //                                                                                    
        //                                                                                            //right
        //                                                                                                    fun(array, mid+1, end,num);
        //                                                                                                            
        //                                                                                                                }
        //                                                                                                                    printf("i=%d\n",mid );
        //                                                                                                                    }
        //
        //
        //                                                                                                                    int main(){
        //                                                                                                                        int find_num ;
        //                                                                                                                            int arr[33] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97};
        //                                                                                                                                scanf("%d",&find_num);
        //                                                                                                                                    fun(arr,0,32, find_num);
        //                                                                                                                                        
        //                                                                                                                                        }
