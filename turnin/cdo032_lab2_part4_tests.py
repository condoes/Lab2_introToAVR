tests = [ {'description': 'PINA: 0x64, PINB: 0x1E, PINC: 0xB (141)=> PORTD: 0x8F (10001111)',
    'steps': [ {'inputs': [('PINA',0x64), ('PINB',0x1E), ('PINC',0xB)], 'iterations': 5 } ],
    'expected': [('PORTD',0x8F)],
    },

    [ {'description': 'PINA: 0xA, PINB: 0x1E, PINC: 0x3 (43)=> PORTD: 0x28 (00101000)',
    'steps': [ {'inputs': [('PINA',0xA), ('PINB',0x1E), ('PINC',0x3)], 'iterations': 5 } ],
    'expected': [('PORTD',0x28)],
    },

    [ {'description': 'PINA: 0x1E, PINB: 0x64, PINC: 0x14 (150)=> PORTD: 0x95 (10010101)',
    'steps': [ {'inputs': [('PINA',0x1E), ('PINB',0x64), ('PINC',0x14)], 'iterations': 5 } ],
    'expected': [('PORTD',0x95)],
    },
