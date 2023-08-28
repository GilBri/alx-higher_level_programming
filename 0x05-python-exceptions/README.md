# Python Errors and Exceptions Overview

This README provides a concise summary of the key points and notes from the "Errors and Exceptions" section of Python.

## Errors and Exceptions

This section highlights the difference between syntax errors and exceptions. Syntax errors occur during parsing due to incorrect code structure, while exceptions occur during execution.

## Syntax Errors

- Syntax errors are detected during parsing.
- They result from incorrect syntax or missing code elements.
- Python provides detailed error messages indicating the error location.

## Exceptions

- Exceptions occur during program execution.
- They can be handled using `try` and `except` blocks.
- Built-in exception types include `ZeroDivisionError`, `NameError`, and `TypeError`.

## Handling Exceptions

- Use `try` and `except` blocks to handle exceptions.
- Code in the `try` block is executed; if an exception occurs, the corresponding `except` block is triggered.
- Multiple `except` clauses can handle different exception types.

## Raising Exceptions

- The `raise` statement raises exceptions manually.
- Used to communicate specific error conditions.
- Exceptions can be instances or classes derived from `Exception`.

## Exception Chaining

- An exception can have another exception attached using the `from` clause.
- Useful to indicate direct consequences of an exception.
- Helps in understanding exception flow and context.

## User-defined Exceptions

- Programs can define custom exception classes.
- Derive custom exceptions from the built-in `Exception` class.
- Custom exceptions provide meaningful error information.

## Defining Clean-up Actions

- The `try` statement can include a `finally` block.
- Code in the `finally` block runs regardless of exceptions.
- Useful for resource cleanup like files or connections.

## Predefined Clean-up Actions

- Objects like files offer predefined cleanup actions.
- Managed using the `with` statement to ensure proper cleanup.
- Helps in releasing resources promptly.

## Raising and Handling Multiple Unrelated Exceptions

- The `ExceptionGroup` class wraps a list of exceptions.
- Useful when multiple exceptions need to be raised or handled together.
- Provides a way to manage unrelated exceptions as a group.

## Enriching Exceptions with Notes

- Exceptions can have additional notes using `add_note()`.
- Notes provide context and additional information about exceptions.
- Notes are included in traceback rendering for better understanding.
