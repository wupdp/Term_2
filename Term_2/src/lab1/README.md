Лабораторная работа 1
Цель: освоить механизм структур языка С, научиться работать с массивами пользовательских типов данных.

Задача: написать программу для работы с массивом структур.

Условия:
- Выбрать любой подходящий объект для описания его с помощью структуры. В ней должно быть не менее трех полей, желательно, разных типов. Структура student (или аналогичная по смыслу) запрещена из-за своей банальности. 

Условия приема:
-	Оформление - (названия файлов, функций, переменных, отступы, структура проекта и т.п.) и небольшие баги должны быть исправлены. // Code name convention (camelCase, snake_case)
-	Использование Git (использование файлов gitignore, README)
-	Условие автомата: Sonar (Отсутствие багов и code Smells)

На 4-6
- Реализовать функцию для создания массива структур.
- Реализовать функцию для вывода массива структур на экран.
- Реализовать функцию для инициализации экземпляра структуры.
- Реализовать функции сортировки массива по каждому полю структуры. (Например, можно отсортировать студентов сначала по дате рождения, затем передумать и отсортировать по среднему баллу).
- Реализовать меню, для проверки функционала.

На 7-8
- Функции не должны привязываться к конкретному массиву: таковой должен передаваться в качестве аргумента.
- В качестве типа одного из полей структуры использовать enum (например, для цвета).
- Реализовать функцию для удаления структуры из массива.
- Реализовать сортировку по двум полям одновременно. (Например, отсортировать автомобили по цвету, на так чтобы все автомобили одного цвета шли в порядке года выпуска).

На 9-10
- Для заполнения структур распарсить html-файл любого списка или каталога.
