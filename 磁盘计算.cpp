#include <iostream>
using namespace std;
int main()

{
    int zhumian1,mb,zhumian,ntfs ;
    int fat32 ;
    double gb ; /*   本行代码用double定义了带小数点的变量 */
    cout << "请输入想要的GB值，并按2次回车键" << endl ;

    cin >> gb ;
    zhumian = (gb * 1024 ) / 7.84423828125 ;
    zhumian1 = zhumian + 1 ;
    mb =  zhumian1 * 7.84423828125 ;
    ntfs = mb + 1 ;

    fat32 = ( gb -1 ) * 4 + 1024 * gb ;

    cout << "ntfs的结果为" << endl ;
    cout << ntfs << endl ;
    cout << "fat32的结果为" << endl ;
    cout << fat32 << endl ;

    system("pause");

    return 0 ;
}

