import unittest
from Vendingmachine.master import checker

class TestChecker(unittest.TestCase):

    def test_valid_choice(self):
        result = checker("2","1")
        self.assertEqual(result, 2)

    def test_invalid_choice(self):
        result = checker("5","2")
        self.assertEqual(result, "wrong input, try again")

    def test_non_integer_input(self):
        result = checker("abc","3")
        self.assertEqual(result, "wrong input, try again")


if __name__ == '__main__':
    unittest.main()