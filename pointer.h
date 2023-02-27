#ifndef POINTER_H
#define POINTER_H

//����� FilePointer

char* get_name(const char*);								           //�������� ���� �����
void create_file(const char*);								           //��������� ����� �� ����� ����� �� �����
char* get_text(const char*, int&);							           //���������� ���������� � ����� � ���� �����
void rewrite_word_strings(char**, char**, int);						   //��������� ���������� � ����� � ����� � �������(��� ���, ������ � ����� �� ������ ������)
char** get_data(char*, int);								           //�������� ��������� � ����� �� ������
void put_shortest_word(char**, int);								   //������������ ����� �������� �� �����
char** divide_into_words(char*, int);								   //�������� ����� � ����� ���
char* find_smallest_word(char**, int);								   //����������� ������������ �����
void write_data(const char*, char**, int);						       //����� ����� � ����
void print_file(const char*);										   //��������� ���������� � �����
void free_memory(const char*, const char*, char**, int);               //��������� ���'��

#endif