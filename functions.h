bool stringToBool(std::string const& s) {
    return s != "off";
}

// Codepoints for Material Web Font
#define ICON_Down "\U000F072E"
#define ICON_Up "\U000F0737"

const char *trendIcon(std::string const& increasing, std::string const& falling) {
    if (increasing == "on" && falling == "off") return ICON_Up;
    if (falling == "on" && increasing == "off") return ICON_Down;
    return "";
}
