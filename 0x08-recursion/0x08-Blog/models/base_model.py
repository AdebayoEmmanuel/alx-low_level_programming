#!/usr/bin/python3

from datetime import datetime
import uuid

class BaseModel:
    '''This class defines a base model with uuid, created at and updated at'''
    def  __init__(self, *args, **kwargs):
        '''initializes a model'''
        if kwargs:
            for key, value in kwargs.items():
                if key == 'updated_at' or key == 'created_at':
                    value = datetime.strptime(value, "%Y-%m-%dT%H:%M:%S.%f")
                if key != '__class__':
                    setattr(self, key, value)
            if 'id' not in kwargs:
                self.id = str(uuid.uuid4())
            if 'created_at' not in kwargs:
                self.created_at = datetime.now()
            if 'updated_at' not in kwargs:
                self.updated_at = datetime.now()
        else:
            self.id = str(uuid.uuid4())
            self.created_at = self.updated_at = datetime.now()
    
    def __str__(self):
        cls = type(self).__name__
        return "[{}] ({}) {}".format(cls, self.id, self.__dict__)

    def save(self):
        self.updated_at = datetime.now()

    def to_dict(self):
        dictionary = {}
        dictionary.update(self.__dict__)
        cls = type(self).__name__
        dictionary['__class__'] = cls
        dictionary['created_at'] = self.created_at.isoformat()
        dictionary['updated_at'] = self.updated_at.isoformat()
        return dictionary
