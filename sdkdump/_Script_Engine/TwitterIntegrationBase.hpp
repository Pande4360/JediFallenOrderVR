#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlatformInterfaceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TwitterIntegrationBase : public PlatformInterfaceBase {
    static _Script_CoreUObject::Class* static_class();
    bool TwitterRequest(void* URL, void*& ParamKeysAndValues, void* RequestMethod, int32_t AccountIndex);
    bool ShowTweetUI(void* InitialMessage, void* URL, void* Picture);
    void Init();
    int32_t GetNumAccounts();
    void* GetAccountName(int32_t AccountIndex);
    bool CanShowTweetUI();
    bool AuthorizeAccounts();
}; // Size: 0x38
#pragma pack(pop)
}
