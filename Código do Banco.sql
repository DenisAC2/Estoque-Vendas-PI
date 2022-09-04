CREATE TABLE Cliente(
    Id_Cliente        INTEGER  PRIMARY KEY AUTOINCREMENT NOT NULL,
    Nome_Cliente      VARCHAR (50) NOT NULL,
    Email_Cliente     VARCHAR (50) NOT NULL,
    Sobrenome_Cliente VARCHAR (50) NOT NULL,
    Tipo_Cliente      INT          NOT NULL,
    FOREIGN KEY (Tipo_Cliente) REFERENCES Tipo_Cliente(id_Tipo_Cliente)
);
CREATE TABLE Contato_Cliente (
	id_Contato_Cliente INTEGER   PRIMARY KEY AUTOINCREMENT NOT NULL,
    Telefone_Cliente   VARCHAR (50) NOT NULL,
    Celular_Cliente   VARCHAR (50) NOT NULL,
    Cliente            INT          NOT NULL,
    FOREIGN KEY (Cliente) REFERENCES Cliente(Id_Cliente)
);
CREATE TABLE Contato_Fornecedor (
    id_Contato_Fornecedor INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    Telefone_Fornecedor   VARCHAR (50) NOT NULL,
    Celular_Fornecedor    VARCHAR (50) NOT NULL,
    Fornecedor            INT          NOT NULL,
    FOREIGN KEY (Fornecedor) REFERENCES Fornecedor(Id_Fornecedor)
);
CREATE TABLE Endereco (
    id_Endereco INTEGER  PRIMARY KEY AUTOINCREMENT NOT NULL,
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
    Id_Fornecedor    INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
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
	Id_Produto         INTeger  PRIMARY KEY AUTOINCREMENT NOT NULL,
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
    id_Tipo_Cliente INTEGER   PRIMARY KEY AUTOINCREMENT NOT NULL,
    CPF             VARCHAR (50) NULL,
    CNPJ            VARCHAR (50) NULL,
    Tipo_Cliente    VARCHAR (50) NOT NULL
);
CREATE TABLE Venda (
    id_Venda           INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    FK_Cliente            INT  NOT NULL,
    Quantidade_Produto INT  NOT NULL,
    Data_Venda        DATE NOT NULL,
    FOREIGN KEY (FK_Cliente) REFERENCES Tipo_Cliente (id_Tipo_Cliente)
);
CREATE TABLE Usuario (
    id_Usuario        INTEGER     PRIMARY KEY AUTOINCREMENT NOT NULL,
    Email_Usuario     VARCHAR (50) NOT NULL,
    Senha_Usuario     VARCHAR (50) NOT NULL,
    Nome_Usuario      VARCHAR (50) NOT NULL,
    Sobrenome_Usuario VARCHAR (50) NOT NULL
);
CREATE TABLE Unidade_Medida (
    Id_Unidade_Medida INTEGER    PRIMARY KEY AUTOINCREMENT NOT NULL,
    Unidade           VARCHAR (50) NULL,
    Produto       INT          NOT NULL,
    Litros            VARCHAR (50) NULL,
    Metros            VARCHAR (50) NULL,
    Kgs               VARCHAR (50) NULL,
    FOREIGN KEY (Produto) REFERENCES Produto (Id_Produto)
);