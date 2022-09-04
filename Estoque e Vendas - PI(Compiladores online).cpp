#include <iostream>
#include <stdio.h>
#include <string>
// includes de cabecalhos
using namespace std;
// informar qual forma de escrita vamos utilizar e encurtar
int letra, retorno;
class Estoque_Vendas {
  // cria a class
public:
  // define publico todo o conteudo abaixo do comando
  string Email_Usuario, Senha_Usuario, Nome_Usuario;
  int cont_Usu = 0;

  int retorno, letra;

  int ID_Endereco = 0;
  string Rua_Endereco[51], Bairro_Endereco[51];
  int Cliente_Fornecedor[51], num_Local_Endereco[51], CEP_Endereco[51];
  int Cliente[51], Fornecedor[51];

  int Quantidade_Estoque[51], Codigo_Barra[51], NCM[51], ID_Produto = 0;
  float Preco_Venda[51], Preco_Bruto[51];
  string Nome_Produto[51], Data_Validade[51], Unidade_Medida[51];

  int Tipo_Cliente[51], CPF_Cliente[51], CNPJ_Cliente[51], Telefone_Cliente[51],
      Celular_Cliente[51], ID_Cliente = 0;
  string Nome_Cliente[51], Email_Cliente[51];

  int CNPJ_Fornecedor[51], Telefone_Fornecedor[51], Celular_Fornecedor[51],
      ID_Fornecedor = 0;
  string Nome_Fornecedor[51], Email_Fornecedor[51];
  int Id_Produto_Fornecido[51], cont_Pro_For;

  int opcao_main, opcao_modificar, opc_mostrar;
  int id_modificar;

  int opc;

  int consulta_unica;

  int ID_Vendas = 0, Compra_CLi[51], Quant_Prod_Vendido[51], Cad_Vendas[51],
      id_pro_Vendido[51], Contador_Vendas = 0;
  string Data_Venda[51];
  float Valor_Venda[51], Lucro_Venda[51], Valor_Bruto_Venda[51];

  int cont;

