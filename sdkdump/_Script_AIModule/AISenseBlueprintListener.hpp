#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\UserDefinedStruct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISenseBlueprintListener : public _Script_Engine::UserDefinedStruct {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
