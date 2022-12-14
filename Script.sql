CREATE DATABASE EstoqueVendas;

USE EstoqueVendas;

CREATE TABLE Cliente(
    Id_Cliente        INTEGER  PRIMARY KEY NOT NULL AUTO_INCREMENT,
    Nome_Cliente      VARCHAR (50) NOT NULL,
    Email_Cliente     VARCHAR (50) NOT NULL,
    Sobrenome_Cliente VARCHAR (50) NOT NULL,
    Tipo_Cliente      INT          NOT NULL,
    FOREIGN KEY (Tipo_Cliente) REFERENCES Tipo_Cliente(id_Tipo_Cliente)
);
CREATE TABLE Contato_Cliente (
	id_Contato_Cliente INTEGER   PRIMARY KEY NOT NULL AUTO_INCREMENT,
    Telefone_Cliente   VARCHAR (50) NOT NULL,
    Celular_Cliente   VARCHAR (50) NOT NULL,
    Cliente            INT          NOT NULL,
    FOREIGN KEY (Cliente) REFERENCES Cliente(Id_Cliente)
);
CREATE TABLE Contato_Fornecedor (
    id_Contato_Fornecedor INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
    Telefone_Fornecedor   VARCHAR (50) NOT NULL,
    Celular_Fornecedor    VARCHAR (50) NOT NULL,
    Fornecedor            INT          NOT NULL,
    FOREIGN KEY (Fornecedor) REFERENCES Fornecedor(Id_Fornecedor)
);
CREATE TABLE Endereco (
    id_Endereco INTEGER  PRIMARY KEY NOT NULL AUTO_INCREMENT,
    Rua         VARCHAR (50) NOT NULL,
    Bairro      VARCHAR (50) NOT NULL,
    num_local   VARCHAR (50) NOT NULL,
    CEP         VARCHAR (50) NOT NULL,
    Cliente     INT          NOT NULL,
    Fornecedor  INT          NOT NULL,
    FOREIGN KEY (Cliente) REFERENCES Cliente(Id_Cliente), 
    FOREIGN KEY (Fornecedor) REFERENCES Fornecedor(Id_Fornecedor)

);
CREATE TABLE Fornecedor (
    Id_Fornecedor    INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
    Nome_Fornecedor  VARCHAR (50) NOT NULL,
    CNPJ_Fornecedor  VARCHAR (50) NOT NULL,
    Email_Fornecedor VARCHAR (50) NOT NULL
);
CREATE TABLE Fornecedor_Produto (
    Fornecedor INT NOT NULL,
	Produto    INT NOT NULL, 
    FOREIGN KEY (Fornecedor) REFERENCES Fornecedor(Id_Fornecedor), 
    FOREIGN KEY (Produto) REFERENCES Produto(Id_Produto)
);
CREATE TABLE Produto (
	Id_Produto         INTeger  PRIMARY KEY NOT NULL AUTO_INCREMENT,
	Codigo_Barras      VARCHAR (50) NULL,
    Nome_Produto       VARCHAR (50) NOT NULL,
    Quantidade_Estoque INT          NULL,
    Preco_Venda        FLOAT (53)   NOT NULL,
    NCM                VARCHAR (50) NOT NULL,
    Preco_Bruto        FLOAT (53)   NOT NULL,
    Data_Validade      DATE         NOT NULL
);
CREATE TABLE Produto_Venda (
    FK_Produto INT NOT NULL,
    FK_Venda   INT NOT NULL,
    FOREIGN KEY (FK_Produto) REFERENCEs Produto(Id_Produto),
    FOREIGN KEY (FK_Venda) REFERENCES Venda(id_Venda)
);
CREATE TABLE Tipo_Cliente (
    id_Tipo_Cliente INTEGER   PRIMARY KEY NOT NULL AUTO_INCREMENT,
    CPF             VARCHAR (50) NULL,
    CNPJ            VARCHAR (50) NULL,
    Tipo_Cliente    VARCHAR (50) NOT NULL
);
CREATE TABLE Venda (
    id_Venda           INTEGER PRIMARY KEY  NOT NULL,
    FK_Cliente            INT  NOT NULL,
    Quantidade_Produto INT  NOT NULL,
    Data_Venda        DATE NOT NULL,
    FOREIGN KEY (FK_Cliente) REFERENCES Tipo_Cliente (id_Tipo_Cliente)
);
CREATE TABLE Usuario (
    id_Usuario        INTEGER     PRIMARY KEY  NOT NULL AUTO_INCREMENT,
    Email_Usuario     VARCHAR (50) NOT NULL,
    Senha_Usuario     VARCHAR (50) NOT NULL,
    Nome_Usuario      VARCHAR (50) NOT NULL,
    Sobrenome_Usuario VARCHAR (50) NOT NULL
);
CREATE TABLE Unidade_Medida (
    Id_Unidade_Medida INTEGER    PRIMARY KEY   NOT NULL AUTO_INCREMENT,
    Unidade           VARCHAR (50) NULL,
    Produto       INT          NOT NULL,
    Litros            VARCHAR (50) NULL,
    Metros            VARCHAR (50) NULL,
    Kgs               VARCHAR (50) NULL,
    FOREIGN KEY (Produto) REFERENCES Produto (Id_Produto)
);


