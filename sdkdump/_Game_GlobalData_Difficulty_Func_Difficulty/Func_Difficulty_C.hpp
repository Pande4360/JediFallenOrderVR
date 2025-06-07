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
namespace _Game_GlobalData_Difficulty_Struct_DifficultyModifiers {
struct Struct_DifficultyModifiers;
}
namespace _Game_GlobalData_Difficulty_Func_Difficulty {
#pragma pack(push, 1)
struct Func_Difficulty_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetCurrentDifficultyRow(_Script_CoreUObject::Object* __WorldContext, _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers& Out_Row);
}; // Size: 0x28
#pragma pack(pop)
}
