#!/usr/bin/python3
class Square(Rectangle):
    """
    Class Square that inherits from Rectangle.
    """
    def __init__(self, size):
        """
        Instantiation with size.
        """
        self.integer_validator("size", size)
        super().__init__(size, size)

    def __str__(self):
        """
        Method that returns the square description.
        """
        return "[Square] {}/{}".format(self._Rectangle__width, self._Rectangle__height)