INSERT INTO Cliente (Nome_Cliente,Email_Cliente,Sobrenome_Cliente,Tipo_Cliente) VALUES
('DENIS','DENI@gmail.com','ALCANTARA',1),
('GUILHERME','GUI@gmail.com','MOURA',2),
('MIGUEL','MIGUEL@gmail.com','VIEIRA',3),
('ROBERT','ROBERT@gmail.com','AGUIAR',4),
('THALIA','THA_LIA@gmail.com','FERREIRA',5),
('JOAO','JOAO@gmail.com','TELES',6),
('JOAO','JOAOG@gmail.com','CRUZ',7),
('ROGERIO','ROGER@gmail.com','VIEIRA',8),
('LUIS','LUI@gmail.com','DANTAS',9),
('ROBERTO','ROBE@gmail.com','POJUCA',10),
('ELBA','ELBA@gmail.com','SANTOS',11),
('ITALO','oli@gmail.com','Souza',12)

SELECT * FROM Cliente;


INSERT INTO Endereco (Rua,Bairro,num_local,CEP,Cliente,Fornecedor) VALUES
('PASSARINHO','LOBATO',423,45259979,13,1),
('KATIA III','RIO GRANDE',708,567983999,14,2),
('NAPOLEAO','RIBEIRA',093,45696459,15,3),
('LOURO','DENDE',23,435542999,16,4),
('RIO VERDE','RIO GARANDE',703,42318999,17,5),
('VALEUM','RIO MARAJOS',124,45678999,18,6),
('RIO NOVO','RIO MARAJOS',823,45098999,19,7),
('CHAPEU','RIO BRANCO',12,85678873,20,8),
('VILAS','RIOMAR',13,95678439,21,9),
('PEDRO II','RIO MARAJOS',893,45678659,22,10)

SELECT * FROM Endereco;


iNSERT INTO Fornecedor(Nome_Fornecedor,CNPJ_Fornecedor,Email_Fornecedor) VALUES 
('ORTIFRUTISSA','46535666743','ORTI_FRUTISSA@GMAIL.COM'),
('FRIGORIFICOONE','8754566743','FRIGOONE@GMAIL.COM'),
('LIMPEZABA','46530087843','P.LIMPEZA@GMAIL.COM'),
('POLPASBASSA','96533442293','POLPASBASSA@GMAIL.COM'),
('DOCESBA','93477539000117','DOCESBA@GMAIL.COM')

SELECT * FROM Fornecedor;


INSERT INTO Contato_Fornecedor(Telefone_Fornecedor,Celular_Fornecedor,Fornecedor)VALUES
('3734-2521','74 9 8181-9678',1),
('3984-4607','74 9 8907-7778',2),
('3457-9836','74 9 9871-9098',3),
('3345-6987','74 9 9435-9753',4),
('6745-6237','71 9 8935-9023',5)

SELECT * FROM Contato_Fornecedor


