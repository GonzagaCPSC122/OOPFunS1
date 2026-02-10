from string_funcs import remove_vowels

# unit test for remove_vowels()
def test_remove_vowels():
    # 2 main ways to check output
    # 1. against a "desk check" or "desk calculation"
    result = remove_vowels("gonzaga")
    # assert order: actual (code produced) vs expected (solution)
    assert result == "gnzg"
    result1 = remove_vowels("ooo")
    solution = ""
    assert result1 == solution
    # TODO: add more test cases

    # 2. against a known, validated implementation
    # e.g., an existing library

    # to run: pytest