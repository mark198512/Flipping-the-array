// Переворачиваем массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
                                                  /*Flipping the array*/
int main(void)
{
    int i,//temp var
        arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//the array
    int* start = &arr[0],//pointer to the start of the array
        * end = &arr[9];//pointer to the last elem in array
    //print out current arr values
    for (i = 0; i < 10; ++i)
        printf("arr[%d] = %d\n", i, arr[i]);
    do
    {//simple loop
        i = *start;//assign whatever start points to to i
        *start = *end;//assign value of *end to *start
        *end = i;//assign initial value of *start (stored in i) to *end
    } while (++start < --end);//make sure start is < end, increment start and decrement end
    //check output:
    for (i = 0; i < 10; ++i)
        printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
