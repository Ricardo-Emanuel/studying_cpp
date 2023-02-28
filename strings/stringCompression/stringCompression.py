def compression(letters: list) -> int:
    index = 0;
    current = letters[0];
    counter = 1;

    for letter in letters[1:]:
        if letter == current: counter += 1;
        else:
            index += 1;
            if counter > 1:
                letters[index] = str(counter);
                index += 1;
            letters[index] = letter;
            counter = 1;
            current = letter;
    return index + 1;

if __name__ == '__main__':
    letters = list("akkkkksssmdddn");
    size = compression(letters);
    print(letters[:size]);