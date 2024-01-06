create database 1122150105_virgin;
use 1122150105_virgin;

create table usuarios (
    id int primary key auto_increment,
    nombre varchar(50),
    apellido varchar(50),
    correo varchar(50),
    contraseña varchar(50),
    fechadenacimiento date,
    pais varchar(50),
    estado varchar(50),
    domicilio varchar(50),
    tarjetacredito varchar(50),
    pagado boolean
);

create table navesEspaciales(
    id int primary key auto_increment,
    nombre varchar(50),
    modelo varchar(50),
    capacidad int
);
/*
Mark XLVI
• Discovery
• VSS Imagine
• Starship
• UTCH-TID31MX
• UTCH-TID32MX
*/

create table destinos(
    id int primary key auto_increment,
    nombre varchar(50),
    distancia int,
    costodia float(10,2)
);

create table viajes(
    id int primary key auto_increment,
    idusuario int,
    iddestino int,
    idnave int,
    fechadeinicio date,
    estatus varchar(50)
);

create table reservaciones(
    id int primary key auto_increment,
    idusuario int,
    idviaje int
);

create table bitacora(
    id int primary key auto_increment
    operacion varchar(50),
    nombreTabla varchar(50),
    fecha date
);

-- TRIGERS DESTINOS
DELIMITER //
CREATE TRIGGER destinosInsert AFTER INSERT ON destinos FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('INSERT', 'destinos', NOW());
END;
//

DELIMITER //
CREATE TRIGGER destinosUpdate AFTER UPDATE ON destinos FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('UPDATE', 'destinos', NOW());
END;
//

DELIMITER //
CREATE TRIGGER destinosDelete AFTER DELETE ON destinos FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('DELETE', 'destinos',NOW());
END;
//

-- TRIGERS NAVESESPACIALES
DELIMITER //
CREATE TRIGGER navesEspacialesInsert AFTER INSERT ON navesEspaciales FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('INSERT', 'navesEspaciales', NOW());
END;
//

DELIMITER //
CREATE TRIGGER navesEspacialesUpdate AFTER UPDATE ON navesEspaciales FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('UPDATE', 'navesEspaciales', NOW());
END;
//

DELIMITER //
CREATE TRIGGER navesEspacialesDelete AFTER DELETE ON navesEspaciales FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('DELETE', 'navesEspaciales',NOW());
END;
//

-- TRIGERS USUARIOS
DELIMITER //
CREATE TRIGGER usuariosInsert AFTER INSERT ON usuarios FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('INSERT', 'usuarios', NOW());
END;
//

DELIMITER //
CREATE TRIGGER usuariosUpdate AFTER UPDATE ON usuarios FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('UPDATE', 'usuarios', NOW());
END;
//

DELIMITER //
CREATE TRIGGER usuariosDelete AFTER DELETE ON usuarios FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('DELETE', 'usuarios',NOW());
END;
//

-- TRIGERS VIAJES
DELIMITER //
CREATE TRIGGER viajesInsert AFTER INSERT ON viajes FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('INSERT', 'viajes', NOW());
END;
//

DELIMITER //
CREATE TRIGGER viajesUpdate AFTER UPDATE ON viajes FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('UPDATE', 'viajes', NOW());
END;
//

DELIMITER //
CREATE TRIGGER viajesDelete AFTER DELETE ON viajes FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('DELETE', 'viajes',NOW());
END;
//

-- TRIGERS RESERVACIONES
DELIMITER //
CREATE TRIGGER reservacionesInsert AFTER INSERT ON reservaciones FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('INSERT', 'reservaciones', NOW());
END;
//

DELIMITER //
CREATE TRIGGER reservacionesUpdate AFTER UPDATE ON reservaciones FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('UPDATE', 'reservaciones', NOW());
END;
//

DELIMITER //
CREATE TRIGGER reservacionesDelete AFTER DELETE ON reservaciones FOR EACH ROW
BEGIN
    INSERT INTO bitacora (operacion, nombreTabla, fecha)
    VALUES ('DELETE', 'reservaciones',NOW());
