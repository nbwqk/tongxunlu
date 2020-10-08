#include <iostream>
using namespace std;
#define MAX 1000
struct Person  // ��ϵ�˽ṹ��
{
    string m_Name;
    int m_Sex; // 1 ��  2 Ů
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct AddressBooks
{
    Person personArray[MAX]; // ͨѶ¼�б�����ϵ������
    int m_Size;              // ͨѶ¼�м�¼��ǰ��ϵ�˸���
};
void ShowMenu()
{
    cout<<"************************"<<endl;
    cout<<"*****  1.�����ϵ��  *****"<<endl;
    cout<<"*****  2.��ʾ��ϵ��  *****"<<endl;
    cout<<"*****  3.ɾ����ϵ��  *****"<<endl;
    cout<<"*****  4.������ϵ��  *****"<<endl;
    cout<<"*****  5.�޸���ϵ��  *****"<<endl;
    cout<<"*****  6.�����ϵ��  *****"<<endl;
    cout<<"*****  0.�˳�ͨѶ¼  *****"<<endl;
    cout<<"************************"<<endl;
}
void AddPerson(AddressBooks *abs)
{
    if(abs->m_Size==MAX)
    {
        cout<<"ͨѶ¼�������޷���ӡ�"<<endl;
        return;
    } else{
        string name;
        cout<<"��������ϵ��������"<<endl;
        cin>>name;
        abs->personArray[abs->m_Size].m_Name=name;

        cout<<"��������ϵ���Ա�"<<endl;
        cout<<"����������1��ʾ�У���������2��ʾŮ����"<<endl;
        while (true)
        {
            int sex;
            cin >> sex;
            if(sex==1 || sex==2)
            {
                abs->personArray[abs->m_Size].m_Sex=sex;
                break;
            } else{
                cout<<"�������������������롣"<<endl;
            }
        }

        cout<<"��������ϵ�����䣺"<<endl;
        while (true)
        {
            int age;
            cin >> age;
            if(age<0 || age>100)
            {
                cout<<"�������������������롣"<<endl;
            } else{
                abs->personArray[abs->m_Size].m_Age=age;
                break;
            }
        }

        cout<<"��������ϵ�˵绰��"<<endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone=phone;

        cout<<"��������ϵ�˵�ַ��"<<endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr=address;

        abs->m_Size++;
        cout<<"����ɹ���"<<endl;

        system("pause");  // ��ͣ�������������
        system("cls");  // ��������

    }
}

void ShowPerson(AddressBooks *abs)
{
    if(abs->m_Size==0)
    {
        cout<<"ͨѶ¼��û����ϵ�ˡ�"<<endl;
    } else{
        cout<<"����"<<'\t'<<"�Ա�"<<"\t"<<"����"<<"\t"<<"�绰"<<"\t"<<"סַ"<<endl;
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
                cout<<"��ӭ�´�������"<<endl;
                system("pause");
                return 0;
                break;
        }
    }


}
