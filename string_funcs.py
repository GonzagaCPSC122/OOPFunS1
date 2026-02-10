def remove_vowels(phrase: str) -> str:
    new_str = ""
    for char in phrase.lower():
        if char not in "aeiou":
            new_str += char
    return new_str

if __name__ == "__main__":
    print(remove_vowels("gonzaga"))

    # a unit test is a function that tests another function for correctness
    # a unit test is comprised of one or more test cases
    # test cases should include simple/common input/output pairs (e.g., the "happy path")
    # tests cases should also include rare/complex input/output paris (e.g., edge cases)
    # test cases are built using assert statements
    # asserts test if a statement is true
    # if the statement is true, execution continues
    # if the statement is false, execution stops (code crashes with an AssertionError)
    # example
    assert 3 == 4
    print("after assert")

    # we will use the pytest testing framework
    # test modules and unit tests start with test_