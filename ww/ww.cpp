#include<iostream>
using namespace std;
struct xuanke{
	string kename;
	int boor;
};
struct student{
	int number;
	char name[20];
	xuanke shuxue;
	xuanke yuwen;
	int chengji;
};
student p[100];
void look(){
	int a;
	for (int j = 100; j >0; j--){
		if (p[j].number == 0){
			a = j;
			break;
		}
	}
	for (int i = 1; i < a + 1; i++)
	{
		if (p[i].number == 0){ continue; }
		cout << p[i].name << "  " << p[i].number << endl;
	}
}
void choose(){
	cout << "����ѧ��" << endl;
	int a;
	cin >> a;
	cout << "1.��ѧ" << endl;
	cout << "2.����" << endl;
	int b;
	cin >> b;
	switch (b)
	{
	case 1:
		for (int i = 0; i < 100; i++)
		{
			if (p[i].number == a){
				p[i].shuxue.boor = 1;
			}

		}
		break;
	case 2:
		for (int i = 1; i < 100; i++)
		{
			if (p[i].number == a){
				p[i].yuwen.boor = 1;
			}

		}
		break;
	}

}
void add(){
	int a;
	for (int j = 1; j < 100; j++){
		if (p[j].number == 0){
			a = j;
			break;
		}
	}
	cout << "��������" << endl;
	cin >> p[a].name;
	p[a].number = p[a - 1].number + 1;
}
void tui(){
	cout << "����ѧ��" << endl;
	int a;
	cin >> a;
	cout << "1.��ѧ" << endl;
	cout << "2.����" << endl;
	int b;
	cin >> b;
	switch (b)
	{
	case 1:
		for (int i = 1; i < 100; i++)
		{
			if (p[i].number == a){
				p[i].shuxue.boor = 0;
			}

		}
		break;
	case 2:
		for (int i = 1; i < 100; i++)
		{
			if (p[i].number == a){
				p[i].yuwen.boor = 0;
			}

		}
		break;
	}

}
void de(){
	cout << "����Ҫɾ����ѧ��" << endl;
	int a;
	cin >> a;
	for (int i = 1; i < 100; i++)
	{
		if (p[i].number == a){
			p[i].number = 0;
		}

	}
}
void addp(){
	int a;
	for (int j = 1; j < 100; j++){
		if (p[j].number != 0){
			a = j;
			break;
		}
	}
bt:	cout << "������Ҫ��ӵ�ѧ��" << endl;
	int b;
	cin >> b;
	cout << "������ɼ�" << endl;
	int s;
	cin >> s;
	p[b].chengji = s;
	cout << "�Ƿ����¼��Y/N" << endl;
	char ss;
	cin >> ss;
	if (ss == 'Y'){
		goto bt;
	}
	else{}

}
int main(){
	for (int i = 0; i<100; i++){
		p[i].number = 0;
	}
	p[0].number = 1;
	while (1){
		int a;
		cout << "1.�鿴����" << endl;
		cout << "2.ѡ��" << endl;
		cout << "3.���ѧ��" << endl;
		cout << "4.��ѡ" << endl;
		cout << "5.ɾ��ѧ��" << endl;
		cout << "6.¼��ɼ�" << endl;
		cout << "0.�˳�����" << endl;
	c:cin >> a;
		switch (a){
		case 1:
			look();
			break;
		case 2:
			choose();
			break;
		case 3:
			add();
			break;
		case 4:
			tui();
			break;
		case 5:
			de();
			break;
		case 6:
			addp();
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "�������" << endl;
			goto c;
		}
	}
}