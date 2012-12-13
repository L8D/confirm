Confirm
=======
An extremely simple confirm prompt.
prints a simple '[Y/n]' on the screen and returns non-0 if y/Y isn't entered.

example usage for shell:

    echo -n "Are you sure?"
    if confirm; then echo "Whoot!"
    else echo "Okay, that's fine."
    fi
