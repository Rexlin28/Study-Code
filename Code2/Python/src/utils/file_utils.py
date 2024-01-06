import json

def write_file(file_name, user):
    with open(f"{file_name}.json", "w+") as output_file: #with open(f"{dir}{os.sep}{file_name}.json", "w+") as output_file:
        data = json.dumps(user, indent=4)
        output_file.write(data)


def read_file(file_name):
    with open(f"{file_name}.json", "r") as input_file:
        return json.load(input_file)