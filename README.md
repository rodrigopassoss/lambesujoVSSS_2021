# Lambe Sujo VSSS - 2021
Repositório para colaboração no desenvolvimento da estratégia do time Lambe Sujo para a competição IEEE Very Small Size Soccer

## Pré-Requisitos

* Computador com Linux
* [QT](https://www.qt.io/download)
* GIT
```
sudo apt install git
```
Se não for esse comando, você usa outra distribuição Linux e sabe o que fazer
* Conta criada no GIT
* [FIRASim](https://github.com/robocin/FIRASim) disponível no repositório do RobôCIN
* [FIRA-Client](https://github.com/robocin/fira-client) disponível no repositório do RobôCIN

## Uso

Após instalar corretamente os pré-requisitos, basta clonar este repositório na pasta em que está o arquivo main.cpp do FIRA-Client.

```
cd diretorio/de/instalacao
git init
git remote add origin https://github.com/rodrigopassoss/lambesujoVSSS_2021.git
git fetch
git checkout -t origin/master -f
```
Após clonar os arquivos corretamente, eles já serão adicionados à sua versão do simulador. Neste momento você deve criar um branch com seu nome

```
git branch raphael
git checkout raphael
```

## Compartilhando código

### Colaborar com o projeto

Para colaborar com o projeto, você precisa estar cadastrado no repositório oficial como colaborador. Entre em contato comigo com seu usuário do GIT ou e-mail e enviarei um convite para colaboração.

### Enviar atualizações

Caso você esteja usando o GIT pela primeira vez, você precisará configurá-lo no seu computador com sua conta

```
git config --global user.email "you@example.com"
git config --global user.name "Your Name"
```

Após sessões de programação, você pode atualizar os arquivos no seu branch, com o terminal na pasta onde está o main 

```
cd diretorio/de/instalacao
git add main.cpp strategy.cpp strategy.h
git commit -m "Comentários"
```

Caso você não tenha feito nenhuma alteração, uma mensagem com vários arquivos não observados irá aparecer. Está tudo bem.

O seu primeiro push deve ser feito configurando o upstream, trocando o nome **raphael** pelo nome do seu branch

```
git push --set-upstream origin raphael
```

Após isso, todos os seus pushes podem ser realizados simplesmente com

```
git push
```

Isso fará com que qualquer pessoa possa facilmente testar seu código no computador deles, além de que todo o progresso fica guardado. Note que apenas esses três arquivos serão modificados e atualizados, pois basta modificarmos eles para fazer qualquer programa funcional. Caso alguma modificação em outro arquivo seja necessária, entre em contato comigo e poderemos resolver isso.

Ao usar o **git push** podirá o usuário a senha, para o usuário pode colocar o seu usário do gitHub. Já para senha coloque o "token" de acesso, que estará disponível na descrição do grupo Lambe Sujo

## Pegando apenas um arquivo do código oficial (ou outro branch)

Caso por exemplo você queira recuperar o arquivo original **strategy.cpp**, faça

```
git checkout origin/master strategy.cpp
```

Isso irá sobrescrever o arquivo na sua pasta, mas ele ainda não estará no seu branch. Após fazer quaisquer modificações que desejar, pode realizar o mesmo processo para enviar atualizações 

```
cd diretorio/de/instalacao
git add main.cpp strategy.cpp strategy.h
git commit -m "Comentários"
git push
```
