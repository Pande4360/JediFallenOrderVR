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
namespace _Game_GlobalData_Functions_func_incrementWrap {
#pragma pack(push, 1)
struct func_incrementWrap_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void incrementWrap(int32_t& Index, int32_t Increment, int32_t Length, _Script_CoreUObject::Object* __WorldContext, int32_t& NewIndex);
}; // Size: 0x28
#pragma pack(pop)
}
