tests = [ {'description': '0000 0000',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x00), ('PORTC', 0x00)],
    },
    {'description': '1111 0000',
    'steps': [ {'inputs': [('PINA',0xF0)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x0F), ('PORTC', 0x00)],
    },
    {'description': '0000 1111',
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x00), ('PORTC', 0xF0)],
    },
    {'description': '1111 1111',
    'steps': [ {'inputs': [('PINA',0xFF)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x0F), ('PORTC', 0xF0)],
    },
    {'description': '0011 1100',
    'steps': [ {'inputs': [('PINA',0x3C)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x03), ('PORTC', 0xC0)],
    },
    {'description': '1100 0011',
    'steps': [ {'inputs': [('PINA',0xC3)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x0C), ('PORTC', 0x30)],
    },
    {'description': '0100 0010',
    'steps': [ {'inputs': [('PINA',0x42)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x04), ('PORTC', 0x20)],
    },
    {'description': '0010 0010',
    'steps': [ {'inputs': [('PINA',0x22)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x02), ('PORTC', 0x20)],
    },
    {'description': '0100 0001',
    'steps': [ {'inputs': [('PINA',0x41)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x04), ('PORTC', 0x10)],
    },
    {'description': '1010 0101',
    'steps': [ {'inputs': [('PINA',0xA5)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x0A), ('PORTC', 0x50)],
    },
    ]
#watch = ['PORTB']

