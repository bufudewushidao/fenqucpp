#include <iostream>
using namespace std;
int main()

{
    int zhumian1,mb,zhumian,ntfs ;
    int fat32 ;
    double gb ; /*   ���д�����double�����˴�С����ı��� */
    cout << "�������ɹ��ں�it�籨������������xwh.at" << endl ;
    cout << "��������Ҫ��GBֵ������2�λس���" << endl ;

    cin >> gb ;
    zhumian = (gb * 1024 ) / 7.84423828125 ;
    zhumian1 = zhumian + 1 ;
    mb =  zhumian1 * 7.84423828125 ;
    ntfs = mb + 1 ;

    fat32 = ( gb -1 ) * 4 + 1024 * gb ;

    cout << "ntfs�Ľ��Ϊ" << endl ;
    cout << ntfs << endl ;
    cout << "fat32�Ľ��Ϊ" << endl ;
    cout << fat32 << endl ;

    system("pause");

    return 0 ;
}

