#include <stdio.h>
int main(void)
{
  // int age = 12;               //int�� ����
  /* printf("%d\n", age);
  // age = 13;
  printf("%d\n", age);*/

  // �Ǽ��� ������ ���� ����
  // float f = 46.5;             //float, double�� �Ǽ�
  // printf("%.2f\n", f);
  // double d = 4.428;
  // printf("%.2lf\n", d);

  // const int YEAR = 2000;       //const�� ���
  // printf("�¾ �⵵ : %d\n", YEAR);

  // printF
  //����
  // int add = 3 + 7; //10
  // //printf("3 + 7 = %d\n", add);
  // printf("%d x %d = %d\n", 30, 79, 30 * 79);

  // scanf
  // Ű���� �Է��� �޾Ƽ� ����
  // int input;
  // printf("���� �Է��ϼ��� : ");
  // scanf_s("%d", &input);
  // printf("�Է°� : %d\n", input);
  // int one, two, three;
  // printf("3���� ������ �Է��ϼ��� : ");
  // scanf_s("%d %d %d", &one, &two, &three);
  // printf("ù��° �� : %d\n", one);
  // printf("�ι�° �� : %d\n", two);
  // printf("����° �� : %d\n", three);

  // //����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
  // char c = 'A';
  // printf("%c\n", c);

  // char str[256];
  // scanf_s("%s", str, sizeof(str));
  // printf("%s\n", str);

  //������Ʈ
  //�������� �������� ������ �Լ� ( ���� �ۼ� )
  //�̸�? ����? ������? Ű? ���˸�?
  char name[256];
  printf("�̸��� ������? ");
  scanf_s("%s", name, sizeof(name));

  int age;
  printf("����̿���? ");
  scand_s("%d", &age);

  float weigh;
  printf("�����Դ� �� kg? ");
  scanf_ return 0;
}
