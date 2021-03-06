#pragma once
#include <Windows.h>

#define STRA(x) #x
#define STRW(x) L#x

#define STR_HELPERA(x) STRA(x)
#define STR_HELPERW(x) STRW(x)

#define SCYLLA_HIDE_VERSION_MAJOR 1
#define SCYLLA_HIDE_VERSION_MINOR 4
#define SCYLLA_HIDE_VERSION_PATCH GIT_VERSION_NUMBER

#define SCYLLA_HIDE_NAME_A "ScyllaHide"
#define SCYLLA_HIDE_NAME_W L"ScyllaHide"

#define SCYLLA_HIDE_VERSION_STRING_A STR_HELPERA(SCYLLA_HIDE_VERSION_MAJOR) "." STR_HELPERA(SCYLLA_HIDE_VERSION_MINOR) "." STR_HELPERA(SCYLLA_HIDE_VERSION_PATCH) "-" GIT_SHORT_HASH_A
#define SCYLLA_HIDE_VERSION_STRING_W STR_HELPERW(SCYLLA_HIDE_VERSION_MAJOR) L"." STR_HELPERW(SCYLLA_HIDE_VERSION_MINOR) L"." STR_HELPERW(SCYLLA_HIDE_VERSION_PATCH) L"-" GIT_SHORT_HASH_W

namespace scl
{
    void ShowAboutBox(HWND hWnd);
}
