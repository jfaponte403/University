create database multinivel;
use multinivel;

create table proveedor(
	id varchar(12) NOT NULL PRIMARY KEY,
    nombre varchar(12) NOT NULL,
    apellido varchar(12) NOT NULL,
    telefono varchar(12) NOT NULL
);

create table producto(
	id varchar(12) NOT NULL PRIMARY KEY,
    nombre varchar(12) NOT NULL,
    cantidad int NOT NULL, 
    precio long NOT NULL
);

create table proveedor_producto(
	id_proveedor varchar(12),
    id_producto varchar(12),
	foreign key (id_proveedor)
		references proveedor(id),
	foreign key (id_producto)
		references producto (id)
);

alter table proveedor add column website varchar(30);

insert into proveedor values("12345", "Juan", "Robayo", "3006049461", "www.juan.com");
insert into proveedor values("23456", "Quiles", "Gonzalez", "3206043461", "www.quiles.com");
insert into proveedor values("34567", "Brayan", "Hernandez", "3206449471", "www.brayan.com");

insert into producto values("01", "Arroz", 30, 3200);
insert into producto values("02", "Azucar", 10, 5500);
insert into producto values("03", "Sal", 20, 1500);

insert into proveedor_producto values("12345", "01");
insert into proveedor_producto values("12345", "02");
insert into proveedor_producto values("12345", "03");
insert into proveedor_producto values("23456", "02");

select * from proveedor;
select * from producto;
select * from proveedor_producto;

select producto.nombre, cantidad, precio 
	from producto, proveedor, proveedor_producto 
	where proveedor_producto.id_proveedor = proveedor.id 
		AND proveedor_producto.id_producto = producto.id AND proveedor.id = "12345";

