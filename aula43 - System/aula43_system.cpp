#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    system("title Duque Majores");
    system("dir");
    system("pause");
    system("cls");

    system("color 79");

    

    //Fundo - Texto
    //0 = Preto        8 = Cinza
    //1 = Azul         9 = Azul claro
    //2 = Verde        A = Verde claro
    //3 = Verde-água   B = Verde-água claro
    //4 = Vermelho     C = Vermelho claro
    //5 = Roxo         D = Lilás
    //6 = Amarelo      E = Amarelo claro
    //7 = Branco       F = Branco brilhante

    /*

    Comandos de Sistema e Arquivos
    Comando	        Função

    dir	            Lista os arquivos e pastas
    cd	            Muda o diretório atual
    md ou mkdir	    Cria uma nova pasta
    rd ou rmdir	    Remove uma pasta
    del	            Deleta arquivos
    copy	        Copia arquivos
    xcopy	        Copia arquivos e diretórios
    move	        Move arquivos ou pastas
    ren ou rename	Renomeia arquivos ou pastas
    type	        Mostra o conteúdo de um arquivo de texto
    attrib	        Altera atributos de arquivos (como somente leitura, oculto)

    Comandos do Sistema Operacional
    Comando	        Função

    cls	            Limpa a tela do prompt
    pause	        Pausa a execução e espera uma tecla
    exit	        Sai do prompt ou termina o programa
    echo	        Exibe mensagens ou ativa/desativa o eco
    title	        Muda o título da janela do CMD
    color	        Muda a cor do texto e do fundo do CMD
    set	            Define variáveis de ambiente
    shutdown	    Desliga ou reinicia o computador
    tasklist	    Lista os processos em execução
    taskkill	    Encerra um processo (por nome ou PID)

    Comandos de Rede
    Comando	        Função

    ping	        Testa a conexão com um endereço IP ou site
    ipconfig	    Mostra configurações de IP da rede
    netstat	        Mostra conexões de rede e portas em uso
    tracert	        Mostra o caminho até um IP ou domínio
    nslookup	    Faz consulta DNS de um domínio
    net	            Gerencia usuários, serviços e compartilhamentos de rede
    ftp	            Inicia o cliente FTP para transferir arquivos
    hostname	    Mostra o nome do computador

    Comandos Avançados
    Comando	        Função

    sfc /scannow	Verifica e corrige arquivos corrompidos do sistema
    chkdsk	        Verifica e corrige erros no disco
    diskpart	    Gerencia partições de disco
    reg	            Manipula o registro do Windows
    wmic	        Interface para administração via linha de comando
    powershell	    Abre o PowerShell (pode usar comandos mais avançados)

    Gerenciamento de Usuários e Permissões
    Comando	        Função

    net user	    Lista usuários do sistema
    net user nome /add	Adiciona um novo usuário
    net user nome /delete	Remove um usuário
    net localgroup	Lista grupos locais
    net localgroup administradores nome /add	Adiciona um usuário ao grupo de administradores
    whoami	        Exibe o nome do usuário atual
    runas	        Executa um comando como outro usuário

    Gerenciamento de Serviços
    Comando	        Função
    services.msc	Abre o gerenciador de serviços (interface gráfica)
    net start nome_do_serviço	Inicia um serviço
    net stop nome_do_serviço	Para um serviço
    sc query	    Lista os serviços
    sc start nome	Inicia serviço via sc
    sc stop nome	Para serviço via sc
    taskschd.msc	Abre o agendador de tarefas

    Comandos para Instalação e Programas
    Comando	        Função
    msiexec /i caminho.msi	Instala um programa MSI
    start caminho_arquivo	Abre um arquivo com o app padrão
    start nome_programa.exe	Executa um programa
    wmic product get name	Lista programas instalados
    appwiz.cpl	    Abre o painel de desinstalar programas
    control	        Abre o painel de controle

    Gerenciamento de Disco e Sistema
    Comando	        Função
    format	        Formata uma unidade
    mountvol	    Mostra ou manipula pontos de montagem
    defrag C:	    Desfragmenta o disco C
    powercfg /batteryreport	Gera relatório da bateria
    bcdedit	Gerencia o boot do Windows
    cleanmgr	    Abre a limpeza de disco
    systeminfo	    Exibe informações do sistema
    ver	            Mostra a versão do Windows

    Comandos com for, if, call (batch avançado)
    Comando	        Função
    for /f %%i in (...) do (...)	Executa comandos em loop (ex: para processar arquivos ou saídas de comandos)
    if exist arquivo.txt (...)	Executa um comando se o arquivo existir
    call	        Chama outro script de dentro de um script
    goto	        Move a execução para um rótulo dentro do script

    Extras Curiosos
    Comando	    Função
    echo %random%	Gera um número aleatório
    date /t	    Mostra a data
    time /t	    Mostra a hora
    msg nome	Envia mensagem para outro usuário
    shutdown -s -t 60	Desliga o PC em 60 segundos
    tree	    Mostra estrutura de pastas em árvore
    clip	    Copia a saída de um comando para a área de transferência (ex: `ipconfig

    Segurança e Controle de Acesso
    Comando	        Função

    cipher	        Criptografa/decripta arquivos e mostra status
    cacls	        Mostra ou altera permissões de arquivos (substituído por icacls)
    icacls	        Gerencia permissões de arquivos e diretórios
    secedit	        Aplica configurações de segurança locais
    net accounts	Configura políticas de senha de usuário
    gpresult /R	    Mostra políticas de grupo aplicadas
    auditpol	    Controla políticas de auditoria de segurança

    Rede - Avançado
    Comando	        Função

    netsh	        Utilitário poderoso para configurar redes
    netsh wlan show profiles	Mostra perfis de Wi-Fi salvos
    netsh wlan export profile	Exporta senha de Wi-Fi
    getmac	        Mostra endereço MAC da máquina
    arp -a	        Mostra tabela ARP da rede
    route print	    Mostra tabela de rotas IP
    telnet	        Cliente para conexão Telnet (pode ser ativado)
    tftp	        Cliente para protocolo TFTP

    Comandos de Ajuda e Diagnóstico
    Comando	        Função

    help	        Lista comandos disponíveis no CMD
    comando /?	    Mostra ajuda sobre o comando
    perfmon         Abre o Monitor de Desempenho
    eventvwr	    Abre o Visualizador de Eventos
    resmon	        Monitor de Recursos
    msinfo32	    Exibe informações detalhadas do sistema
    dxdiag	        Diagnóstico DirectX e hardware gráfico

    Comandos Gráficos via CMD
    Comando	        Função

    start notepad	Abre o Bloco de Notas
    start calc	    Abre a Calculadora
    start mspaint	Abre o Paint
    start explorer	Abre o Explorador de Arquivos
    start chrome	Abre o Google Chrome (se estiver no PATH)
    control printers	Abre a janela de impressoras

    Comandos Específicos para Scripts
    Comando	    Função

    choice	    Permite criar menus interativos (choice /c:123 /m "Escolha 1, 2 ou 3")
    timeout /t 5	Aguarda 5 segundos
    set /p var=Digite algo:	Lê entrada do usuário em batch
    pushd e popd	Salva e retorna ao diretório anterior
    assoc	    Mostra ou define associações de extensão de arquivos
    ftype	    Mostra ou define comandos usados com extensões

    Gerenciamento de Hardware e Sistema
    Comando	        Função

    driverquery	    Lista todos os drivers instalados
    wmic cpu get name	Mostra o modelo do processador
    wmic diskdrive get status	Verifica se o HD/SSD está saudável
    wmic logicaldisk get name,freespace	Mostra discos e espaço livre
    set devmgr_show_nonpresent_devices=1 && devmgmt.msc	Mostra dispositivos ocultos no Gerenciador
    rundll32.exe user32.dll,LockWorkStation	Trava o computador
    rundll32.exe powrprof.dll,SetSuspendState	Hiberna o computador

    Comandos para Conexão, Porta e Firewall
    Comando	        Função

    netstat -an	    Mostra conexões e portas abertas
    netstat -b	    Mostra quais programas estão usando portas
    tasklist	    Lista processos ativos
    taskkill /IM nome.exe /F	Finaliza um processo
    netsh advfirewall firewall add rule ...	Adiciona regras ao firewall
    firewall.cpl	Abre a interface gráfica do firewall
    ping 8.8.8.8	Testa conexão com IP do Google
    tracert google.com	Mostra rota até o destino (rastreio)
    nslookup	    Faz consulta DNS

    Comandos de Instalação, PowerShell e Chocolatey
    Comando	        Função

    powershell	    Entra no PowerShell
    powershell -Command "Get-Process"	Executa comandos direto do CMD
    winget	        Gerenciador de pacotes moderno do Windows
    choco install nome	Instala via Chocolatey (precisa estar instalado)
    sfc /scannow	Verifica e corrige arquivos corrompidos do sistema
    DISM /Online /Cleanup-Image /RestoreHealth	Repara imagem do Windows

    Comandos Customizados e Avançados
    Comando	        Função

    schtasks	    Cria tarefas agendadas via linha de comando
    forfiles /P . /M *.txt /C "cmd /c del @file"	Deleta todos os .txt da pasta atual
    takeown /f caminho	Toma posse de um arquivo protegido
    robocopy origem destino /E	Cópia avançada de arquivos
    xcopy origem destino /E /H /C /I	Outra forma de cópia poderosa
    mklink	        Cria links simbólicos (atalhos reais)
    subst X: C:\pasta	Cria uma unidade virtual (como um pendrive falso)

    Comandos para Manipular Arquivos e Diretórios
    Comando	        Função

    fsutil file createnew nome.txt 1000	Cria arquivo vazio com 1000 bytes
    tree	        Mostra estrutura de pastas em forma de árvore
    clip	        Copia a saída do terminal para a área de transferência
    `echo texto	clip`
    type arquivo.txt	Mostra o conteúdo de um arquivo
    more arquivo.txt	Mostra conteúdo página por página
    move	        Move arquivos/pastas
    ren	            Renomeia arquivos/pastas
    replace	        Substitui arquivos antigos por novos
    call script.bat	Executa um batch de dentro de outro

    Comandos Pouco Usados ou Escondidos
    Comando	        Função

    whoami	        Mostra o usuário atual
    echo %CD%	    Mostra diretório atual
    hostname	    Mostra o nome da máquina
    set	            Mostra variáveis de ambiente
    ver	            Mostra a versão do Windows
    title 	        Muda o título da janela do CMD
    color 0A	    Muda a cor do CMD (fundo preto, texto verde)
    vol	            Mostra número de série do volume
    assoc .ext=txtfile	Associa extensões a programas
    ftype txtfile="C:\...notepad.exe" "%1"	Liga a extensão a um programa
    cmd /k comando	Executa e mantém a janela aberta
    cmd /c comando	Executa e fecha a janela

    Comandos Curiosos / Brincadeiras
    Comando	        Função

    net send nome "Olá!"	Envia mensagem em rede local (precisa do serviço ativado)
    echo ^G (Ctrl+G)	Faz o "beep" do sistema
    msg * "Você foi hackeado"	Envia mensagem para todos usuários (em versões com terminal multiusuário)
    shutdown -s -c "Trollado"	Desliga o PC com mensagem personalizada
    taskkill /F /IM explorer.exe	Fecha a barra de tarefas e o menu Iniciar
    start /MAX notepad	Abre o bloco de notas em tela cheia
    start /MIN chrome	Abre o Chrome minimizado

    */

    system("choice");

    cin.get();
    return 0;
}