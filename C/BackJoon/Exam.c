#include <stdio.h>
//����� - 10





//����� - 9

//������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
//ù° �ٿ� N(1 �� N �� 100)�� �־�����.
//ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
//*********
// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******
//*********
//int main(void) {
//	int a;
//	scanf("%d", &a);
//
//	for (int i = a; i > 0; i--)
//	{
//		for (int k = a; k > i; k--)
//		{
//			printf(" ");
//		}
//		for (int j = 0 ; j < 2*i-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (int i = 1; i < a; i++)
//	{
//		for (int k = a-1; k > i; k--)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//����� - 8

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
// ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
//int main(void) {
//
//	int a;
//	int i, j, k;
//	
//	
//	scanf("%d", &a);
//
//	for ( i = a; i>0 ; i-- ) {
//		
//		for ( j = a ; j >= i; j--) {
//			printf("*");
//		}
//		for ( k = 2 ; k < 2*i; k++) {
//			printf(" ");
//		}
//		for ( j = a; j >= i; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for ( i = 1; i < a; i++) {
//
//		for (k = a; k > i; k--) {
//			printf("*");
//		}
//		for ( j = 0; j < 2*i; j++) {
//			printf(" ");
//		}
//		for (k = a; k > i; k--) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//}

//����� - 7

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
// ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
//int main(void) {
//
//	int a;
//
//	scanf("%d", &a);
//
//	for (int i = 1; i < a+1 ; i++){
//
//			for (int j = a; j > i ; j-- ) {
//				printf(" ");
//			}
//			for (int k = 1; k <= 2 * i - 1; k++)
//			{
//				printf("*");
//			}
//	
//			printf("\n");
//	}
//
//	for (int i = a-1 ; i > 0; i--) {
//
//			for (int k = a; i < k; k--) {
//				printf(" ");
//			}
//			for (int j = 0 ; j < 2 * i - 1; j ++) {
//				printf("*");
//			}
//
//			printf("\n");
//	}
//}

//����� - 6

//ù° �ٿ��� �� 2��N - 1��, ��° �ٿ��� �� 2��N - 3��, ..., N��° �ٿ��� �� 1���� ��� ����
//���� ����� �������� ��Ī�̾�� �Ѵ�.
//ù° �ٿ� N(1 �� N �� 100)�� �־�����.
//ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
//int main(void) {
//
//	int a;
//	scanf("%d", &a);
//
//	for (int i = a ; i > 0; i--) {
//
//
//		for (int k = a; i < k; k--) {
//			printf(" ");
//		}
//		for (int j = 0 ; j < 2 * i - 1; j ++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//}

//����� - 5

// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 3��, ..., N��° �ٿ��� �� 2��N-1���� ��� ����
// ���� ����� �������� ��Ī�̾�� �Ѵ�.
// ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
//int main(void) {
//
//	int a;
//
//	scanf("%d", &a);
//
//	for (int i = 1; i < a+1 ; i++){
//
//		for (int j = a; j > i ; j-- ) {
//			printf(" ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//}

//����� - 4

// ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��,...N��° �ٿ��� �� 1���� ��� ����
// ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
//int main(void) {
//
//	int a;
//
//	scanf("%d", &a);
//
//	for (int i = 0 ; i <= a ; i++)
//	{
//		for(int j = 0 ; j < i ; j++){
//			printf(" ");
//		}
//		for(int k = a ; i < k; k--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}

//����� - 3

//<����>
//���� N���� �̷���� ���� A�� ���� X�� �־�����.
//�̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//<�Է�>
//ù° �ٿ� N�� X�� �־�����. (1 �� N, X �� 10, 000)
//��° �ٿ� ���� A�� �̷�� ���� N���� �־�����.
//�־����� ������ ��� 1���� ũ�ų� ����, 10, 000���� �۰ų� ���� �����̴�.
//<���>
//X���� ���� ���� �Է¹��� ������� �������� ������ ����Ѵ�.
//X���� ���� ���� ��� �ϳ� �����Ѵ�.
//int main(void) {
//
//	int N, X;
//
//	int;
//}

//����� - 2

//int main(void) {
//
//	int i, j, k, n;
//
//	scanf_s("%d", &n);
//
//
//	for (i = 1; i < n + 1; i++) {
//
//		for (j = 0; j < i; j++)
//			printf("*");
//
//		printf("\n");
//	}
//}