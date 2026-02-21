# ESPHomeConfigs

- Usefull commands:
    - esphome config treppenLicht.yaml
    - esphome compile treppenLicht.yaml
      - in .esphome/build/singleplug/.pioenvs/treppenLicht/firmware.bin findet sich das binary
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

- Docker
    - docker pull ghcr.io/esphome/esphome
    - docker run --rm -v "${PWD}":/config -it ghcr.io/esphome/esphome logs tv_sonoff_pow_r1.yaml
    - docker run --rm --privileged -v "${PWD}":/config --device=/dev/ttyUSB0 -it ghcr.io/esphome/esphome run ...yaml

# venv aktualisieren:
- `uv pip install -r requirements.txt --upgrade`
- `uv pip show esphome`
