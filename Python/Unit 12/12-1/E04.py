class Safe:
    def __init__(self, type, length, width, passcode):
        self.type = type
        self.length = length
        self.width = width
        self.passcode = passcode

    def __str__(self):
        return f"Type: {self.type}\nLength: {self.length} in.\nWidth {self.width} in.\nCode: {self.passcode}"

super_secret_hidden_secure_safe_kept_under_the_floorboards_under_a_carpet_which_is_under_my_bed_in_my_house = Safe("floor", 30, 60, [7, 7, 7])

print(super_secret_hidden_secure_safe_kept_under_the_floorboards_under_a_carpet_which_is_under_my_bed_in_my_house)

# Don't you ever tell me I'm not good at naming variables.
# EVER