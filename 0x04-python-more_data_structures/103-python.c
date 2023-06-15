#include <stdio.h>
#include <python.h>

/**
 * print_python_bytes - Functions that print some basic info about
 * Pythom bytes object
 * @p: Python Object
 */
void print_python_bytes(PyObject *p)
{
	char *str;
	long int i, j, k;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	i = ((PyVarObject *)(p))->ob_i;
	str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", i);
	printf("  trying string: %s\n", str);

	if (i >= 10)
		k = 10;
	else
		k = i + 1;

	printf("  first %ld bytes:", k);

	for (j = 0; j < k; j++)
		if (str[j] >= 0)
			printf(" %02x", str[j]);
		else
			printf(" %02x", 256 + str[j]);

	printf("\n");
}

/**
 * print_python_list - Functions that print some basic info about
 * Python lists object
 * @p: Python Object
 */
void print_python_list(PyObject *p)
{
	long int i, j;
	PyListObject *list;
	PyObject *obj;

	i = ((PyVarObject *)(p))->ob_i;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", i);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (j = 0; j < i; j++)
	{
		obj = ((PyListObject *)p)->ob_item[j];
		printf("Element %ld: %s\n", j, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