END;
//


-- Vistas del viaje del usuario
CREATE VIEW viajesdelusuario AS
SELECT usuarios.nombre AS nombre_de_usuario,
       usuarios.apellido AS apellido_de_usuario,
       destinos.destino,
       viajes.nave,
       viajes.fecha AS fecha_del_viaje
FROM reservaciones
JOIN usuarios ON reservaciones.usuario_id = usuarios.id
JOIN viajes ON reservaciones.viaje_id = viajes.id
JOIN destinos ON viajes.destino_id = destinos.id;



-- Procedimiento almacenado de destinos
DELIMITER //
CREATE PROCEDURE insertarDestino(IN _nombre varchar(50),IN _distancia int,IN _costodia float(10,2))
BEGIN
    INSERT INTO destinos (nombre, distancia, costodia)
    VALUES (_nombre, _distancia, _costodia);
END;
//

DELIMITER //
CREATE PROCEDURE actualizarDestino(IN _id int, IN _nombre varchar(50),IN _distancia int,IN _costodia float(10,2))
BEGIN
    UPDATE destinos
    SET nombre = _nombre, distancia = _distancia, costodia = _costodia
    WHERE id = _id;
END;
//

DELIMITER //
CREATE PROCEDURE eliminarDestino(IN _id int)
BEGIN
    DELETE FROM destinos
    WHERE id = _id;
END;
//

--Insertar datos
--Usuarios
INSERT INTO usuarios (nombre, apellido, correo, contraseña, fechadenacimiento, pais, estado, domicilio, tarjetacredito, pagado) VALUES 
('Juan', 'Perez', 'juanito@hotmail.com', '123456', '2004-01-01', 'Mexico', 'Chihuahua', 'Calle 1', '123456789', true),
('Carlos', 'Rodriguez', 'carlitos@hotmail.com', '87654', '2003-03-07', 'Mexico', 'Jalizco', 'Calle 123', '987654321', true),
('Maria', 'Gomez', 'mariag@hotmail.com', '654321', '2002-05-10', 'Mexico', 'Sonora', 'Calle 456', '456789123', true),
('Ana', 'Lopez', 'anal@hotmail.com', '789123', '2001-08-15', 'Mexico', 'Durango', 'Calle 789', '321654987', true),
('Pedro', 'Martinez', 'pedrom@hotmail.com', '912345', '2000-11-20', 'Mexico', 'Sinaloa', 'Calle 012', '654321789', true);

--DESTINOS
CALL insertarDestino('Luna', 100, 50.00);
CALL insertarDestino('Marte', 200, 100.00);
CALL insertarDestino('Jupiter', 300, 150.00);
CALL insertarDestino('Saturno', 400, 200.00);
CALL insertarDestino('Urano', 500, 250.00);


--NAVES ESPACIALES
INSERT INTO navesEspaciales (nombre, modelo, capacidad) VALUES 
('Mark XLVI', 'MK46', 10),
('Discovery', 'DSC', 20),
('VSS Imagine', 'VSS', 30),
('Starship', 'STR', 40),
('UTCH-TID31MX', 'UTCH31', 50),
('UTCH-TID32MX', 'UTCH32', 60);

--VIAJES
INSERT INTO viajes (idusuario, iddestino, idnave, fechadeinicio, estatus) VALUES 
(1, 1, 1, '2021-01-01', 'En curso'),
(2, 3, 4, '2023-02-22', 'En curso'),
(3, 4, 2, '2025-03-13', 'En curso'),
(4, 2, 3, '2027-04-14', 'En curso'),
(5, 5, 5, '2028-05-25', 'En curso');

--RESERVACIONES
INSERT INTO reservaciones (idusuario, idviaje) VALUES 
(1, 1),
(2, 3),
(3, 2),
(4, 5),
(5, 4);


-- Consultas con vistas
SELECT * FROM viajesdelusuario;