# ESPHomeConfigs

- Usefull commands:
    - esphome config treppenLicht.yaml
    - esphome compile treppenLicht.yaml
    - esphome run xx.yaml     # Geht auch bei initialen flashen über Usb!
    - esphome logs xx.yaml
    - esphome dashboard xx.yaml
   
- Shelly Plus 1 flashen:
    - Drei Leiter in dem mini Header notwendig: Masse, RX, TX
    - Spannungsversorgung über 12V
    - Shelly Led leuchtet nicht!
    - geflashed mit dem kurzen USB-micro Teil
    - Shelly mini Header:
        - 1, Rechts = Masse
        - 2 = IO-0, muss beim Flashen mit Masse verbunden sein
        - 5 = RX wird mit TX vom Programmierer verbunden
        - 6 = TX wird mit RX ...
