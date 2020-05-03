void tableFor10Numbers() {
    for (int i = 1; i < 11; i++) {
        for (int i2 = 1; i2 < 11; i2++) {
            printf("%d \t", i * i2); 
        }
        printf("\n"); 
    }
}

void simpleArray() {
    int numbers[4];
    
    //init. array
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    
    printf("\nnumbers[1]=%d \n", numbers[1]);
}

void simpleArray2() {
    int numbers[3] = {1, 2, 3};
    
    printf("\nnumbers[1]=%d \n", numbers[1]);
}

void simpleArray3() {
    int numbers[] = {1, 2, 3};
    
    printf("\nnumbers[1]=%d \n", numbers[1]);
}

void simpleArrayOutInConsoleFOR() {
    int numbers[3] = {1, 2, 44};
    for (int i = 0; i < 3; i++) {
        printf("current element i=%d, value=%d \n", i, numbers[i]);
    }
}

void twoDemenArrayOutInConsole() {
    int numbers[2][2] = { {15, 277}, {22, 33} };
    
    printf("\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j< 2; j++) {
            printf("current element[%d][%d]=%d \n", i, j, numbers[i][j]);
        }
    }
}

int sumExample(int a, int b) {
    return a + b;
}

void sum2Numbers() {
    int a;
    int b;
    
    printf("Input a:");
    scanf("%d", &a);
    printf("Input b:");
    scanf("%d", &b);
    
    printf("\n");
    printf("Sum = %d \n", sumExample(a, b));
}

void pointerExample() {
    int a = 10;
    int *p = &a;
    
    printf("\n");
    printf("a=%d, p=%p, *p=%d", a, p, *p);
}