# Import Library
import json
import os

def load_data():
    # Load File JSON yang sudah kita buat
    with open("data.json", "r") as file_read:
        global data
        data = json.load(file_read)

def show_choice():
    os.system('cls')
    # Tampilkan pilihan lagu
    print("Pilih Lagu")
    for i in data:
        print(f"[{i['id']}] {i['title']} : {i['singer']}")

    # Minta user menginputkan pilihan
    choice = int(input("=> "))

    # Pass pilihan ke fungsi
    process_choice(choice=choice)

def process_choice(choice):
    os.system('cls')
    # Proses input user
    if choice in range(len(data)):
        for i in data[choice]['lyric']:
            print(i)
    else:
        print("Pilihan Tidak Valid")
    
    input()

load_data()
while __name__ == "__main__":
    show_choice()