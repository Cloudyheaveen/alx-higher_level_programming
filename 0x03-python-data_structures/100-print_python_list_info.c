#include <Python.h>
#include <object.h>
#include <listobject.h>
#include <stdio.h>

/**
* print_python_list_info - Function that prints some basic info
* about Python lists
* @p: Python object
**/

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size = PyList_Size(p);
	PyListObject *obj = (PyListObject *)p;
	int a;

	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", obj->allocated);

	for (a = 0; a < size; a++)
	{
		PyObject *item = PyList_GetItem(p, a);
		printf("Element %d: %s\n", a, Py_TYPE(item)->tp_name);
	}
}
