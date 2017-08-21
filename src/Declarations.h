#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#define MAX_PATH 260

#if defined(_WIN64)
typedef unsigned __int64 ULONG_PTR;
#else
typedef unsigned long ULONG_PTR;
#endif

typedef unsigned long DWORD, *PDWORD, *LPDWORD;

typedef struct tagKBDLLHOOKSTRUCT {
	DWORD     vkCode;
	DWORD     scanCode;
	DWORD     flags;
	DWORD     time;
	ULONG_PTR dwExtraInfo;
} KBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT, *LPKBDLLHOOKSTRUCT;

typedef void *PVOID;

typedef PVOID HANDLE;

typedef HANDLE HINSTANCE;


#endif
