from src.utils import file_utils
import unittest


class Test_File_Utils(unittest.TestCase):

    def setUp(self):
        self.source_test = {
            {
        "name": "Ariele",
         "last_name": "Quintana"
            }
        }

    def test_read_file(self):
        file_name = "users"
        file = file_utils.read_file(file_name)

        self.assertEqual(file, self.source_test)

    

    