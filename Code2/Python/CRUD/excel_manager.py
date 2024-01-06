import pandas as pd
import os

def read_excel(filename):
    if not os.path.isfile(filename):
        df = pd.DataFrame([])
        df.to_excel(filename, index=False)
    else:
        df = pd.read_excel(filename)
    return df

def write_excel(filename, data):
    data.to_excel(filename, index=False)