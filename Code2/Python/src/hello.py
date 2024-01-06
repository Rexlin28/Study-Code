import PySimpleGUI as sg

# Define the layout of the menu
layout = [
    [sg.Text('Welcome to the Menu!', size=(30, 1), justification='center', font=("Helvetica", 25), relief=sg.RELIEF_RIDGE)],
    [sg.Button('Option 1', size=(20, 2))],
    [sg.Button('Option 2', size=(20, 2))],
    [sg.Button('Option 3', size=(20, 2))],
    [sg.Button('Exit', size=(20, 2))]
]

# Create the window
window = sg.Window('Menu', layout)

# Event loop to process events and get user input
while True:
    event, values = window.read()
    
    # Handle button clicks
    if event == 'Option 1':
        window.close()

        # Define a new layout
        new_layout = [
            [sg.Text('You selected Option 1')],
            [sg.Button('Go Back')]
        ]
new_layout.length
        # Create a new window with the new layout
        window = sg.Window('Option 1', new_layout)
    elif event == 'Option 2':
        sg.popup('You selected Option 2')
    elif event == 'Option 3':
        sg.popup('You selected Option 3')
    elif event == 'Go Back':
        window.close()

        # Create a new window with the original layout
        window = sg.Window('Menu', layout)
    elif event == sg.WINDOW_CLOSED or event == 'Exit':
        break

# Close the window
window.close()
