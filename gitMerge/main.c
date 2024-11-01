#include <stdio.h>

void App_Exec(void);
void Drv_Test_function1(void);
void Drv_Test_function2(void);

void App_Exec(void)
{
    Drv_Test_function1();
    printf("App Exec - main branch\n");
    Drv_Test_function2();
}

void Drv_Test_function1(void)
{
    printf("Drv Function 1 - feature-1 branch\n");
}

void Drv_Test_function2(void)
{
    printf("Drv Function 2 - feature-1 branch\n");
}

void main(void)
{
    App_Exec();
}