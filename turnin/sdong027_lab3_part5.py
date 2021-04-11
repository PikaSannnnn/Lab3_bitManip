tests = [ {'description': 'No Passenger (0 lb)',
    'steps': [ {'inputs': [('PIND',0x00), ('PINB',0x00)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x00)],
    },
    {'description': 'Passenger No Airbag (15 lb)',
    'steps': [ {'inputs': [('PIND',0x07), ('PINB',0x01)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x04)],
    },
    {'description': 'Passenger Airbag (127 lb)',
    'steps': [ {'inputs': [('PIND',0x3F), ('PINB',0x01)], 'iterations': 5 } ],
    'expected': [('PORTB', 0x02)],
    },    
    ]
#watch = ['PORTB']

