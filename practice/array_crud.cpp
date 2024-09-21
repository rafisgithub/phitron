#include<stdio.h>

const int n = 5;
int arr[n];

void create(){
    // scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert_into_arr() {
    int pos,val;

    scanf("%d %d",&pos,&val);

    for(int i=n-1;i>=pos;i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}

void update_arr() {
    int pos,val;
    scanf("%d %d",&pos,&val);

    arr[pos] = val;

}

void delete_from_arr() {
    int pos;
    scanf("%d",&pos);

    for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    
}
void print_arr(){
    
    for(int i=0;i<n;i++) {
    printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    while(1) {
        printf("1.Create array:\n");
        printf("2.Insert into array\n");
        printf("3.update value from array\n");
        printf("4.Delete from array\n");
        printf("5.print array\n");
        int op;
        scanf("%d",&op);

        switch (op)
        {
        case 1 :
            create();
            break;
        case 2 :
            insert_into_arr();
        case 3 :
            update_arr();
        case 4 :
            delete_from_arr();
        case 5 :
            print_arr();
        default:
            break;
        }
    }
    return 0;
}