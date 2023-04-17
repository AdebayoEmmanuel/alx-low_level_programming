#!/usr/bin/python3
import json
dict = {}

dict['key'] = 'value'

with open('file.json', 'w') as written:
    json.dump(dict, written)
