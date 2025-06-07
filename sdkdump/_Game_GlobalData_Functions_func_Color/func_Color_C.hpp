#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_GlobalData_Functions_func_Color {
#pragma pack(push, 1)
struct func_Color_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void Shade_RGB(_Script_CoreUObject::LinearColor Color, float Shade, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& Shaded_Color);
    void Tint_RGB(_Script_CoreUObject::LinearColor Color, float Tint, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& Tinted_Color);
}; // Size: 0x28
#pragma pack(pop)
}
