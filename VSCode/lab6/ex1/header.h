#include "functions.c"
#include <stdio.h>
#include <stdlib.h>
int minFind0(int* mas, int l, int i);
int minFind1(int* mas, int l, int i);
void swap(int* a, int* b);
int initX(int min, int max);
int* massiveInit(int l);
int** massive2Init(int r, int l);
void rowInput(int* mas, int l);
void massive2Input(int l, int length, int** mas);
void massive1Show(int* mas, int l);
void massive2Show(int** mas, int r, int l);
void ranInputRow(int* mas, int l);
void badCase(int* mas, int l);
void bubbleSort(int* mas, int l);
void insertionSort(int* mas, int l);
void qsortM(int** mas, int row, int l);
void q_sort(int* mas, int size);
void ranInputMas(int** mas, int r, int l);
void mas_copy(int* mas1,int* mas2,int l);