SHOWS = [
    " Avatar: the Last Airbender",
    " Ben 10",
    "Arthur",
    "spongebob squarepants",
    " phineas and Ferb",
    "Kim possible",
    " jimmy Neutron",
    " the Proud family"
]

def main():
    cleaned_shows = []
    for show in SHOWS:
        cleaned_shows.append(show.title().strip())

    print(", ".join(cleaned_shows))

main()