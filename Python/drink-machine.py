OPTIONS = {
    "soda": {
        "type": {
            "red", "green", "purple",
        },
        "cost": 1.5,
    },


    "energy drink": {
        "type": {
            "intense", "fizz", "hype",
        },
        "cost": 2.5,
    },

    "water": {
        "type": {
        "ocean", "spring", "mountain",
        },
        "cost": 1.0,
    }


}

soda_drink = OPTIONS["soda"]
energy_drink = OPTIONS['energy drink']
water_drink = OPTIONS['water']


water = water_drink
soda = soda_drink
energy = energy_drink

water_cost = water['cost']
soda_cost = soda['cost']
energy_drink_cost = energy['cost']



profit = 0

def money_inserted():
    """"Returns the total calculated from coins inserted."""
    print("Please insert dollars & coins.")
    total = int(input("how many dollars?: ")) * 1.00
    total += int(input("how many quarters?: ")) * 0.25
    total += int(input("how many dimes?: ")) * 0.10
    total += int(input("how many nickles?: ")) * 0.05

    return total

def transaction_successful(money_recieved, drink_cost):
    """Return True when the payment is accepted, or False if money is insufficient."""
    if money_recieved >= drink_cost:
        change = round(money_recieved - drink_cost, 2)
        print(f"Here is ${change} in change")
        global profit
        profit += drink_cost
        return True
    else:
        print("Sorry that's not enough money. Money refunded.")
        return False


def release_drink(drink_name):
    """Prints out he drink name."""
    #for item in drink_name:
    print(f"Here is your drink: {drink_name} (enjoy!) ")

def profit_report():
    print(f"You have made: ${profit} from this vending machine. ")


should_continue = True
while should_continue:
    user_option = input("What drink category would you like? (soda/energy drink/water): ")
    if user_option == "off":
        should_continue = False

    elif user_option == "report":
        profit_report()


    else:
        drink = OPTIONS[user_option]
        drink_catagory = drink['type']
        payment = money_inserted()

        user_drink_selection = input(f"What is your drink selection? {drink_catagory} ")

        if transaction_successful(payment, drink['cost']):
            release_drink(user_drink_selection)