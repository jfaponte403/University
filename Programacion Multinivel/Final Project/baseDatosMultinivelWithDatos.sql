create database multinivel;
use multinivel;

CREATE TABLE ciudad (
	id INT AUTO_INCREMENT,
	ciudad VARCHAR(50) NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE sucursal (
	id INT AUTO_INCREMENT,
	nombre VARCHAR(50) NOT NULL,
	id_ciudad INT NOT NULL,
	PRIMARY KEY (id),
	FOREIGN KEY (id_ciudad) REFERENCES ciudad(id)
);

CREATE TABLE vendedor (
	identificacion VARCHAR(12),
	nombre VARCHAR(50) NOT NULL,
	apellido VARCHAR(50) NOT NULL,
	edad INT NOT NULL,
	id_sucursal INT NOT NULL,
	PRIMARY KEY (identificacion),
	FOREIGN KEY (id_sucursal) REFERENCES sucursal(id)
);

CREATE TABLE moto (
	id INT AUTO_INCREMENT,
	modelo INT NOT NULL,
	linea VARCHAR(12) NOT NULL,
	cilindraje INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE cliente (
	identificacion VARCHAR(12) NOT NULL,
	nombre VARCHAR(50) NOT NULL,
	apellido VARCHAR(50) NOT NULL,
	edad INT NOT NULL,
	correo VARCHAR(100) NULL,
	PRIMARY KEY (identificacion)
);

CREATE TABLE tipo_pago (
	id INT AUTO_INCREMENT,
	tipo_pago VARCHAR(50),
	PRIMARY KEY (id)
);

INSERT INTO tipo_pago(tipo_pago) VALUES('Credito con sucursal');
INSERT INTO tipo_pago(tipo_pago) VALUES('Credito con banco');
INSERT INTO tipo_pago(tipo_pago) VALUES('Efectivo');

CREATE TABLE venta (
	id INT AUTO_INCREMENT NOT NULL,
	id_vendedor VARCHAR(12) NOT NULL,
	id_moto INT NOT NULL,
	id_cliente VARCHAR(12) NOT NULL,
	id_tipo_pago INT NOT NULL,
	fecha DATE NOT NULL,
	monto BIGINT NOT NULL,
	PRIMARY KEY (id),
	FOREIGN KEY (id_vendedor) REFERENCES vendedor(identificacion), 
	FOREIGN KEY (id_moto) REFERENCES moto(id), 
	FOREIGN KEY (id_cliente) REFERENCES cliente(identificacion),
	FOREIGN KEY (id_tipo_pago) REFERENCES tipo_pago(id)
);

CREATE TABLE pago (
	id INT AUTO_INCREMENT,
	id_venta INT NOT NULL,
	monto BIGINT NOT NULL,
	cuotas INT NOT NULL,
	fecha_pago DATE NOT NULL,
	PRIMARY KEY (id, id_venta),
	FOREIGN KEY (id_venta) REFERENCES venta(id) 
);

/* Tabla ciudad */
insert into ciudad(ciudad) values ('Bogota');
insert into ciudad(ciudad) values ('Cali');
insert into ciudad(ciudad) values ('Medellin');
insert into ciudad(ciudad) values ('Barranquilla');
insert into ciudad(ciudad) values ('Bucaramanga');
insert into ciudad(ciudad) values ('Choco');
insert into ciudad(ciudad) values ('Huila');
insert into ciudad(ciudad) values ('Pasto');
insert into ciudad(ciudad) values ('Leticia');

/* Tabla Sucursal */
insert into sucursal(nombre, id_ciudad) values('Kennedy Motors', 1);
insert into sucursal(nombre, id_ciudad) values('Cali Motors', 2);
insert into sucursal(nombre, id_ciudad) values('Medellin Motors', 3);
insert into sucursal(nombre, id_ciudad) values('Barranquilla Motors', 4);
insert into sucursal(nombre, id_ciudad) values('Bucaramanga Motors', 5);
insert into sucursal(nombre, id_ciudad) values('Choco Motors', 6);
insert into sucursal(nombre, id_ciudad) values('Huila Motors', 7);
insert into sucursal(nombre, id_ciudad) values('Pasto Motors', 8);
insert into sucursal(nombre, id_ciudad) values('Leticia Motors', 9);

/* Tabla Vendedor */
insert into vendedor values('1001320300', 'Jhonattan', 'Aponte', 20, 1);
insert into vendedor values('1001320310', 'Faihd', 'Pineda', 33, 2);
insert into vendedor values('1001320320', 'Quiles', 'Gonzales', 26, 3);
insert into vendedor values('1001320329', 'Brayan', 'Peña', 23, 4);
insert into vendedor values('1001325300', 'Juan', 'Robayo', 28, 5);
insert into vendedor values('1004320300', 'David', 'Casallas', 20, 6);
insert into vendedor values('1031320300', 'Diego', 'Ruiz', 50, 7);
insert into vendedor values('1201320300', 'Miguel', 'Paredez', 30, 8);
insert into vendedor values('1011320300', 'Ana', 'Cante', 29, 9);

/* Tabla moto */
insert into moto(modelo, linea, cilindraje) values(2023, 'FZ 2.0', 150);
insert into moto(modelo, linea, cilindraje) values(2023, 'YCZ', 150);
insert into moto(modelo, linea, cilindraje) values(2023, 'R15', 150);
insert into moto(modelo, linea, cilindraje) values(2023, 'R1', 1000);
insert into moto(modelo, linea, cilindraje) values(2023, 'R3', 300);
insert into moto(modelo, linea, cilindraje) values(2022, 'R6', 600);
insert into moto(modelo, linea, cilindraje) values(2023, 'R7', 600);
insert into moto(modelo, linea, cilindraje) values(2002, 'DT', 150);
insert into moto(modelo, linea, cilindraje) values(2023, 'XTZ', 250);
insert into moto(modelo, linea, cilindraje) values(2022, 'MT03', 300);
insert into moto(modelo, linea, cilindraje) values(2023, 'MT07', 700);
insert into moto(modelo, linea, cilindraje) values(2023, 'MT09', 900);

/* Tabla cliente */
insert into cliente values('1022', 'Juanito', 'Ruiz', 20, 'Juan@correo.com');
insert into cliente values('1023', 'Ana', 'Peña', 20, 'Juan@correo.com');
insert into cliente values('1024', 'Danna', 'Aponte', 20, 'Juan@correo.com');
insert into cliente values('1025', 'Diego', 'Navaja', 20, 'Juan@correo.com');
insert into cliente values('1026', 'Jhon', 'Ronaldo', 20, 'Juan@correo.com');
insert into cliente values('1027', 'David', 'Cepul', 20, 'Juan@correo.com');
insert into cliente values('1028', 'Quiles', 'Pinzon', 20, 'Juan@correo.com');

/* tabla venta */
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320300', 2, '1022', 2, '2022-10-02', 14000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320310', 3, '1023', 1, '2022-10-03', 15000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320300', 4, '1024', 3, '2022-10-04', 13000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320310', 5, '1025', 1, '2022-12-05', 12000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320300', 6, '1026', 2, '2022-11-06', 17000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320320', 7, '1027', 3, '2022-12-07', 13000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320329', 8, '1028', 1, '2022-11-08', 9000000);
insert into venta(id_vendedor, id_moto, id_cliente, id_tipo_pago, fecha, monto) values('1001320329', 9, '1024', 1, '2021-09-09', 14500000);

/* Tabla pago */
insert into pago(id_venta, monto, cuotas, fecha_pago) values(3, 14000000, 0, '2022-12-10');
insert into pago(id_venta, monto, cuotas, fecha_pago) values(4, 140000, 36, '2022-11-15');
insert into pago(id_venta, monto, cuotas, fecha_pago) values(5, 150000, 24, '2022-10-15');
insert into pago(id_venta, monto, cuotas, fecha_pago) values(6, 160000, 12, '2022-12-10');
insert into pago(id_venta, monto, cuotas, fecha_pago) values(7, 1200000, 48, '2022-12-10');