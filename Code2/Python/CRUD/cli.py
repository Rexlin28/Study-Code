import click
import json_manager
import excel_manager
import pandas as pd



'''
@cli.command()
def users():
    users = json_manager.read_json()
    for user in users:
        print(f"{user['id']} - {user['name']} - {user['lastname']}")

@cli.command()
@click.option('--name', required=True, help='Name of the user')
@click.option('--lastname', required=True, help='LastName of the user')
@click.pass_context
def new(ctx, name, lastname):
    if not name or not lastname:
        ctx.fail('You must provide a name and a lastname')
        
    else:
        data = json_manager.read_json()
        new_id = len(data) + 1
        new_user = {
            'id': new_id, 
            'name': name, 
            'lastname': lastname
        }
        data.append(new_user)
        #print(data)
        json_manager.write_json(data)
        print(f"User {name} {lastname} with id {new_id} created successfully")

@cli.command()
@click.argument('id', type=int)
def user(id):
    data = json_manager.read_json()
    user = next((x for x in data if x['id'] == id), None)
    if(user is None):
        print(f"User with id {id} not found")
    else:
        print(f"User found: {user['name']} {user['lastname']}")

@cli.command()
@click.argument('id', type=int)
def delete(id):
    data = json_manager.read_json()
    user = next((x for x in data if x['id'] == id), None)
    if(user is None):
        print(f"User with id {id} not found")
    else:
        data.remove(user)
        json_manager.write_json(data)
        print(f"User with id {id} deleted successfully")

@cli.command()
@click.argument('id', type=int)
@click.option('--name', help='Name of the user')
@click.option('--lastname', help='LastName of the user')
def update(id, name, lastname):
    data = json_manager.read_json()
    for user in data:
        if user['id'] == id:
            if name is not None:
                user['name'] = name
            if lastname is not None:
                user['lastname'] = lastname
            break
    json_manager.write_json(data)
    print(f"User with id {id} updated successfully")

'''

class CustomOrderGroup(click.Group):
    command_order = ['new-client', 'new-order', 'new-employee', 'delete-client', 'delete-order', 'delete-employee', 'update-client', 'update-order', 'update-employee']

    def list_commands(self, ctx):
        return self.command_order

@click.group(cls=CustomOrderGroup)
def cli():
    pass

# Registro de cliente
@cli.command(name='new-client')
@click.argument('name')
@click.argument('num_people', type=int)
@click.argument('check_in')
@click.argument('check_out')
@click.argument('room_type')
@click.argument('total_cost', type=float)
@click.argument('reservation_proof')
def new_client(name, num_people, check_in, check_out, room_type, total_cost, reservation_proof):
    existing_data = excel_manager.read_excel('clients.xlsx')
    new_id = len(existing_data) + 1
    new_clients = pd.DataFrame({
        'id': [new_id], 
        'name': [name], 
        'num_people': [num_people],
        'check_in': [check_in],
        'check_out': [check_out],
        'room_type': [room_type],
        'total_cost': [total_cost],
        'reservation_proof': [reservation_proof]
    })
    data = pd.concat([existing_data, new_clients], ignore_index=True)
    excel_manager.write_excel('clients.xlsx', data)
    print(f"Client {name} with id {new_id} created successfully")   



# Restaurante
@cli.command(name='new-order')
@click.argument('name')
@click.argument('date')
@click.argument('dishes')
@click.argument('total_cost', type=float)
def new_order(name, date, dishes, total_cost):
    existing_data = excel_manager.read_excel('restaurant.xlsx')
    new_id = len(existing_data) + 1
    new_order = pd.DataFrame({
        'id': [new_id], 
        'name': [name], 
        'date': [date],
        'dishes': [dishes],
        'total_cost': [total_cost]
    })
    data = pd.concat([existing_data, new_order], ignore_index=True)
    excel_manager.write_excel('restaurant.xlsx', data)
    print(f"Order {name} with id {new_id} created successfully")

# Recursos humanos
@cli.command(name = 'new-employee')
@click.argument('name')
@click.argument('position')
@click.argument('address')
@click.argument('phone')
def new_employee(name, position, address, phone):
    existing_data = excel_manager.read_excel('employees.xlsx')
    new_id = len(existing_data) + 1
    new_employee = pd.DataFrame( {
        'id': [new_id], 
        'name': [name], 
        'position': [position],
        'address': [address],
        'phone': [phone]
    })
    data = pd.concat([existing_data, new_employee], ignore_index=True)
    excel_manager.write_excel('employees.xlsx', data)
    print(f"Employee {name} with id {new_id} created successfully")




