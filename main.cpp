#include <iostream>
using namespace std;
#define MAX 1000
struct Person  // 联系人结构体
{
    string m_Name;
    int m_Sex; // 1 男  2 女
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct AddressBooks
{
    Person personArray[MAX]; // 通讯录中保存联系人数组
    int m_Size;              // 通讯录中记录当前联系人个数
};
void ShowMenu()
{
    cout<<"************************"<<endl;
    cout<<"*****  1.添加联系人  *****"<<endl;
    cout<<"*****  2.显示联系人  *****"<<endl;
    cout<<"*****  3.删除联系人  *****"<<endl;
    cout<<"*****  4.查找联系人  *****"<<endl;
    cout<<"*****  5.修改联系人  *****"<<endl;
    cout<<"*****  6.清空联系人  *****"<<endl;
    cout<<"*****  0.退出通讯录  *****"<<endl;
    cout<<"************************"<<endl;
}
void AddPerson(AddressBooks *abs)
{
    if(abs->m_Size==MAX)
    {
        cout<<"通讯录已满，无法添加。"<<endl;
        return;
    } else{
        string name;
        cout<<"请输入联系人姓名："<<endl;
        cin>>name;
        abs->personArray[abs->m_Size].m_Name=name;

        cout<<"请输入联系人性别："<<endl;
        cout<<"（输入数字1表示男，输入数字2表示女。）"<<endl;
        while (true)
        {
            int sex;
            cin >> sex;
            if(sex==1 || sex==2)
            {
                abs->personArray[abs->m_Size].m_Sex=sex;
                break;
            } else{
                cout<<"你输入有误，请重新输入。"<<endl;
            }
        }

        cout<<"请输入联系人年龄："<<endl;
        while (true)
        {
            int age;
            cin >> age;
            if(age<0 || age>100)
            {
                cout<<"你输入有误，请重新输入。"<<endl;
            } else{
                abs->personArray[abs->m_Size].m_Age=age;
                break;
            }
        }

        cout<<"请输入联系人电话："<<endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone=phone;

        cout<<"请输入联系人地址："<<endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr=address;

        abs->m_Size++;
        cout<<"输入成功。"<<endl;

        system("pause");  // 暂停，按任意键继续
        system("cls");  // 清屏操作

    }
}

void ShowPerson(AddressBooks *abs)
{
    if(abs->m_Size==0)
    {
        cout<<"通讯录里没有联系人。"<<endl;
    } else{
        cout<<"姓名"<<'\t'<<"性别"<<"\t"<<"年龄"<<"\t"<<"电话"<<"\t"<<"住址"<<endl;
        for(int i=0;i<abs->m_Size;i++)
        {
            cout<<abs->personArray[i].m_Name<<"\t"<<abs->personArray[i].m_Sex<<"\t"<<abs->personArray[i].m_Age<<"\t"<<abs->personArray[i].m_Phone<<"\t"<<abs->personArray[i].m_Addr<<endl;
        }
        system("pause");
        system("cls");
    }
}
int main() {
    while (true)
    {
        ShowMenu();
        int select;
        AddressBooks abs;
        abs.m_Size=0;
        cin >> select;
        switch (select) {
            case 1:
                AddPerson(&abs);
                break;
            case 2:
                ShowPerson(&abs);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout<<"欢迎下次再来！"<<endl;
                system("pause");
                return 0;
                break;
        }
    }


}