INSERT INTO Produto(Codigo_Barras,Nome_Produto,Quantidade_Estoque,Preco_Venda,NCM,Preco_Bruto,Data_Validade)VALUES
('62261763627','TOMATE',100,5.50,45678456,5.0,'2023-04-24'),
('62261763698','CARNE',100,45.50,45678876,35,'2023-06-24'),
('62261763627','ALFACE',100,1.50,45678456,1.0,'2023-07-24'),
('62261763627','DOCEDELEITE',100,25.50,45458456,20.0,'2023-08-24'),
('62261763627','SAL',100,0.50,56787656,0.25,'2030-01-10'),
('62261763628','A??UCAR',100,5.50,45678486,5.0,'2023-01-24'),
('62245763698','CAMARAO',100,45.50,45675676,40,'2023-06-24'),
('62261763627','UVA',100,10.50,45678456,8.0,'2023-07-24'),
('62269263627','CHOCOLATE',100,25.50,45478456,20.0,'2023-08-24'),
('62261533627','MORANGO',100,10.50,56729656,7.25,'2023-10-10'),
('62261573827','DETERGENTE',100,1.50,56729656,0.99,'2021-10-10'),
('62261533627','POLPADEMORANGO',100,1,56729656,0.50,'2023-11-10')

SELECT * FROM Produto;


INSERT INTO Unidade_Medida(Unidade,Produto,Kgs) VALUES
('1',1,'0.20kg'),
('1',2,'1kg'),
('1',3,'0.10kg'),
('1',4,'0.500'),
('1',5,'1kg'),
('1',6,'1kg'),
('1',7,'0.020kg'),
('1',8,'0.020kg'),
('1',9,'0.10kg'),
('1',10,'0.30kg'),
('1',11,'0.500L'),
('1',12,'0.100L')

SELECT * FROM Unidade_Medida;


INSERT INTO Contato_Cliente(Telefone_Cliente,Celular_Cliente,Cliente) VALUES
('(71) 3815-8345','(71) 96855-7754',13),
('(77) 2871-4327','(77) 99121-7184',14),
('(71) 3657-5421','(71) 97314-81254',15),
('(71) 3815-8545','(71) 92455-7654',16),
('(74) 3815-8765','(74) 96785-7754',17),
('(75) 3815-8045','(75) 96235-7984',18),
('(73) 3615-8045','(73) 96855-3954',19),
('(71) 3215-8045','(71) 95671-7776',20),
('(77) 3115-8045','(77) 96855-5287',21),
('(75) 6815-8045','(75) 96845-7754',22),
('(73) 3813-8045','(73) 92855-7754',23),
('(74) 3235-8045','(74) 96755-7754',24)

SELECT * FROM Contato_Cliente;


INSERT INTO Tipo_Cliente(cpf,Tipo_Cliente) VALUES
('540.167.535-62','Pessoa Fisica'),
('02.740.207/0001-28','Pessoa Juridica'),
('019.388.465-83','Pessoa Fisica'),
('85.304.418/0001-45','Pessoa Juridica'),
('207.102.005-79','Pessoa Fisica'),
('83.515.745/0001-10','Pessoa Juridica'),
('595.340.335-61','Pessoa Fisica'),
('12.017.833/0001-44','Pessoa Juridica'),
('017.380.305-98','Pessoa Fisica'),
('45.612.131/0001-68','Pessoa Juridica'),
('607.346.845-84','Pessoa Fisica'),
('91.548.682/0001-27','Pessoa Juridica')

SELECT * FROM Tipo_Cliente;


INSERT INTO Venda (id_Venda,fk_cliente,quantidade_produto,data_venda) VALUES
(2,1,5,'2022-09-03'),
(3,2,2,'2022-09-04'),
(7,3,7,'2022-09-07'),
(10,2,9,'2022-09-14'),
(5,3,7,'2022-09-20'),
(6,4,3,'2022-09-13'),
(9,6,8,'2022-09-23'),
(8,7,30,'2022-09-30'),
(13,8,1,'2022-09-01')

SELECT * FROM Venda;


INSERT INTO Usuario(Email_Usuario,Senha_Usuario,Nome_Usuario,Sobrenome_Usuario) VALUES('STEVE@GMAIL.COM','Steve@25','STEVE','HORUS');

SELECT * FROM Usuario;


INSERT INTO Produto_Venda VALUES
(1,2),
(2,9),
(5,8),
(4,6),
(3,7),
(9,5),
(10,10),
(8,13),
(7,3)

SELECT * FROM Produto_Venda;


INSERT INTO Fornecedor_Produto VALUES
(1,1),
(2,2),
(1,3),
(5,4),
(2,5),
(5,6),
(2,7),
(1,8),
(5,9),
(1,10),
(3,11),
(4,12)
 
SELECT * FROM Fornecedor_Produto;
