#Eliminar cliente
@cli.command(name = 'delete-client')
@click.argument('id', type=int)
def delete_client(id):
    data = excel_manager.read_excel('clients.xlsx')
    client_index = data[data['id'] == id].index
    if(client_index.empty):
        print(f"Client with id {id} not found")
    else:
        data = data.drop(client_index)
        excel_manager.write_excel('clients.xlsx', data)
        print(f"Client with id {id} deleted successfully")

#Eliminar orden
@cli.command(name = 'delete-order')
@click.argument('id', type=int)
def delete_order(id):
    data = excel_manager.read_excel('restaurant.xlsx')
    order_index = data[data['id'] == id].index
    if(order_index.empty):
        print(f"Order with id {id} not found")
    else:
        data = data.drop(order_index)
        excel_manager.write_excel('restaurant.xlsx', data)
        print(f"Order with id {id} deleted successfully")

#Eliminar empleado
@cli.command(name = 'delete-employee')
@click.argument('id', type=int)
def delete_employee(id):
    data = excel_manager.read_excel('employees.xlsx')
    employee_index = data[data['id'] == id].index
    if(employee_index.empty):
        print(f"Employee with id {id} not found")
    else:
        data = data.drop(employee_index)
        excel_manager.write_excel('employees.xlsx', data)
        print(f"Employee with id {id} deleted successfully")




#Actualizar cliente
@cli.command(name = 'update-client')
@click.argument('id', type=int)
@click.option('--name', help='Name of the client')
@click.option('--num_people', type=int, help='Number of people')
@click.option('--check_in', help='Check in')
@click.option('--check_out', help='Check out')
@click.option('--room_type', help='Room type')
@click.option('--total_cost', type=float, help='Total cost')
@click.option('--reservation_proof', help='Reservation proof')
def update_client(id, name, num_people, check_in, check_out, room_type, total_cost, reservation_proof):
    data = excel_manager.read_excel('clients.xlsx')
    for index, client in data.iterrows():
        if client['id'] == id:
            if name is not None:
                data.at[index, 'name'] = name
            if num_people is not None:
                data.at[index, 'num_people'] = num_people
            if check_in is not None:
                data.at[index, 'check_in'] = check_in
            if check_out is not None:
                data.at[index, 'check_out'] = check_out
            if room_type is not None:
                data.at[index, 'room_type'] = room_type
            if total_cost is not None:
                data.at[index, 'total_cost'] = total_cost
            if reservation_proof is not None:
                data.at[index, 'reservation_proof'] = reservation_proof
            break
    excel_manager.write_excel('clients.xlsx', data)
    print(f"Client with id {id} updated successfully")


#Actualizar orden
@cli.command(name = 'update-order')
@click.argument('id', type=int)
@click.option('--name', help='Name of the order')
@click.option('--date', help='Date of the order')
@click.option('--dishes', help='Dishes')
@click.option('--total_cost', type=float, help='Total cost')
def update_order(id, name, date, dishes, total_cost):
    data = excel_manager.read_excel('restaurant.xlsx')
    for index, order in data.iterrows():
        if order['id'] == id:
            if name is not None:
                data.at[index, 'name'] = name
            if date is not None:
                data.at[index, 'date'] = date
            if dishes is not None:
                data.at[index, 'dishes'] = dishes
            if total_cost is not None:
                data.at[index, 'total_cost'] = total_cost
            break
    excel_manager.write_excel('restaurant.xlsx', data)
    print(f"Order with id {id} updated successfully")

#Actualizar empleado
@cli.command(name = 'update-employee')
@click.argument('id', type=int)
@click.option('--name', help='Name of the employee')
@click.option('--position', help='Position of the employee')
@click.option('--address', help='Address of the employee')
@click.option('--phone', help='Phone of the employee')
def update_employee(id, name, position, address, phone):
    data = excel_manager.read_excel('employees.xlsx')
    for index, employee in data.iterrows():
        if employee['id'] == id:
            if name is not None:
                data.at[index, 'name'] = name
            if position is not None:
                data.at[index, 'position'] = position
            if address is not None:
                data.at[index, 'address'] = address
            if phone is not None:
                data.at[index, 'phone'] = phone
            break
    excel_manager.write_excel('employees.xlsx', data)
    print(f"Employee with id {id} updated successfully")






if __name__ == '__main__':
    cli()