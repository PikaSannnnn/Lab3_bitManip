tests = [ {'description': '(Fuel Gauge Tested in Part 2) No Fuel (Low Fuel)',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC', 0x40)],
    },
    {'description': 'Key In, Driver Absent',
    'steps': [ {'inputs': [('PINA',0x10)], 'iterations': 5 } ],
    'expected': [('PORTC', 0x40)],
    },
    {'description': 'Key In, Driver In, Seatbelt In',
    'steps': [ {'inputs': [('PINA',0x70)], 'iterations': 5 } ],
    'expected': [('PORTC', 0x40)],
    },
    {'description': 'Key In, Driver In, Seatbelt Not In',
    'steps': [ {'inputs': [('PINA',0x70)], 'iterations': 5 } ],
    'expected': [('PORTC', 0xC0)],
    },
    ]
#watch = ['PORTB']

