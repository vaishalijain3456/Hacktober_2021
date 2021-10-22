def morse(txt):
    '''Morse code encryption and decryption'''

    d = {'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.',
         'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---',
         'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---',
         'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-',
         'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--',
         'Z': '--..', ' ': '.....'}
    translation = ''

    # Encrypt Morsecode
    if txt.startswith('.') or txt.startswith('−'):
        # Swap key/values in d:
        d_encrypt = dict([(v, k) for k, v in d.items()])
        # Morse code is separated by empty space chars
        txt = txt.split(' ')
        for x in txt:
            translation += d_encrypt.get(x)

    # Decrypt to Morsecode:
    else:
        txt = txt.upper()
        for x in txt:
            translation += d.get(x) + ' '
    return translation.strip()


print(morse('python'))
# .--. -.-- - .... --- -.
print(morse('.--. -.-- - .... --- -.'))
# PYTHON
print(morse(morse('HEY')))
# HEY