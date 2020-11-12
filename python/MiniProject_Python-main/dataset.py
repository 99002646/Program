"""
This module is responsible for importing and printing data
"""
import csv
class Players:
    """
    This class has a constructor and 2 method
    """
    def __init__(self, my_list):
        """
        This constructor creates a variable called my_list and initializes it with
        the data that is passed from the Calculate class, which consists of the csv file.
        It also creates an empty list
        """
        self.my_list = my_list
        self.data_list = []
    def import_data(self):
        """
        This method is responsible for considering all the data from my_list, except the headers
        """
        try:
            with open(self.my_list, newline='') as csvfile:
                spamreader = csv.reader(csvfile, delimiter=',', quotechar='|')
                for row in spamreader:
                    self.data_list.append(row)
        except IOError:
            print("file doesn't exist")
        else:
            return self.data_list
    def display(self):
        """
        This method is responsible for displaying all the data row-wise
        """
        for row in self.data_list:
            print("Fide ID:", row[0])
            print("Name:", row[1])
            print("Federation:", row[2])
            print("Gender:", row[3])
            print("Title:", row[4])
            print("DOB:", row[5])
            print("Standard rating:", row[6])
            print("Rapid rating:", row[7])
            print("Blitz rating:", row[8])
            print("\n")
