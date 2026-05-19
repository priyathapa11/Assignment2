def outer_function(x):
    message = "Python closure"

    def inner_function(y):
        return f"{message}: {x + y}"

    return inner_function


add_five = outer_function(5)

print(add_five(10))
