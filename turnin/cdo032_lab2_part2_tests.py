tests = [ {'description': 'PINA: 0x00 => PORTC: 0x04',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x04)],
    },
            {'description': 'PINA: 0x01 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
            {'description': 'PINA: 0x02 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
           {'description': 'PINA: 0x03 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
           {'description': 'PINA: 0x04 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x04)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
           {'description': 'PINA: 0x05 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x05)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
           {'description': 'PINA: 0x06 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x06)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
           {'description': 'PINA: 0x07 => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0x07)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
           {'description': 'PINA: 0x08 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x08)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
           {'description': 'PINA: 0x09 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x09)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
           {'description': 'PINA: 0xA => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0xA)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
         {'description': 'PINA: 0xb => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0xB)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
         {'description': 'PINA: 0xC => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0xC)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
         {'description': 'PINA: 0xD => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0xD)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
         {'description': 'PINA: 0xE => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0xE)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },
         
            {'description': 'PINA: 0xF => PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0xF)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },
    ]
