#!/usr/bin/python3
"""A class that defines a rectangle"""


class Rectangle:
    """This represents a rectangle"""

    def __init__(self, width=0, height=0):
        """Initializing this rectangle class
        Args:
            width: Represents the width of the rectangle
            height: Represents the height of the rectangle
        Raises:
            TypeError: If width/height is not an integer
            ValueError: If width/height is less than 0
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """Retrieves width attribute"""
        return self.__width

    @width.setter
    def width(self, value):
        """Sets width attribute"""
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """Retrieves height attribute"""
        return self.__height

    @height.setter
    def height(self, value):
        """Sets height attribute"""
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """Returns the area of the rectangle"""
        return self.__width * self.__height

    def perimeter(self):
        """Returns the perimeter of the rectangle"""
        if self.__width == 0 or self.__height == 0:
            return 0
        return (self.__width + self.__height) * 2

    def __str__(self):
        """Returns a string representation of the rectangle"""
        if self.__width == 0 or self.__height == 0:
            return ""
        rect_str = ""
        for _ in range(self.__height):
            rect_str += "#" * self.__width + "\n"
        return rect_str[:-1]

    def __repr__(self):
        """Returns a string representation of the rectangle
        that can be used to recreate the object"""
        return "<{}({}, {})>".format(type(self).__name__, self.__width, self.__height)
