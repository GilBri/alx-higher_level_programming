#include <cstdlib>

/**
 * print_python_list - Prints information about a Python list
 * @p: PyObject pointer
 */
void print_python_list(PyObject *p)
{
    if (p == NULL)
    {
        perror("  [ERROR] PyObject pointer is NULL");
        return;
    }
    if (PyList_Check(p))
    {
        Py_ssize_t size = PyList_Size(p);

        fputs("[*] Python list info\n", stdout);
        fprintf(stdout, "[*] Size of the Python List = %ld\n", size);

        fprintf(stdout, "[*] Allocated = %ld\n", PyList_GET_SIZE(p));

        for (Py_ssize_t i = 0; i < size; i++)
        {
            PyObject *item = PyList_GetItem(p, i);

            fprintf(stdout, "Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
        }
    }
    else
    {
        perror("  [ERROR] Invalid List Object");
    }
}

/**
 * print_python_bytes - Prints information about a Python bytes object
 * @p: PyObject pointer
 */
void print_python_bytes(PyObject *p)
{
    if (p == NULL)
    {
        perror("  [ERROR] PyObject pointer is NULL");
        return;
    }
    if (PyBytes_Check(p))
    {
        fputs("[.] bytes object info\n", stdout);
        printf("  size: %ld\n", PyBytes_Size(p));
        printf("  trying string: %s\n", PyBytes_AsString(p));
        Py_ssize_t size = PyBytes_Size(p);
        if (size < 10)
        {
            printf("  first %ld bytes: ", size + 1);
        }
        else
        {
            printf("  first 10 bytes: ");
        }
        for (Py_ssize_t i = 0; i < size && i < 10; i++)
        {
            printf("%02x", (unsigned char)PyBytes_AsString(p)[i]);
            if (i + 1 < size && i < 9)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    else
    {
        perror("  [ERROR] Invalid Bytes Object");
    }
}

/**
 * print_python_float - Prints information about a Python float object
 * @p: PyObject pointer
 */
void print_python_float(PyObject *p)
{
    if (p == NULL)
    {
        perror("  [ERROR] PyObject pointer is NULL");
        return;
    }
    if (PyFloat_Check(p))
    {
        fputs("[.] float object info\n", stdout);
        printf("  value: %lf\n", ((PyFloatObject *)p)->ob_fval);
    }
    else
    {
        perror("  [ERROR] Invalid Float Object");
    }
}