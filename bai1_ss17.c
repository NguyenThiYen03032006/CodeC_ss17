#include<stdio.h>
void addArr(int *arr, int *size);
void showArr(int *arr, int *size);
int sumArr(int *arr, int *size);
int maxNumber(int *arr, int *size);
int main(void){
    int choose =0;
    int arr[100];
    int size=0;
    int flag=0;
    int sum;
    printf("MENU \n 1. Nhap vao so phan tu va tung phan tu \n 2. Hien thi cac phan tu trong mang \n 3. Tinh do dai mang \n 4. Tinh tong cac phan tu trong mang \n 5. Hien thi phan tu lon nhat \n 6. Thoat \n");
    do {
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                flag=1;
                addArr(arr, &size);
                break;
            case 2:
                if(flag==1){
                    showArr(arr, &size);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 3:
                if(flag==1){
                    printf("Do dai cua mang la: %d \n", size);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 4:
                if(flag==1){
                    sum= sumArr(arr, &size);
                    printf("Tong cac phan tu trong mang la: %d \n", sum);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 5:
                if(flag==1){
                    printf("Phan tu lon nhat trong mang la: %d \n", maxNumber(arr, &size));
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 6:
                printf("Ban da chon thoat \n");
                break;
            default:
                printf("Lua chon cua ban khong co trong MENU \n");
        }
    }while(choose!=6);
    return 0;
}
void addArr( int *arr, int *size){
    printf("Moi ban nhap so phan tu trong mang: ");
    scanf("%d", &(*size));
    for(int i=0; i<*size; i++){
        printf("arr[%d]=  ", i );
        scanf("%d", &arr[i]);
    }
}
void showArr(int *arr, int *size){
    for(int i=0; i<(*size); i++){
        printf("arr[%d]= %d \n", i, arr[i]);
    }
}
int sumArr(int *arr, int *size){
    int sum =0;
    for(int i=0; i<(*size); i++){
        sum+= *(arr+i);
    }
    return sum;
}
int maxNumber(int *arr, int *size){
    int max = 0;
    for(int i=0; i<(*size); i++){
        if(max < *(arr+i)){
            max = *(arr +i);
        }
    }
    return max;
}
