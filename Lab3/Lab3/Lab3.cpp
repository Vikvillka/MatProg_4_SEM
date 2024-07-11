#include <iostream>
#include <iomanip> 
#include "Salesman.h"
#define N 5
int main()
{
    setlocale(LC_ALL, "rus");
    int d[N][N] = { //0   1    2    3     4        
                  { INF, 4, 23, INF, 2},    //  0
                  { 2, INF,  17,  66, 82},    //  1
                  { 4,  6, INF, 86, 52},    //  2 
                  { 19,  56,  8, INF, 6},    //  3
                  { 91,  68,  52,  15, INF} };   //  4  
    int r[N];                     // ��������� 
    int s = salesman(
        N,          // [in]  ���������� ������� 
        (int*)d,          // [in]  ������ [n*n] ���������� 
        r           // [out] ������ [n] ������� 0 x x x x  

    );
    std::cout << std::endl << "-- ������ ������������ -- ";
    std::cout << std::endl << "-- ����������  �������: " << N;
    std::cout << std::endl << "-- ������� ���������� : ";
    for (int i = 0; i < N; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < N; j++)

            if (d[i][j] != INF) std::cout << std::setw(3) << d[i][j] << " ";

            else std::cout << std::setw(3) << "INF" << " ";
    }
    std::cout << std::endl << "-- ����������� �������: ";
    for (int i = 0; i < N; i++) std::cout << r[i] << "-->"; std::cout << 0;
    std::cout << std::endl << "-- ����� ��������     : " << s;
    std::cout << std::endl;
    system("pause");
    return 0;
}


//#include "Auxil.h"
//#include <iostream>
//#include <iomanip> 
//#include <time.h>
//#include "Salesman.h"
//#define SPACE(n) std::setw(n)<<" "
//#define N 12
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int d[N * N + 1], r[N];
//    auxil::start();
//    for (int i = 0; i <= N * N; i++) d[i] = auxil::iget(10, 100);
//    std::cout << std::endl << "-- ������ ������������ -- ";
//    std::cout << std::endl << "-- ���������� ------ ����������������� -- ";
//    std::cout << std::endl << "      �������           ����������  ";
//    clock_t t1, t2;
//    for (int i = 7; i <= N; i++)
//    {
//        t1 = clock();
//        salesman(i, (int*)d, r);
//        t2 = clock();
//        std::cout << std::endl << SPACE(7) << std::setw(2) << i
//            << SPACE(15) << std::setw(5) << (t2 - t1);
//    }
//    std::cout << std::endl;
//    system("pause");
//    return 0;
//}

