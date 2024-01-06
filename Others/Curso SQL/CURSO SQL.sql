Select *
From	empleados;
Select *
From estados;
Select *
From puestos;

insert into puestos
values (1,'na',0,1);
insert into puestos
values (2,'na',0,1);
insert into puestos
values (3,'na',0,1);

insert into departamentos
values (1, 'RECURSOS HUMANOS');
insert into departamentos
values (2, 'GERENCIA');
insert into departamentos
values (3, 'VENTAS');


INSERT INTO estados
Values (6,'CHIHUAHUA');
INSERT INTO estados
Values (7,'CDMX');
INSERT INTO estados
Values (8,'NUEVO LEON');
INSERT INTO estados
Values (9,'AGUASCALIENTES');

insert into empleados
values (1,'QUINTANA','MERINO','ARIEL','M','2001-10-25','ASDF','ASDF','CALLESOTA',6);
insert into empleados
values (2,'CAMELAS','SHIDO','BETO','M','1910-02-15','OTIP','OTIP','PORHAY',6);
insert into empleados 
values (3,'RODRIGES','GANZO','PAMELA','F','1945-03-29','ASDJ','FSAS','ALLA',9);
insert into empleados
values (4,'ESE','MERO','WEY','M','2010-05-04','WSAS','ASDW','ELPUENTE',8);


insert into empleadopuestos
values (1,1,1);
insert into empleadopuestos
values (2,2,2);
insert into empleadopuestos
values (3,3,3);

update puestos
set nombre = 'AUXILIAR DE NOMINA', 
	sueldo = 8355,
    iddepartamento = 1
where idpuesto = 1;
update puestos
set nombre = 'SECRETARIA', 
	sueldo = 1008.5,
    iddepartamento = 3
where idpuesto = 2;
update puestos
set nombre = 'JEFESOTe', sueldo = 9999.99, iddepartamento = 2
where idpuesto = 3;


SET SQL_SAFE_UPDATES = 0;

Delete From puestos
Where nombre = 'prueba';

Select apellidoprimero, nombre
from empleados
where apellidoprimero = 'QUINTANA';

Select *
from departamentos a
inner join puestos b
	on a.iddepartamento = b.iddepartamento;

Select a.nombre, b.nombre
from departamentos a
inner join puestos b
	on a.iddepartamento = b.iddepartamento
Where a.iddepartamento = 1;

Select a.nombre, b.nombre
From departamentos a
inner join puestos b
inner join empleadopuestos c
	on a.iddepartamento = b.iddepartamento = c.idempleado

