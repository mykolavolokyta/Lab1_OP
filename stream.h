#ifndef STREAM_H
#define STREAM_H

//����� FileStream

std::string get_name(std::string);                                     //�������� ���� �����
void create_file(std::string);								           //��������� ����� �� ����� ����� �� �����
std::string get_text(std::string, int&);							   //���������� ���������� � ����� � ���� �����
std::string* get_data(std::string, int);						       //��������� ���������� � ����� � ����� � �������(��� ���, ������ � ����� �� ������ ������)
void rewrite_word_strings(std::string*, std::string*, int);            //�������� ��������� � ����� �� ������
void put_shortest_word(std::string*, int);							   //������������ ����� �������� �� �����
std::string find_smallest_word(std::string*, int);			           //�������� ����� � ����� ���
std::string* divide_into_string(std::string, int);					   //����������� ������������ �����
void write_data(std::string, std::string*, int);				       //����� ����� � ����
void print_file(std::string);				                           //��������� ���������� � �����

#endif