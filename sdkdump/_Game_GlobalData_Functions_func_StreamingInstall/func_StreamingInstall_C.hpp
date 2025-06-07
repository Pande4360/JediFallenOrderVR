#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_GlobalData_Functions_func_StreamingInstall {
#pragma pack(push, 1)
struct func_StreamingInstall_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void AudioIsFullyInstalledForLocale(void* Locale, _Script_CoreUObject::Object* __WorldContext, void*& InstallStatus);
    void GameIsFullyInstalled(_Script_CoreUObject::Object* __WorldContext, bool& Fully_Installed_);
}; // Size: 0x28
#pragma pack(pop)
}
