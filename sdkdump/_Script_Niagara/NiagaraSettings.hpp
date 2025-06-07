#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x30]; public:
    void* get_AdditionalParameterTypes();
    void* get_AdditionalPayloadTypes();
    void* get_AdditionalParameterEnums();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