  // criamos as variaveis no incio do class
  void all_codes() {
    // craimos um void para comportar todos os codigos
    do {
      // criamos um DO para repetir os comandos ate que o valor da variavel seja
      // o do WHILE
      cout << "                                    " << endl;
      cout << "Digite: " << endl;
      cout << "1 - Para cadastrar um Usuario " << endl;
      cout << "2 - Para cadastrar um Fornecedor " << endl;
      cout << "3 - Para cadastrar um Cliente " << endl;
      cout << "4 - Para cadastrar um Produto " << endl;
      cout << "5 - Para cadastrar um Endereco " << endl;
      cout << "6 - Para cadastrar uma Venda " << endl;
      cout << "7 - Para modificar um Cadastro " << endl;
      cout << "8 - Para consultar os Cadastros" << endl;
      cout << "9 - Para sair do Programa " << endl;
      do {
        do {
          retorno = scanf("%d", &opcao_main);
          do {
            letra = getchar();
          } while (letra != '\n');
          if (retorno == 0) {
            cout << "Digite um valor numerico." << endl;
          }
        } while (retorno == 0);
        if (opcao_main < 0) {
          cout << "Digite um numero positivo." << endl;
        }
      } while (opcao_main < 0);
      // insersao de valor na variavel para que o switch comece e para terminar
      // o DO
      switch (opcao_main) {
        // iniciamos o switch com o valor da variavel opcao_main
      case 1:
        // criamos o primeiro case
        cout << "                                    " << endl;
        cout << "Ola, vamos comecar o seu cadastro!" << endl;
        cout << "Primeiro digite o seu nome: " << endl;
        getline(cin, Nome_Usuario);
        cout << "Email para login e contato: " << endl;
        getline(cin, Email_Usuario);
        cout << "Agora crie uma senha de acesso: " << endl;
        getline(cin, Senha_Usuario);
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        cont_Usu = 1;
        break;
        // quebramos o efeito domino com o break e voltamos para o looping do
        // DO-WHILE
      case 2:
        if (ID_Produto == 0) {
          cout << "Voce nao tem um Produto Cadastrado para Cadastrar um "
                  "Fornecedor! "
               << endl;
          break;
        }
        cout << "                                    " << endl;
        cout << "Ola, vamos comecar o seu cadastro!" << endl;
        cout << "O Nome do Fornecedor e: " << endl;
        getline(cin, Nome_Fornecedor[ID_Fornecedor]);
        cout << "O CNPJ do Fornecedor e: " << endl;
        do {
          do {
            retorno = scanf("%d", &CNPJ_Fornecedor[ID_Fornecedor]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (CNPJ_Fornecedor[ID_Fornecedor] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (CNPJ_Fornecedor[ID_Fornecedor] < 0);
        cout << "O Email do Fornecedor e: " << endl;
        getline(cin, Email_Fornecedor[ID_Fornecedor]);
        cout << "O Telefone do Fornecedor e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Telefone_Fornecedor[ID_Fornecedor]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Telefone_Fornecedor[ID_Fornecedor] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Telefone_Fornecedor[ID_Fornecedor] < 0);
        cout << "O Celular do Fornecedor e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Celular_Fornecedor[ID_Fornecedor]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Celular_Fornecedor[ID_Fornecedor] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Celular_Fornecedor[ID_Fornecedor] < 0);
        cout << "O ID do Produto Fornecido e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Id_Produto_Fornecido[ID_Fornecedor]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Id_Produto_Fornecido[ID_Fornecedor] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Id_Produto_Fornecido[ID_Fornecedor] < 0);
        do {
          if (Id_Produto_Fornecido[ID_Fornecedor] > ID_Produto) {
            cout << "Este ID nao existe! " << endl;
            cout << "Digite novamente. " << endl;
            do {
              do {
                retorno = scanf("%d", &Id_Produto_Fornecido[ID_Fornecedor]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Id_Produto_Fornecido[ID_Fornecedor] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Id_Produto_Fornecido[ID_Fornecedor] < 0);
          }
        } while (Id_Produto_Fornecido[ID_Fornecedor] > ID_Produto);
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        ID_Fornecedor++;
        cont_Pro_For++;
        // adicionamos +1 para a varivel, para que nao faca a substituicao de
        // cadastros futuros e para identificacao do cliente
        break;
      case 3:
        cout << "                                    " << endl;
        cout << "Ola, vamos comecar o seu cadastro!" << endl;
        cout << "O Nome do Cliente e: " << endl;
        getline(cin, Nome_Cliente[ID_Cliente]);
        cout << "O Email do Cliente e: " << endl;
        getline(cin, Email_Cliente[ID_Cliente]);
        do {
          cout << "Digite: " << endl;
          cout << "1 - Se o Cliente for uma pessoa fisica " << endl;
          cout << "2 - Se o Cliente for uma pessoa juridica " << endl;
          cout << "3 - Para cancelar o Cadastro " << endl;
          do {
            do {
              retorno = scanf("%d", &Tipo_Cliente[ID_Cliente]);
              do {
                letra = getchar();
              } while (letra != '\n');
              if (retorno == 0) {
                cout << "Digite um valor numerico." << endl;
              }
            } while (retorno == 0);
            if (Tipo_Cliente[ID_Cliente] < 0) {
              cout << "Digite um numero positivo." << endl;
            }
          } while (Tipo_Cliente[ID_Cliente] < 0);
          switch (Tipo_Cliente[ID_Cliente]) {
          case 1:
            // criamos um if para sabermos qual o tipo de cliente estamos
            // cadastrando, assim conseguimos inserir CPF ou CNPJ
            cout << "O CPF do Cliente e: " << endl;
            do {
              do {
                retorno = scanf("%d", &CPF_Cliente[ID_Cliente]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (CPF_Cliente[ID_Cliente] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (CPF_Cliente[ID_Cliente] < 0);
            break;
          case 2:
            // caso nao seja uma pessoa fisica, pedimos o CNPJ, cortando o
            // trabalho e deixando as variaveis utilizaveis, em vez de deixar
            // elas paradas
            cout << "O CNPj do Cliente e: " << endl;
            do {
              do {
                retorno = scanf("%d", &CNPJ_Cliente[ID_Cliente]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (CNPJ_Cliente[ID_Cliente] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (CNPJ_Cliente[ID_Cliente] < 0);
            break;
          case 3:
            break;
          default:
            cout << "Esta opcao nao existe!" << endl;
            break;
          }
        } while (Tipo_Cliente[ID_Cliente] != 3);
        if (Tipo_Cliente[ID_Cliente] == 3) {
          cout << "Cadastro cancelado. " << endl;
          break;
        }
        cout << "O Telefone do Cliente e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Telefone_Cliente[ID_Cliente]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Telefone_Cliente[ID_Cliente] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Telefone_Cliente[ID_Cliente] < 0);
        cout << "O Celular do Cliente e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Celular_Cliente[ID_Cliente]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Celular_Cliente[ID_Cliente] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Celular_Cliente[ID_Cliente] < 0);
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        ID_Cliente++;
        break;
      case 4:
        cout << "                                    " << endl;
        cout << "Ola, vamos comecar o seu cadastro!" << endl;
        cout << "O Nome do Produto e: " << endl;
        getline(cin, Nome_Produto[ID_Produto]);
        cout << "A Data de Validade do Produto e: " << endl;
        getline(cin, Data_Validade[ID_Produto]);
        cout << "Qual a Quantidade do Produto no seu Estoque? " << endl;
        do {
          do {
            retorno = scanf("%d", &Quantidade_Estoque[ID_Produto]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Quantidade_Estoque[ID_Produto] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Quantidade_Estoque[ID_Produto] < 0);
        cout << "O Preco Bruto do Produto e: " << endl;
        do {
          do {
            retorno = scanf("%f", &Preco_Bruto[ID_Produto]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Preco_Bruto[ID_Produto] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Preco_Bruto[ID_Produto] < 0);
        cout << "O Preco de Venda do Produto e: " << endl;
        do {
          do {
            retorno = scanf("%f", &Preco_Venda[ID_Produto]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Preco_Venda[ID_Produto] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Preco_Venda[ID_Produto] < 0);
        cout << "O Codigo de Barra do Produto e: " << endl;
        do {
          do {
            retorno = scanf("%d", &Codigo_Barra[ID_Produto]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Codigo_Barra[ID_Produto] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Codigo_Barra[ID_Produto] < 0);
        cout << "O NCM do Produto e: " << endl;
        do {
          do {
            retorno = scanf("%d", &NCM[ID_Produto]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (NCM[ID_Produto] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (NCM[ID_Produto] < 0);
        cout << "Qual a unidade de medida do produto? (Unidade, kgs, litros, metros): " << endl;
        getline(cin, Unidade_Medida[ID_Produto]);
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        ID_Produto++;
        break;

      case 5:
        cout << "                                    " << endl;
        cout << "Ola, vamos comecar o seu cadastro!" << endl;
        cout << "O nome da Rua e: " << endl << endl;
        getline(cin, Rua_Endereco[ID_Endereco]);
        cout << "O nome do Bairro e: " << endl;

        getline(cin, Bairro_Endereco[ID_Endereco]);
        cout << "O numero do local e: " << endl;
        do {
          do {
            retorno = scanf("%d", &num_Local_Endereco[ID_Endereco]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (num_Local_Endereco[ID_Endereco] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (num_Local_Endereco[ID_Endereco] < 0);
        cout << "Qual o seu CEP? " << endl;
        do {
          do {
            retorno = scanf("%d", &CEP_Endereco[ID_Endereco]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (CEP_Endereco[ID_Endereco] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (CEP_Endereco[ID_Endereco] < 0);
        do {
          cout << "Digite: " << endl;
          cout << "1 - Se o Cadastro se refere a um Cliente " << endl;
          cout << "2 - Se o Cadastro se refere a um Fornecedor " << endl;
          cout << "3 - Para cancelar o Cadastro " << endl;
          do {
            do {
              retorno = scanf("%d", &Cliente_Fornecedor[ID_Endereco]);
              do {
                letra = getchar();
              } while (letra != '\n');
              if (retorno == 0) {
                cout << "Digite um valor numerico." << endl;
              }
            } while (retorno == 0);
            if (Cliente_Fornecedor[ID_Endereco] < 0) {
              cout << "Digite um numero positivo." << endl;
            }
          } while (Cliente_Fornecedor[ID_Endereco] < 0);

          switch (Cliente_Fornecedor[ID_Endereco]) {
          case 1:
            if (ID_Cliente == 0) {
              cout << "Voce nao tem um Cliente Cadastrado para se referir ao "
                      "Endereco! "
                   << endl;
              break;
            }
            cout << "Informe o ID do Cliente que se refere ao Endereco "
                 << endl;
            do {
              do {
                retorno = scanf("%d", &Cliente[ID_Endereco]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Cliente[ID_Endereco] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Cliente[ID_Endereco] < 0);
            do {
              if (Cliente[ID_Endereco] > ID_Cliente) {
                cout << "Este ID nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &Cliente[ID_Endereco]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Cliente[ID_Endereco] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Cliente[ID_Endereco] < 0);
              }
            } while (Cliente[ID_Endereco] > ID_Cliente);
            // criamos um if para saber se o endereco cadastrado e de um
            // fornecedor ou de um cliente
            break;
          case 2:
            if (ID_Fornecedor == 0) {
              cout << "Voce nao tem um Fornecedor Cadastrado para se referir "
                      "ao Endereco! "
                   << endl;
              break;
            }
            cout << "Informe o ID do Fornecedor que se refere ao Endereco "
                 << endl;
            do {
              do {
                retorno = scanf("%d", &Fornecedor[ID_Endereco]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Fornecedor[ID_Endereco] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Fornecedor[ID_Endereco] < 0);
            do {
              if (Fornecedor[ID_Endereco] > ID_Fornecedor) {
                cout << "Este ID nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &Fornecedor[ID_Endereco]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Fornecedor[ID_Endereco] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Fornecedor[ID_Endereco] < 0);
              }
            } while (Fornecedor[ID_Endereco] > ID_Fornecedor);
            break;
          case 3:
            break;
          default:
            cout << "Esta opcao nao existe!" << endl;
          }
        } while (Cliente_Fornecedor[ID_Endereco] != 3);
        if (Cliente_Fornecedor[ID_Endereco] == 3) {
          cout << "Cadastro cancelado. " << endl;
          break;
        }
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        ID_Endereco++;
        break;
      case 6:
        if (ID_Produto == 0 || ID_Cliente == 0) {
          cout << "Voce nao tem um Produto ou um Cliente Cadastrado para se "
                  "referir a Venda! "
               << endl;
          break;
        }
        cout << "                                    " << endl;
        cout << "Informe o ID do Produto Vendido: " << endl;
        do {
          do {
            retorno = scanf("%d", &id_pro_Vendido[ID_Vendas]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (id_pro_Vendido[ID_Vendas] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (id_pro_Vendido[ID_Vendas] < 0);
        do {
          if (id_pro_Vendido[ID_Vendas] > ID_Produto) {
            cout << "Este ID nao existe! " << endl;
            cout << "Digite novamente. " << endl;
            do {
              do {
                retorno = scanf("%d", &id_pro_Vendido[ID_Vendas]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_pro_Vendido[ID_Vendas] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_pro_Vendido[ID_Vendas] < 0);
          }
        } while (id_pro_Vendido[ID_Vendas] > ID_Produto);
        cout << "Informe a Quantidade que foi Vendido: " << endl;
        do {
          do {
            retorno = scanf("%d", &Quant_Prod_Vendido[ID_Vendas]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Quant_Prod_Vendido[ID_Vendas] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Quant_Prod_Vendido[ID_Vendas] < 0);
        do {
          if (Quantidade_Estoque[id_pro_Vendido[ID_Vendas]] >
              Quant_Prod_Vendido[ID_Vendas]) {
            Quantidade_Estoque[id_pro_Vendido[ID_Vendas]] -
                Quant_Prod_Vendido[ID_Vendas];
          } else {
            cout << "Nao tem Produto suficiente para Comfirmar a Venda "
                 << endl;
            do {
              do {
                retorno = scanf("%d", &Quant_Prod_Vendido[ID_Vendas]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Quant_Prod_Vendido[ID_Vendas] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Quant_Prod_Vendido[ID_Vendas] < 0);
          }
        } while (Quantidade_Estoque[id_pro_Vendido[ID_Vendas]] <
                 Quant_Prod_Vendido[ID_Vendas]);
        Valor_Venda[ID_Vendas] = Quant_Prod_Vendido[ID_Vendas] *
                                 Preco_Venda[id_pro_Vendido[ID_Vendas]];
        Valor_Bruto_Venda[ID_Vendas] = Quant_Prod_Vendido[ID_Vendas] *
                                       Preco_Bruto[id_pro_Vendido[ID_Vendas]];
        Lucro_Venda[ID_Vendas] =
            Valor_Venda[ID_Vendas] - Valor_Bruto_Venda[ID_Vendas];
        cout << "Informe a Data da Venda: " << endl;

        getline(cin, Data_Venda[ID_Vendas]);
        cout << "Informe o ID do Cliente que fez a compra: " << endl;
        do {
          do {
            retorno = scanf("%d", &Compra_CLi[ID_Vendas]);
            do {
              letra = getchar();
            } while (letra != '\n');
            if (retorno == 0) {
              cout << "Digite um valor numerico." << endl;
            }
          } while (retorno == 0);
          if (Compra_CLi[ID_Vendas] < 0) {
            cout << "Digite um numero positivo." << endl;
          }
        } while (Compra_CLi[ID_Vendas] < 0);
        do {
          cout << "Este ID nao existe! " << endl;
          cout << "Digite novamente. " << endl;
          do {
            do {
              retorno = scanf("%d", &Compra_CLi[ID_Vendas]);
              do {
                letra = getchar();
              } while (letra != '\n');
              if (retorno == 0) {
                cout << "Digite um valor numerico." << endl;
              }
            } while (retorno == 0);
            if (Compra_CLi[ID_Vendas] < 0) {
              cout << "Digite um numero positivo." << endl;
            }
          } while (Compra_CLi[ID_Vendas] < 0);
        } while (Compra_CLi[ID_Vendas] > ID_Cliente);
        cout << "Cadastro efetuado com exito!" << endl;
        cout << "                                 " << endl;
        ID_Vendas++;
        break;
      case 7:
        // comecamos o case para modificacao dos dados obitidos
        do {
          cout << "                                    " << endl;
          cout << "Digite:" << endl;
          cout << "1 - Para modificar um Usuario " << endl;
          cout << "2 - Para modificar um Fornecedor " << endl;
          cout << "3 - Para modificar um Cliente " << endl;
          cout << "4 - Para modificar um Produto " << endl;
          cout << "5 - Para modificar um Endereco " << endl;
          cout << "6 - Para modificar uma Venda " << endl;
          cout << "7 - Para sair " << endl;
          do {
            do {
              retorno = scanf("%d", &opcao_modificar);
              do {
                letra = getchar();
              } while (letra != '\n');
              if (retorno == 0) {
                cout << "Digite um valor numerico." << endl;
              }
            } while (retorno == 0);
            if (opcao_modificar < 0) {
              cout << "Digite um numero positivo." << endl;
            }
          } while (opcao_modificar < 0);
          // insersao do valor opcao_modificar para criarmos o switch
          switch (opcao_modificar) {
          case 1:
            if (cont_Usu < 1) {
              cout << "Voce nao tem um Usuario Cadastrado para ser Modificado! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Ola, vamos comecar a sua Modificacao!" << endl;
            cout << "Primeiro digite o seu nome: " << endl;

            getline(cin, Nome_Usuario);
            cout << "Email para login e contato: " << endl;

            getline(cin, Email_Usuario);
            cout << "Agora crie uma senha de acesso: " << endl;

            getline(cin, Senha_Usuario);
            cout << "Modificacao efetuada com exito!" << endl;
            break;
          case 2:
            if (ID_Fornecedor == 0) {
              cout << "Voce nao tem um Fornecedor para Modificar! " << endl;
              break;
            }
            if (ID_Produto == 0) {
              cout << "Voce nao tem um Produto Cadastrado para Cadastrar um "
                      "Fornecedor! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Informe o Id do Fornecedor que deseja modificar " << endl;
            do {
              do {
                retorno = scanf("%d", &id_modificar);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_modificar < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_modificar < 0);
            do {
              if (id_modificar > ID_Fornecedor) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_modificar);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_modificar < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_modificar < 0);
              }
            } while (id_modificar > ID_Fornecedor);
            cout << "                                    " << endl;
            cout << "O Nome do Fornecedor e: " << endl;

            getline(cin, Nome_Fornecedor[id_modificar]);
            cout << "O CNPJ do Fornecedor e: " << endl;
            do {
              do {
                retorno = scanf("%d", &CNPJ_Fornecedor[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (CNPJ_Fornecedor[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (CNPJ_Fornecedor[id_modificar] < 0);
            cout << "O Email do Fornecedor e: " << endl;

            getline(cin, Email_Fornecedor[id_modificar]);
            cout << "O Telefone do Fornecedor e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Telefone_Fornecedor[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Telefone_Fornecedor[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Telefone_Fornecedor[id_modificar] < 0);
            cout << "O Celular do Fornecedor e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Celular_Fornecedor[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Celular_Fornecedor[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Celular_Fornecedor[id_modificar] < 0);
            cout << "O ID do Produto Fornecido e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Id_Produto_Fornecido[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Id_Produto_Fornecido[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Id_Produto_Fornecido[id_modificar] < 0);
            do {
              if (Id_Produto_Fornecido[id_modificar] > ID_Produto) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &Id_Produto_Fornecido[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Id_Produto_Fornecido[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Id_Produto_Fornecido[id_modificar] < 0);
              }
            } while (Id_Produto_Fornecido[id_modificar] > ID_Produto);
            cout << "Modificacao efetuadoa com exito!" << endl;
            cout << "                                 " << endl;
            break;
          case 3:
            if (ID_Cliente == 0) {
              cout << "Voce nao tem um Cliente para Modificar! " << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Informe o Id do Cliente que deseja modificar " << endl;
            do {
              do {
                retorno = scanf("%d", &id_modificar);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_modificar < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_modificar < 0);
            do {
              if (id_modificar > ID_Cliente) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_modificar);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_modificar < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_modificar < 0);
              }
            } while (id_modificar > ID_Fornecedor);
            cout << "O Nome do Cliente e: " << endl;

            getline(cin, Nome_Cliente[id_modificar]);
            cout << "O Email do Cliente e: " << endl;

            getline(cin, Email_Cliente[id_modificar]);
            do {
              cout << "Digite: " << endl;
              cout << "1 - Se o Cliente for uma pessoa fisica " << endl;
              cout << "2 - Se o Cliente for uma pessoa juridica " << endl;
              cout << "3 - Para cancelar o Cadastro " << endl;
              do {
                do {
                  retorno = scanf("%d", &Tipo_Cliente[id_modificar]);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (Tipo_Cliente[id_modificar] < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (Tipo_Cliente[id_modificar] < 0);
              switch (Tipo_Cliente[id_modificar]) {
              case 1:
                // criamos um if para sabermos qual o tipo de cliente estamos
                // cadastrando, assim conseguimos inserir CPF ou CNPJ
                cout << "O CPF do Cliente e: " << endl;
                do {
                  do {
                    retorno = scanf("%d", &CPF_Cliente[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (CPF_Cliente[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (CPF_Cliente[id_modificar] < 0);
                break;
              case 2:
                // caso nao seja uma pessoa fisica, pedimos o CNPJ, cortando o
                // trabalho e deixando as variaveis utilizaveis, em vez de deixar
                // elas paradas
                cout << "O CNPj do Cliente e: " << endl;
                do {
                  do {
                    retorno = scanf("%d", &CNPJ_Cliente[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (CNPJ_Cliente[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (CNPJ_Cliente[id_modificar] < 0);
                break;
              case 3:
                break;
              default:
                cout << "Esta opcao nao existe!" << endl;
                break;
              }
            } while (Tipo_Cliente[id_modificar] != 3);
            if (Tipo_Cliente[id_modificar] == 3) {
              cout << "Cadastro cancelado. " << endl;
              break;
            }
            cout << "O Telefone do Cliente e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Telefone_Cliente[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Telefone_Cliente[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Telefone_Cliente[id_modificar] < 0);
            cout << "O Celular do Cliente e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Celular_Cliente[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Celular_Cliente[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Celular_Cliente[id_modificar] < 0);
            cout << "Modificacao efetuadoa com exito!" << endl;
            cout << "                                 " << endl;
            break;
          case 4:
            if (ID_Produto == 0) {
              cout << "Voce nao tem um Produto Cadastrado para Modificar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Informe o Id do Produto que deseja modificar " << endl;
            do {
              do {
                retorno = scanf("%d", &id_modificar);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_modificar < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_modificar < 0);
            do {
              if (id_modificar > ID_Produto) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_modificar);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_modificar < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_modificar < 0);
              }
            } while (id_modificar > ID_Produto);
            cout << "Novo Nome do Produto e: " << endl;

            getline(cin, Nome_Produto[id_modificar]);
            cout << "Nova Data de Validade do Produto e: " << endl;

            getline(cin, Data_Validade[id_modificar]);
            cout << "Qual a Quantidade do Produto no seu Estoque? " << endl;
            do {
              do {
                retorno = scanf("%d", &Quantidade_Estoque[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Quantidade_Estoque[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Quantidade_Estoque[id_modificar] < 0);
            cout << "Novo Preco Bruto do Produto e: " << endl;
            do {
              do {
                retorno = scanf("%f", &Preco_Bruto[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Preco_Bruto[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Preco_Bruto[id_modificar] < 0);
            cout << "Novo Preco de Venda do Produto e: " << endl;
            do {
              do {
                retorno = scanf("%f", &Preco_Venda[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Preco_Venda[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Preco_Venda[id_modificar] < 0);
            cout << "Novo Codigo de Barra do Produto e: " << endl;
            do {
              do {
                retorno = scanf("%d", &Codigo_Barra[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Codigo_Barra[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Codigo_Barra[id_modificar] < 0);
            cout << "Novo NCM do Produto e: " << endl;
            do {
              do {
                retorno = scanf("%d", &NCM[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (NCM[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (NCM[id_modificar] < 0);
            cout << "Nova Unidade de Medida do Produto e: " << endl;

            getline(cin, Unidade_Medida[id_modificar]);
            cout << "Modificacao efetuadoa com exito!" << endl;
            cout << "                                 " << endl;
            break;
          case 5:
            if (ID_Endereco == 0) {
              cout << "Voce nao tem um Endereco Cadastrado para Modificar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Informe o Id do Endereco que deseja modificar " << endl;
            do {
              do {
                retorno = scanf("%d", &id_modificar);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_modificar < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_modificar < 0);
            do {
              if (id_modificar > ID_Endereco) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_modificar);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_modificar < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_modificar < 0);
              }
            } while (id_modificar > ID_Endereco);
            cout << "O nome da Rua e: " << endl << endl;

            getline(cin, Rua_Endereco[id_modificar]);
            cout << "O nome do Bairro e: " << endl;

            getline(cin, Bairro_Endereco[id_modificar]);
            cout << "O numero do local e: " << endl;
            do {
              do {
                retorno = scanf("%d", &num_Local_Endereco[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (num_Local_Endereco[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (num_Local_Endereco[id_modificar] < 0);
            cout << "Qual o seu CEP? " << endl;
            do {
              do {
                retorno = scanf("%d", &CEP_Endereco[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (CEP_Endereco[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (CEP_Endereco[id_modificar] < 0);
            do {
              cout << "Digite: " << endl;
              cout << "1 - Se o Cadastro se refere a um Cliente " << endl;
              cout << "2 - Se o cadastro se refere a um Fornecedor " << endl;
              cout << "3 - Para cancelar o Cadastro " << endl;
              do {
                do {
                  retorno = scanf("%d", &Cliente_Fornecedor[id_modificar]);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (Cliente_Fornecedor[id_modificar] < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (Cliente_Fornecedor[id_modificar] < 0);

              switch (Cliente_Fornecedor[id_modificar]) {
              case 1:
                if (ID_Cliente == 0) {
                  cout << "Voce nao tem um Cliente Cadastrado para se referir "
                          "ao Endereco! "
                       << endl;
                  break;
                }
                cout << "Informe o ID do Cliente que se refere ao Endereco "
                     << endl;
                do {
                  do {
                    retorno = scanf("%d", &Cliente[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Cliente[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Cliente[id_modificar] < 0);
                do {
                  if (Cliente[id_modificar] > ID_Cliente) {
                    cout << "Este ID nao existe! " << endl;
                    cout << "Digite novamente. " << endl;
                    do {
                      do {
                        retorno = scanf("%d", &Cliente[id_modificar]);
                        do {
                          letra = getchar();
                        } while (letra != '\n');
                        if (retorno == 0) {
                          cout << "Digite um valor numerico." << endl;
                        }
                      } while (retorno == 0);
                      if (Cliente[id_modificar] < 0) {
                        cout << "Digite um numero positivo." << endl;
                      }
                    } while (Cliente[id_modificar] < 0);
                  }
                } while (Cliente[id_modificar] > ID_Cliente);
                break;
              case 2:
                if (ID_Fornecedor == 0) {
                  cout << "Voce nao tem um Fornecedor Cadastrado para se "
                          "referir ao Endereco! "
                       << endl;
                  break;
                }
                cout << "Informe o ID do Fornecedor que se refere ao Endereco "
                     << endl;
                do {
                  do {
                    retorno = scanf("%d", &Fornecedor[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Fornecedor[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Fornecedor[id_modificar] < 0);
                do {
                  if (Fornecedor[id_modificar] > ID_Fornecedor) {
                    cout << "Este ID nao existe! " << endl;
                    cout << "Digite novamente. " << endl;
                    do {
                      do {
                        retorno = scanf("%d", &Fornecedor[id_modificar]);
                        do {
                          letra = getchar();
                        } while (letra != '\n');
                        if (retorno == 0) {
                          cout << "Digite um valor numerico." << endl;
                        }
                      } while (retorno == 0);
                      if (Fornecedor[id_modificar] < 0) {
                        cout << "Digite um numero positivo." << endl;
                      }
                    } while (Fornecedor[id_modificar] < 0);
                  }
                } while (Fornecedor[id_modificar] > ID_Fornecedor);
                break;
              case 3:
                break;
              default:
                cout << "Esta opcao nao existe!" << endl;
              }
            } while (Cliente_Fornecedor[id_modificar] != 3);
            if (Cliente_Fornecedor[id_modificar] == 3) {
              cout << "Cadastro cancelado. " << endl;
              break;
            }
            cout << "Modificacao efetuadoa com exito!" << endl;
            cout << "                                 " << endl;
            break;
          case 6:
            if (ID_Vendas == 0) {
              cout << "Voce nao tem uma Venda para Modificar!" << endl;
            }
            if (ID_Produto == 0 || ID_Cliente == 0) {
              cout << "Voce nao tem um Produto ou um Cliente para se referir a "
                      "Venda! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Informe o Id da Venda que deseja modificar " << endl;
            do {
              do {
                retorno = scanf("%d", &id_modificar);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_modificar < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_modificar < 0);
            do {
              if (id_modificar > ID_Vendas) {
                cout << "Este nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_modificar);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_modificar < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_modificar < 0);
              }
            } while (id_modificar > ID_Vendas);
            cout << "Informe o ID do Produto Vendido: " << endl;
            do {
              do {
                retorno = scanf("%d", &id_pro_Vendido[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (id_pro_Vendido[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (id_pro_Vendido[id_modificar] < 0);
            do {
              if (id_pro_Vendido[id_modificar] > ID_Produto) {
                cout << "Este ID nao existe! " << endl;
                cout << "Digite novamente. " << endl;
                do {
                  do {
                    retorno = scanf("%d", &id_pro_Vendido[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (id_pro_Vendido[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (id_pro_Vendido[id_modificar] < 0);
              }
            } while (id_pro_Vendido[id_modificar] > ID_Produto);
            cout << "Informe a Quantidade que foi Vendido: " << endl;
            do {
              do {
                retorno = scanf("%d", &Quant_Prod_Vendido[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Quant_Prod_Vendido[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Quant_Prod_Vendido[id_modificar] < 0);
            do {
              if (Quantidade_Estoque[id_pro_Vendido[id_modificar]] >
                  Quant_Prod_Vendido[id_modificar]) {
                Quantidade_Estoque[id_pro_Vendido[id_modificar]] -
                    Quant_Prod_Vendido[id_modificar];
              } else {
                cout << "Nao tem Produto suficiente para Comfirmar a Venda "
                     << endl;
                do {
                  do {
                    retorno = scanf("%d", &Quant_Prod_Vendido[id_modificar]);
                    do {
                      letra = getchar();
                    } while (letra != '\n');
                    if (retorno == 0) {
                      cout << "Digite um valor numerico." << endl;
                    }
                  } while (retorno == 0);
                  if (Quant_Prod_Vendido[id_modificar] < 0) {
                    cout << "Digite um numero positivo." << endl;
                  }
                } while (Quant_Prod_Vendido[id_modificar] < 0);
              }
            } while (Quantidade_Estoque[id_pro_Vendido[id_modificar]] <
                     Quant_Prod_Vendido[id_modificar]);
            Valor_Venda[id_modificar] =
                Quant_Prod_Vendido[id_modificar] *
                Preco_Venda[id_pro_Vendido[id_modificar]];
            Valor_Bruto_Venda[id_modificar] =
                Quant_Prod_Vendido[id_modificar] *
                Preco_Bruto[id_pro_Vendido[id_modificar]];
            Lucro_Venda[id_modificar] =
                Valor_Venda[id_modificar] - Valor_Bruto_Venda[id_modificar];
            cout << "Informe a Data da Venda: " << endl;

            getline(cin, Data_Venda[id_modificar]);
            cout << "Informe o ID do Cliente que fez a compra: " << endl;
            do {
              do {
                retorno = scanf("%d", &Compra_CLi[id_modificar]);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (Compra_CLi[id_modificar] < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (Compra_CLi[id_modificar] < 0);
            do {
              cout << "Este ID nao existe! " << endl;
              cout << "Digite novamente. " << endl;
              do {
                do {
                  retorno = scanf("%d", &Compra_CLi[id_modificar]);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (Compra_CLi[id_modificar] < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (Compra_CLi[id_modificar] < 0);
            } while (Compra_CLi[id_modificar] > ID_Cliente);
            break;
          case 7:
            // case para saida, tirando o erro do default
            break;
          default:
            cout << "Esta opcao nao existe! " << endl;
          }
        } while (opcao_modificar != 7);
        cout << "Modificacao efetuadoa com exito!" << endl;
        cout << "                                 " << endl;
        break;

      case 8:
        // comecamos o case 7 para colsuta dos dados obitidos
        do {
          cout << "                                    " << endl;
          cout << "Digite: " << endl;
          cout << "1 - Para consultar Usuarios" << endl;
          cout << "2 - Para consultar Fornecedores" << endl;
          cout << "3 - Para consultar clientes" << endl;
          cout << "4 - Para consultar Produtos" << endl;
          cout << "5 - Para consultar Enderecos" << endl;
          cout << "6 - Para consultar Vendas" << endl;
          cout << "7 - Para Sair" << endl;
          do {
            do {
              retorno = scanf("%d", &opc_mostrar);
              do {
                letra = getchar();
              } while (letra != '\n');
              if (retorno == 0) {
                cout << "Digite um valor numerico." << endl;
              }
            } while (retorno == 0);
            if (opc_mostrar < 0) {
              cout << "Digite um numero positivo." << endl;
            }
          } while (opc_mostrar < 0);
          // insersao de um valor para a variavel opc_mostrar, para que comece o
          // switch
          switch (opc_mostrar) {
          case 1:
            // como so vamos ter um usuario cadastrado, nao precisamos colocar
            // um if para colocarmos o for
            if (cont_Usu == 0) {
              cout << "Voce nao tem um Usuario Cadastrado para consultar"
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "O Nome encontrado foi: " << Nome_Usuario << endl;
            cout << "O Email encontrado foi: " << Email_Usuario << endl;
            cout << "A Senha encontrado foi: " << Senha_Usuario << endl;
            cout << "                    " << endl;
            break;
          case 2:
            if (ID_Fornecedor == 0) {
              cout << "Voce nao tem um Fornecedor Cadastrado para consultar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Deseja consultar um Fornecedor  especifico? " << endl;
            cout << "Digite: " << endl;
            cout << "1 - Para consultar um Fornecedor " << endl;
            cout << "2 - Para mostrar todos os Fornecedores " << endl;
            // um switch com if por termos poucas informacoes e nao necesitarmos
            // de um switch, para uma consulta especifica ou para todos os cada
            do {
              do {
                retorno = scanf("%d", &opc);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (opc < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (opc < 0);
            switch (opc) {
            case 1:
              // inicia o codigo para a consulta especifica
              cout << "                                    " << endl;
              cout << "Digite o ID do fornecedor" << endl;
              do {
                do {
                  retorno = scanf("%d", &consulta_unica);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (consulta_unica < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (consulta_unica < 0);
              do {
                if (consulta_unica > ID_Fornecedor) {
                  cout << "Este nao existe! " << endl;
                  cout << "Digite novamente. " << endl;
                  do {
                    do {
                      retorno = scanf("%d", &consulta_unica);
                      do {
                        letra = getchar();
                      } while (letra != '\n');
                      if (retorno == 0) {
                        cout << "Digite um valor numerico." << endl;
                      }
                    } while (retorno == 0);
                    if (consulta_unica < 0) {
                      cout << "Digite um numero positivo." << endl;
                    }
                  } while (consulta_unica < 0);
                }
              } while (consulta_unica > ID_Fornecedor);
              cout << "Resultados encontrados: " << endl;
              cout << "O Nome encontrado foi: "
                   << Nome_Fornecedor[consulta_unica] << endl;
              cout << "O CNPJ encontrado foi: "
                   << CNPJ_Fornecedor[consulta_unica] << endl;
              cout << "O Email encontrado foi: "
                   << Email_Fornecedor[consulta_unica] << endl;
              cout << "O Telefone encontrado foi: "
                   << Telefone_Cliente[consulta_unica] << endl;
              cout << "O Celular encontrado foi: "
                   << Celular_Fornecedor[consulta_unica] << endl;
              cout << "O Produto Fornecido encontrado foi: "
                   << Nome_Produto[Id_Produto_Fornecido[consulta_unica]]
                   << endl;
              cout << "                    " << endl;
              break;
            case 2:
              for (cont = 0; cont < ID_Fornecedor; cont++) {
                // o ID_Fornecedor vai funcionar tambem como um contador de
                // quantos cadastros ja foram feitos no total
                cout << "                                    " << endl;
                cout << "O Nome encontrado foi: " << Nome_Fornecedor[cont]
                     << endl;
                cout << "O CNPJ encontrado foi: " << CNPJ_Fornecedor[cont]
                     << endl;
                cout << "O Email encontrado foi: " << Email_Fornecedor[cont]
                     << endl;
                cout << "O Telefone encontrado foi: "
                     << Telefone_Fornecedor[cont] << endl;
                cout << "O Celular encontrado foi: " << Celular_Fornecedor[cont]
                     << endl;
                cout << "O Produto Fornecido encontrado foi: "
                     << Nome_Fornecedor[Id_Produto_Fornecido[cont]] << endl;
                cout << "                    " << endl;
              }
              // encerra o for
              break;
            default:
              cout << "Esta opcao nao existe! " << endl;
            }
            // encerra o switch
            break;
          case 3:
            if (ID_Cliente == 0) {
              cout << "Voce nao tem um Cliente para Modificar! " << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Deseja consultar um Cliente especifico?" << endl;
            cout << "Digite: " << endl;
            cout << "1 - Para consultar um Cliente" << endl;
            cout << "2 - Para mostrar todos os Clientes" << endl;
            do {
              do {
                retorno = scanf("%d", &opc);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (opc < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (opc < 0);
            switch (opc) {
            case 1:
              cout << "                         " << endl;
              cout << "Digite o ID do Cliente" << endl;
              do {
                do {
                  retorno = scanf("%d", &consulta_unica);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (consulta_unica < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (consulta_unica < 0);
              do {
                if (consulta_unica > ID_Fornecedor) {
                  cout << "Este nao existe! " << endl;
                  cout << "Digite novamente. " << endl;
                  do {
                    do {
                      retorno = scanf("%d", &consulta_unica);
                      do {
                        letra = getchar();
                      } while (letra != '\n');
                      if (retorno == 0) {
                        cout << "Digite um valor numerico." << endl;
                      }
                    } while (retorno == 0);
                    if (consulta_unica < 0) {
                      cout << "Digite um numero positivo." << endl;
                    }
                  } while (consulta_unica < 0);
                }
              } while (consulta_unica > ID_Fornecedor);
              cout << "Resultados encontrados: " << endl;
              cout << "O Nome encontrado foi: " << Nome_Cliente[consulta_unica]
                   << endl;
              cout << "O Email encontrado foi: "
                   << Email_Cliente[consulta_unica] << endl;
              cout << "O Telefone encontrado foi: "
                   << Telefone_Cliente[consulta_unica] << endl;
              cout << "O Celular encontrado foi: "
                   << Celular_Cliente[consulta_unica] << endl;
              if (Tipo_Cliente[consulta_unica] == 1) {
                cout << "O CPF encontrado foi: " << CPF_Cliente[consulta_unica]
                     << endl;
                ;
              } else {
                cout << "O CNPj encontrado foi: "
                     << CNPJ_Cliente[consulta_unica] << endl;
              }
              cout << "                    " << endl;
              break;
            case 2:
              for (cont = 0; cont < ID_Cliente; cont++) {
                cout << "                                    " << endl;
                cout << "O Nome encontrado foi: " << Nome_Cliente[cont] << endl;
                cout << "O Email encontrado foi: " << Email_Cliente[cont]
                     << endl;
                cout << "O Telefone encontrado foi: " << Telefone_Cliente[cont]
                     << endl;
                cout << "O Celular encontrado foi: " << Celular_Cliente[cont]
                     << endl;
                if (Tipo_Cliente[cont] == 1) {
                  cout << "O CPF encontrado foi: " << CPF_Cliente[cont] << endl;
                } else {
                  cout << "O CNPj do Cliente e: " << CNPJ_Cliente[cont] << endl;
                }
                cout << "                    " << endl;
              }
              break;
            default:
              cout << "Esta opcao nao existe! " << endl;
            }
            break;
          case 4:
            if (ID_Produto == 0) {
              cout << "Voce nao tem um Produto Cadastrado para consultar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Deseja consultar um Produto especifico?" << endl;
            cout << "Digite: " << endl;
            cout << "1 - Para consultar um Produto" << endl;
            cout << "2 - Para mostrar todos os Produtos" << endl;
            do {
              do {
                retorno = scanf("%d", &opc);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (opc < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (opc < 0);
            switch (opc) {
            case 1:
              cout << "                                    " << endl;
              cout << "Digite o ID do Produto" << endl;
              do {
                do {
                  retorno = scanf("%d", &consulta_unica);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (consulta_unica < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (consulta_unica < 0);
              do {
                if (consulta_unica > ID_Fornecedor) {
                  cout << "Este nao existe! " << endl;
                  cout << "Digite novamente. " << endl;
                  do {
                    do {
                      retorno = scanf("%d", &consulta_unica);
                      do {
                        letra = getchar();
                      } while (letra != '\n');
                      if (retorno == 0) {
                        cout << "Digite um valor numerico." << endl;
                      }
                    } while (retorno == 0);
                    if (consulta_unica < 0) {
                      cout << "Digite um numero positivo." << endl;
                    }
                  } while (consulta_unica < 0);
                }
              } while (consulta_unica > ID_Fornecedor);
              cout << "Resultados encontrados: " << endl;
              cout << "O Nome encontrado foi: " << Nome_Produto[consulta_unica]
                   << endl;
              cout << "A Data de Validade encontrada foi: "
                   << Data_Validade[consulta_unica] << endl;
              cout << "O Preco Bruto encontrado foi: "
                   << Preco_Bruto[consulta_unica] << endl;
              cout << "O Preco de Venda encontrado foi: "
                   << Preco_Venda[consulta_unica] << endl;
              cout << "O Codigo de Barra encontrado foi: "
                   << Codigo_Barra[consulta_unica] << endl;
              cout << "O NCM encontrado foi: " << NCM[consulta_unica] << endl;
              cout << "A Unidade de Medida encontrada foi: "
                   << Unidade_Medida[consulta_unica] << endl;
              cout << "                    " << endl;
              break;
            case 2:
              for (cont = 0; cont < ID_Produto; cont++) {
                cout << "                                    " << endl;
                cout << "O Nome encontrado foi: " << Nome_Produto[cont] << endl;
                cout << "A Data de Validade encontrada foi: "
                     << Data_Validade[cont] << endl;
                cout << "O Preco Bruto encontrado foi: " << Preco_Bruto[cont]
                     << endl;
                cout << "O Preco de Venda encontrado foi: " << Preco_Venda[cont]
                     << endl;
                cout << "O Codigo de Barra encontrado foi: "
                     << Codigo_Barra[cont] << endl;
                cout << "O NCM encontrado foi: " << NCM[cont] << endl;
                cout << "A Unidade de Medida encontrada foi: "
                     << Unidade_Medida[cont] << endl;
                cout << "                    " << endl;
              }
              break;
            default:
              cout << "Esta opcao nao existe! " << endl;
            }
            break;
          case 5:
            if (ID_Endereco == 0) {
              cout << "Voce nao tem um Endereco Cadastrado para Consultar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Deseja consultar um Endereco especifico?" << endl;
            cout << "Digite: " << endl;
            cout << "1 - Para consultar um Endereco" << endl;
            cout << "2 - Para mostrar todos os Enderecos" << endl;
            do {
              do {
                retorno = scanf("%d", &opc);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (opc < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (opc < 0);
            switch (opc) {
            case 1:
              cout << "                                    " << endl;
              cout << "Digite o ID do Endereco" << endl;
              do {
                do {
                  retorno = scanf("%d", &consulta_unica);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (consulta_unica < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (consulta_unica < 0);
              do {
                if (consulta_unica > ID_Fornecedor) {
                  cout << "Este nao existe! " << endl;
                  cout << "Digite novamente. " << endl;
                  do {
                    do {
                      retorno = scanf("%d", &consulta_unica);
                      do {
                        letra = getchar();
                      } while (letra != '\n');
                      if (retorno == 0) {
                        cout << "Digite um valor numerico." << endl;
                      }
                    } while (retorno == 0);
                    if (consulta_unica < 0) {
                      cout << "Digite um numero positivo." << endl;
                    }
                  } while (consulta_unica < 0);
                }
              } while (consulta_unica > ID_Fornecedor);
              cout << "Resultados encontrados: " << endl;
              cout << "A Rua encontrada foi: " << Rua_Endereco[consulta_unica]
                   << endl;
              cout << "O Bairro encontrado foi: "
                   << Bairro_Endereco[consulta_unica] << endl;
              cout << "O Num do Local encontrado foi: "
                   << num_Local_Endereco[consulta_unica] << endl;
              cout << "O CEP encontrado foi: " << CEP_Endereco[consulta_unica]
                   << endl;
              if (Cliente_Fornecedor[consulta_unica] == 1) {
                cout << "Este Endereco e de um Cliente: "
                     << Cliente[consulta_unica] << endl;
              } else
                cout << "Este Endereco e de um Fornecedor: "
                     << Fornecedor[consulta_unica] << endl;
              cout << "                    " << endl;
              break;
            case 2:
              for (cont = 0; cont < ID_Endereco; cont++) {
                cout << "                                    " << endl;
                cout << "A Rua encontrada foi: " << Rua_Endereco[cont] << endl;
                cout << "O Bairro encontrado foi: " << Bairro_Endereco[cont]
                     << endl;
                cout << "O Num do Local encontrado foi: "
                     << num_Local_Endereco[cont] << endl;
                cout << "O CEP encontrado foi: " << CEP_Endereco[cont] << endl;
                if (Cliente_Fornecedor[cont] == 1) {
                  cout << "Este Endereco e de um Cliente: " << Cliente[cont]
                       << endl;
                } else
                  cout << "Este Endereco e de um Fornecedor: "
                       << Fornecedor[cont] << endl;
                cout << "                    " << endl;
              }
              break;
            default:
              cout << "Esta opcao nao existe! " << endl;
            }
            break;
          case 6:
            if (ID_Vendas == 0) {
              cout << "Voce nao tem uma Venda Cadastradoa para Consultar! "
                   << endl;
              break;
            }
            cout << "                                    " << endl;
            cout << "Deseja consultar uma Venda especifica?" << endl;
            cout << "Digite: " << endl;
            cout << "1 - Para consultar uma Venda" << endl;
            cout << "2 - Para mostrar todas as Vendas" << endl;
            do {
              do {
                retorno = scanf("%d", &opc);
                do {
                  letra = getchar();
                } while (letra != '\n');
                if (retorno == 0) {
                  cout << "Digite um valor numerico." << endl;
                }
              } while (retorno == 0);
              if (opc < 0) {
                cout << "Digite um numero positivo." << endl;
              }
            } while (opc < 0);
            switch (opc) {
            case 1:
              cout << "                                    " << endl;
              cout << "Digite o ID da Venda" << endl;
              do {
                do {
                  retorno = scanf("%d", &consulta_unica);
                  do {
                    letra = getchar();
                  } while (letra != '\n');
                  if (retorno == 0) {
                    cout << "Digite um valor numerico." << endl;
                  }
                } while (retorno == 0);
                if (consulta_unica < 0) {
                  cout << "Digite um numero positivo." << endl;
                }
              } while (consulta_unica < 0);
              do {
                if (consulta_unica > ID_Fornecedor) {
                  cout << "Este nao existe! " << endl;
                  cout << "Digite novamente. " << endl;
                  do {
                    do {
                      retorno = scanf("%d", &consulta_unica);
                      do {
                        letra = getchar();
                      } while (letra != '\n');
                      if (retorno == 0) {
                        cout << "Digite um valor numérico." << endl;
                      }
                    } while (retorno == 0);
                    if (consulta_unica < 0) {
                      cout << "Digite um numero positivo." << endl;
                    }
                  } while (consulta_unica < 0);
                }
              } while (consulta_unica > ID_Fornecedor);
              cout << "Resultados encontrados: " << endl;
              cout << "O Produto Vendido encontrado foi: "
                   << Nome_Produto[id_pro_Vendido[consulta_unica]] << endl;
              cout << "A Quantidade Vendida encontrada foi: "
                   << Quant_Prod_Vendido[consulta_unica] << endl;
              cout << "A Data da Venda encontrada foi: "
                   << Data_Venda[consulta_unica] << endl;
              cout << "O Cliente que fez a Compra encontrado foi: "
                   << Nome_Cliente[Compra_CLi[consulta_unica]] << endl;
              cout << "Valor da Venda foi: " << Valor_Venda[consulta_unica]
                   << endl;
              cout << "Lucro obtido foi: " << Lucro_Venda[consulta_unica]
                   << endl;
              cout << "                    " << endl;
              break;
            case 2:
              cout << "Resultados encontrados: " << endl;
              for (cont = 0; cont < ID_Vendas; cont++) {
                cout << "                                    " << endl;
                cout << "O Produto Vendido encontrado foi: "
                     << Nome_Produto[id_pro_Vendido[cont]] << endl;
                cout << "A Quantidade Vendida encontrada foi: "
                     << Quant_Prod_Vendido[cont] << endl;
                cout << "A Data da Venda encontrada foi: " << Data_Venda[cont]
                     << endl;
                cout << "O Cliente que fez a Compra encontrado foi: "
                     << Nome_Cliente[Compra_CLi[cont]] << endl;
                cout << "Valor da Venda foi: " << Valor_Venda[cont] << endl;
                cout << "Lucro obtido foi: " << Lucro_Venda[cont] << endl;
                cout << "                    " << endl;
              }
              break;
            }
            break;
          case 7:
            break;
          default:
            cout << "Esta opcao nao existe! " << endl;
          }
        } while (opc_mostrar != 7);
        break;
      case 9:
        break;
        // case so com o break para que nao haja o bug do default
      default:
        cout << "Esta opcao nao existe!" << endl;
      }
    } while (opcao_main != 9);
    // encerra o primeiro DO
  }
  // fecha o void
};
// fecha o class
int main() {
  // comeca a funcao principal
  Estoque_Vendas E_V1;
  // criamos um objeto dentro do main para a class
  E_V1.all_codes();
  // chamamos uma funcao do objeto
  cout << "Obrigado por utilizar o nosso Sistema!" << endl;
  // agredecimentos
  return 0;
}
// encerra a funcao principal