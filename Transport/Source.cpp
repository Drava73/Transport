#include <iostream> 
#include <string>
using namespace std;

class Transport  
{
protected: //�����������
    int rst;
    int year;
    int speed;
     


    public:
    Transport() :
        rst(0),
        speed(0),
        year(0) {
    
    }  
    Transport(int c, int s, int y) :
        rst(c),
        speed(s),
        year(y) {
    
    }
    virtual void getdata() = 0;   
    virtual void putdata() = 0;  
};

class Plane : public Transport  
{
private:  
        int passenger;
public:
    Plane() :  passenger(0) {} 
    Plane(int h, int p) :  passenger(p) {}
    void getdata()   
    {
        cout << "������� ���������� � �������: " << endl;
        cout << "������� ����: "; cin >> rst;
        cout << "������� ������ ������� �� 100��: "; cin >> speed;
        cout << "��� �������: "; cin >> year;
        cout << "������� ���������������: "; cin >> passenger;
    }
    void putdata()  
    {
        cout << "���������� � �������: " << endl;
        cout << "���� : " << rst << endl;
        cout << "������ ������� �� 100��: " << speed << endl;
        cout << "��� ������������: " << year << endl;
        cout << "���������������: " << passenger << endl;
    }
};

class Ship : public Transport  
{
private:
    int ship_pas;
    string str;
public:
    Ship() : ship_pas(0) {}
    Ship(int s) : ship_pas(s) {}
    void getdata()  
    {
        cout << "������� ���������� � �������: " << endl;
        cout << "������� ����: "; cin >> rst;
        cout << "������� ������ ������� �� 100��: "; cin >> speed;
        cout << "��� �������: "; cin >> year;
        cout << "������� ���������������: "; cin >> ship_pas;
        
    }
    void putdata()  
    {
        cout << "���������� � �������: " << endl;
        cout << "����:  " << rst << endl;
        cout << "������ ������� �� 100��: " << speed << endl;
        cout << "��� ������������: " << year << endl;
        cout << "��������������� �����: " << ship_pas << endl;
        
    }
};

class J��� : public Transport
{
private:
     
    string mark;
public:
    
    void getdata()
    {
        cout << "������� ���������� � �����: " << endl;
        cout << "������� ����� ����: "; cin >> mark;
        cout << "������� ���� "; cin >> rst;
        cout << "������� ������ ������� �� 100��: "; cin >> speed;
        cout << "��� �������: "; cin >> year;
        
        
    }
    void putdata()
    {
        cout << "���������� � �����:" << endl;
        cout << "�����: " << mark << endl;
        cout << "����:  " << rst << endl;
        cout << "������ ������� �� 100��: " << speed << endl;
        cout << "��� ������������: " << year << endl;
         
    }
};

class Bike : public Transport
{
private:
    int vss;
    string mark;
public:
    Bike() : vss(0) {}
    Bike(int c) : vss(c) {}
    void getdata()
    {
        cout << "������� ���������� � ����������: " << endl;
        cout << "������� �������� ����������: "; cin >> mark;
        cout << "������� ����: "; cin >> rst;
        cout << "��� �������: "; cin >> year;
        cout << "������� ��� ����������: "; cin >> vss;
         
    }
    void putdata()
    {
        cout << "���������� � ����������:" << endl;
        cout << "�������� ����������:" << mark << endl;
        cout << "����:  " << rst << endl;
        cout << "��� ������������: " << year << endl;
        cout << "���: " << vss << endl;
       
    }
};

class Truck : public Transport
{
private:
   
    string mark;
public:
        void getdata()
    {
        cout << "������� ���������� � ���������: " << endl;
        cout << "������� ����� ���� "; cin >> mark;
        cout << "������� ����: "; cin >> rst;
        cout << "������� ��������: "; cin >> speed;
        cout << "��� �������: "; cin >> year;
               
    }
    void putdata()
    {
        cout << "���������� � ���������:" << endl;
        cout << "�����: " << mark << endl;
        cout << "���� : " << rst << endl;
        cout << "��������: " << speed << endl;
        cout << "��� ������������: " << year << endl;
         
    }
};


int main()
{
    Plane p1;
    J��� j1;
    Ship s1;
    Truck t1;
    Bike b1;
    setlocale(0, "ru");
    cout << "1.������" << endl;
    cout << "2.���������" << endl;
    cout << "3.����" << endl;
    cout << "4.�y���" << endl;
    cout << "5.��������" << endl;
    cout<< "\t������� �y���:";
    int nkt;
    cin >> nkt;
    switch (nkt)
    {
    case 1://������
        
        p1.getdata();
        p1.putdata();
        break;
    case 2://���������
        b1.getdata();
        b1.putdata();
        break;
    case 3://����
        
        j1.getdata();
        j1.putdata();
        break;
    case 4://�y���
        
        s1.getdata();
        s1.putdata();
        break;
    case 5://��������
        t1.getdata();
        t1.putdata();
        break;
    default:
        cout << "������" << endl;
        break;
    }

           
    
}