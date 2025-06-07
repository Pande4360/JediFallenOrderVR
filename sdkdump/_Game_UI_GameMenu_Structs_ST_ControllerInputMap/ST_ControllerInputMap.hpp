#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Structs_ST_ControllerInputMap {
#pragma pack(push, 1)
struct ST_ControllerInputMap {
    private: char pad_0[0x20]; public:
    void* get_ActionNameLocalized_16_37FF720F460B77A994FD4CAFD86005C7();
    void* get_InputEnum_20_58C4B6254018981BAE2038ACEE165A65();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
