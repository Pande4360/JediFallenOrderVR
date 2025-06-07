#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LinearTimecode {
struct DropTimecode;
}
namespace _Script_LinearTimecode {
#pragma pack(push, 1)
struct DropTimecodeToStringConversion : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Conv_DropTimecodeToString(_Script_LinearTimecode::DropTimecode& InTimecode);
}; // Size: 0x28
#pragma pack(pop)
}
