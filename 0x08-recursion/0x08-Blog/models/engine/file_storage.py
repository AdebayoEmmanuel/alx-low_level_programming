#!/usr/bin/python3
import json

class FileStorage:
    '''this class manages the file storage operations'''
    __file_path = 'file.json'
    __objects = {}

    def all(self):
        '''returns a dictionary of all the models in storage'''
        return FileStorage.__objects

    def new(self, obj):
        '''adds new object to storage dictionary'''
        obj = obj.to_dict()
        cls = obj['__class__']
        id = obj.id
        key = cls + '.' + id
        self.all()[key] = obj

    def save(self):
        with open('file.json', 'w') as written:
           json.dump(FileStorage.__objects, written)


