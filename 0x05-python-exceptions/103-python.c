#include <Python.h>

/**
 * print_python_list - Prints information about a Python list
 * @p: PyObject pointer
 */
void print_python_list(PyObject *p)
{
    if (PyList_Check(p))
    {
        Py_ssize_t size = PyList_Size(p);

        printf("[*] Python list info\n");
        printf("[*] Size of the Python List = %ld\n", size);

        printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

        for (Py_ssize_t i = 0; i < size; i++)
        {
            PyObject *item = PyList_GetItem(p, i);
            printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
        }
    }
    else
    {
        fprintf(stderr, "  [ERROR] Invalid List Object\n");
    }
}

/**
 * print_python_bytes - Prints information about a Python bytes object
 * @p: PyObject pointer
 */
void print_python_bytes(PyObject *p)
{
    if (PyBytes_Check(p))
    {
        printf("[.] bytes object info\n");
        printf("  size: %ld\n", PyBytes_Size(p));
        printf("  trying string: %s\n", PyBytes_AsString(p));
        if (PyBytes_Size(p) < 10)
        {
            printf("  first %ld bytes: ", PyBytes_Size(p) + 1);
        }
        else
        {
            printf("  first 10 bytes: ");
        }
        for (Py_ssize_t i = 0; i < PyBytes_Size(p) && i < 10; i++)
        {
            printf("%02x", (unsigned char)PyBytes_AsString(p)[i]);
            if (i + 1 < PyBytes_Size(p) && i < 9)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    else
    {
        fprintf(stderr, "  [ERROR] Invalid Bytes Object\n");
    }
}

/**
 * print_python_float - Prints information about a Python float object
 * @p: PyObject pointer
 */
void print_python_float(PyObject *p)
{
    if (PyFloat_Check(p))
    {
        printf("[.] float object info\n");
        printf("  value: %lf\n", ((PyFloatObject *)p)->ob_fval);
    }
    else
    {
        fprintf(stderr, "  [ERROR] Invalid Float Object\n");
    }
}
