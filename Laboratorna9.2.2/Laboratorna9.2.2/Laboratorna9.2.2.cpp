#include <iostream>
#include <cstdio>  
#include <windows.h>  

#define MODE 1  

#define begin {
#define end }

int main()
begin

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

#if MODE == 1
begin

int array[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4 };
int size = 11;  

printf("���������� ����� � �����:\n");
printf("�����\t\t����������\n");

// ϳ�������� ��������� ������� �����
for (int i = 0; i < size; i++)
    begin
    int count = 0;
for (int j = 0; j < size; j++)
    begin
    if (array[i] == array[j])
        begin
        count++;  
end
end
printf("%d\t\t%d\n", array[i], count);
end
end
#elif MODE == 2
begin

int array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
int size = 7;  
char targetChar = 'c';  // ������ ��� ������
int targetCode = static_cast<int>(targetChar);  // ��������� ���� �������

bool found = false;  // ��� ��������, �� �������� ������
for (int i = 0; i < size; i++)
    begin
    if (static_cast<int>(array[i]) == targetCode)
        begin
        printf("������ '%c' �� ��� %d � ��������� �� ������� %d\n", array[i], targetCode, i);
found = true;
break;
end
end

if (!found)
begin
printf("������ � ����� %d �� ��������� � �����.\n", targetCode);
end
end
#endif

return 0;
end
