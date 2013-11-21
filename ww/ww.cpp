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
	cout << "输入学号" << endl;
	int a;
	cin >> a;
	cout << "1.数学" << endl;
	cout << "2.语文" << endl;
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
	cout << "输入姓名" << endl;
	cin >> p[a].name;
	p[a].number = p[a - 1].number + 1;
}
void tui(){
	cout << "输入学号" << endl;
	int a;
	cin >> a;
	cout << "1.数学" << endl;
	cout << "2.语文" << endl;
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
	cout << "输入要删除的学号" << endl;
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
bt:	cout << "请输入要添加的学号" << endl;
	int b;
	cin >> b;
	cout << "请输入成绩" << endl;
	int s;
	cin >> s;
	p[b].chengji = s;
	cout << "是否继续录入Y/N" << endl;
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
		cout << "1.查看名单" << endl;
		cout << "2.选课" << endl;
		cout << "3.添加学生" << endl;
		cout << "4.退选" << endl;
		cout << "5.删除学生" << endl;
		cout << "6.录入成绩" << endl;
		cout << "0.退出程序" << endl;
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
			cout << "输入错误！" << endl;
			goto c;
		}
	}
}