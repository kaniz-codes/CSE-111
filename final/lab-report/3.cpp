#include <iostream>
#include <string>
using namespace std;

class Library {
protected:
    string lib_name, location;

public:
    void set_library(string n, string l) {
        lib_name = n;
        location = l;
    }
};

class Section : public Library {
protected:
    string section_name;
    int section_code;

public:
    void set_section(string sec_name, int sec_code) {
        section_name = sec_name;
        section_code = sec_code;
    }
};

class Book : public Section {
private:
    string book_name, author, isbn;

public:
    void set_book_details(string b_name, string b_author, string b_isbn) {
        book_name = b_name;
        author = b_author;
        isbn = b_isbn;
    }

    void display_info() {
        cout << "Library Name: " << lib_name << endl;
        cout << "Location: " << location << endl;
        cout << "Section Name: " << section_name << endl;
        cout << "Section Code: " << section_code << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

int main() {
    Book obj;
    obj.set_library("Kaniz er Library", "Mirpur");
    obj.set_section("Fictional", 111);
    obj.set_book_details("Himu", "Humayun Ahmed", "984868464");

    obj.display_info();
    cout << endl << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;

    return 0;
}
