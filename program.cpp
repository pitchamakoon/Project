#include <iostream>
#include <string>
using namespace std;
void book_input(long book_id[10], string book_name[10], string book_author[10], string book_publish[10],int student_id_count = 2);

int main()
{
	int student_id_count = 2;
	long student_id[10];
	student_id[0] = 100001;
	student_id[1] = 100002;
	
	string student_name[10];
	student_name[0] = "Panachai";
	student_name[1] = "Akaraphon";

	string student_faculty[10];
	student_faculty[0] = "IT";
	student_faculty[1] = "FITM";

	string student_branch[10];
	student_branch[0] = "IT";
	student_branch[1] = "INE";
   
	long book_id[10];
	book_id[0] = 123001;
	book_id[1] = 123002;

	string book_name[10];
	book_name[0] = "testing Programming";
	book_name[1] = "Intro to IT";

	string book_author[10];
	book_author[0] = "Teacher";
	book_author[1] = "Unknow";

	string book_publish[10];
	book_publish[0] = "thai";
	book_publish[1] = "English";

	int book_year[100];
	book_year[0] = 2554;
	book_year[1] = 2560;

	long lend_student_id[100];
	lend_student_id[0] = 100001;
	lend_student_id[1] = 100002;

	long lend_book_id[100];
	lend_book_id[0] = 123002;
	lend_book_id[1] = 123001;

	bool lend_check[100];
	lend_check[0] = false;
	lend_check[1] = true;

	cout << "========Main Program=========" <<endl;
	cout << "1 ) register student_id " << endl;
	cout << "2 ) register book_id" << endl;
	cout << "3 ) lend book " << endl;
	cout << "4 ) send book " << endl;
	cout << "5 ) report " << endl;
	book_input(book_id, book_name,book_author,book_publish,student_id_count);
}

void book_input(long book_id[10], string book_name[10], string book_author[10], string book_publish[10],int student_id_count )
{  
	long id;
	string name2, author, publish;
	cout << "Enter book id : ";
	cin >> id;
	cout << "Enter book name : ";
	cin >> name2;
	cout << "Enter book author : ";
	cin >> author;
	cout << "Enter book publish : ";
	cin >> publish;
	student_id_count++;
	book_name[student_id_count-1]=name2;
	book_author[student_id_count-1]=author;
	book_publish[student_id_count-1]=publish;
}
