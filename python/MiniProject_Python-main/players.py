"""
This class is responsible for various calculations on the top_women_chess_players dataset.
"""
from dataset import Players
class Calculations(Players):
    """
    This is a constructor which initialized the base class constructor i.e Players
    """
    def __init__(self, my_list):
        Players.__init__(self, my_list)

    def sort_names_in_asc(self):
        """
        Function to sort names in ascending order.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[1])
        return sorted(new_list)

    def sort_titles_in_desc(self):
        """
        Function to sort players titles in descending order.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[4])
        return sorted(new_list, reverse=True)

    def sort_federation_in_asc(self):
        """
        Function to sort the federation in ascending order.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[2])
        return sorted(new_list)

    def sort_rapid_rating_in_desc(self):
        """
        Function to sort rapid rating descending order.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[7])
        return sorted(new_list, reverse=True)

    def sort_standard_rating_in_asc(self):
        """
        Function to sort standadrd rating in ascending order.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[6])
        return sorted(new_list)

    def max_rating_score(self):
        """
        Function to return the maximum rating score.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[7])
        return max(new_list)

    def min_rating_score(self):
        """
        Function to return the minimum rating score.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[7])
        return min(new_list)

    def max_blitz_score(self):
        """
        Function to return the maximum blitz rating
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[8])
        return max(new_list)

    def min_blitz_score(self):
        """
        Function to return the minimum blitz rating
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[8])
        return min(new_list)

    def count_players_by_federation(self, federation):
        """
        Function to count the players by federation by passing  federation  as a parameter.
        """
        data = self.import_data()
        if data:
            new_list = []
            for row in data:
                new_list.append(row[2])
            count = 0
            for x_in_row in new_list:
                if federation == x_in_row:
                    count += 1
        return count

    def find_players_by_dob(self, dob):
        """
        Function to return a list of all the players by a certain players
        by passing a dob as a parameter.
        """
        data = self.import_data()
        if data:
            name_list = []
            dob_list = []
            player_list = []
            for row in data:
                name_list.append(row[1])
                dob_list.append((row[5]))
            for index, player in enumerate(dob_list):
                if player == dob:
                    player_list.append(name_list[index])
        return player_list

DATA = Calculations('top_women_chess_players_aug_2020.csv')
print(DATA.import_data())
print(DATA.display())
print(DATA.sort_names_in_asc())
print(DATA.sort_titles_in_desc())
print(DATA.sort_federation_in_asc())
print(DATA.sort_rapid_rating_in_desc())
print(DATA.sort_standard_rating_in_asc())
print(DATA.max_rating_score())
print(DATA.min_rating_score())
print(DATA.max_blitz_score())
print(DATA.min_blitz_score())
print(DATA.count_players_by_federation("IM"))
print(DATA.find_players_by_dob("1976"))
