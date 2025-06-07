#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Interact_ST_InteractIconSet {
#pragma pack(push, 1)
struct ST_InteractIconSet {
    private: char pad_0[0x10]; public:
    _Script_Engine::Texture2D*& get_HintIcon_5_321067C645858EBF5528C2A752841145();
    _Script_Engine::Texture2D*& get_InteractIcon_6_A7193ED0437CAB3450D4B6A3CA61F73C();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
