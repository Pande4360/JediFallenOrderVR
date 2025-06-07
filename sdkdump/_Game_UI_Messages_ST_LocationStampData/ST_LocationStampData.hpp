#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Messages_ST_LocationStampData {
#pragma pack(push, 1)
struct ST_LocationStampData {
    private: char pad_0[0x60]; public:
    void* get_Planet_7_7B7631374CDE94AF1B18DA836C5CFC94();
    void* get_Region_6_9088D9CF4E714C275E4E319AD6AC9CEE();
    void* get_AurebeshRegion_DONOTTRANSLATE_11_3007AF4942085047630FCDA202C6822A();
    void* get_AurebeshPlanet_DONOTTRANSLATE_13_566369F2495881EBF6E6AD83F8F7F756();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
