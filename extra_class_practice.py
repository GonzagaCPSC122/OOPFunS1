# 1. 
import math

class Sphere:
    """
    Docstring for Sphere
    """
    def __init__(self, radius: float = 1.0) -> None:
        self._radius = radius

    def get_radius(self) -> float:
        return self._radius
    
    def set_radius(self, new_radius: float) -> None:
        self._radius = new_radius

    def get_surface_area(self) -> float:
        return 4 * math.pi * self._radius ** 2

s1 = Sphere(5.0)
print(s1.get_radius())
result = s1.get_surface_area()
print(result)

# 4.
class Card:
    """
    Docstring for Card
    """
    def __init__(self, rank: str, suit: str) -> None:
        self._rank = rank
        self._suit = suit

    def __str__(self) -> str:
        return f"{self._rank} of {self._suit}"

class Hand:
    """
    Docstring for Hand
    """
    def __init__(self, cards: list[Card] = None) -> None:
        if cards is None:
            cards = []
        self._cards = cards

    def __str__(self) -> str:
        str_rep = ""
        for i in range(len(cards)):
            str_rep += f"Card #{i}: {cards[i]}\n"
        return str_rep
    
    def is_royal_flush(self) -> bool:
        ranks = ["10", "Jack", "Queen", "King", "Ace"]
        suit = self._cards[0]._suit # assumes at least one card in hand!!
        for card in self._cards:
            if card._suit != suit:
                return False
            if card._rank in ranks:
                ranks.remove(card._rank)
            else:
                return False
        return True
    
def display_hand(cards: list[Card]) -> None:
    for i in range(len(cards)):
        print(f"Card #{i}:", cards[i])
        # print("Card #", i, ": ", cardsr[i], sep="")
        # print("Card #" + str(i) + ": " + str(cards[i]))
    
card = Card("3", "Clubs")
print(card)
# cards = [
#     card,
#     Card("Jack", "Hearts"),
#     Card("Ace", "Hearts"),
#     Card("King", "Spades"),
#     Card("10", "Hearts")
# ]
cards = [
    Card("Queen", "Hearts"),
    Card("Jack", "Hearts"),
    Card("Ace", "Hearts"),
    Card("King", "Hearts"),
    Card("10", "Hearts")
]
display_hand(cards)

hand = Hand(cards)
print(hand)
if hand.is_royal_flush():
    print("You got a royal flush!")
else:
    print("Try again...")