#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Game_UI_Holomap_UI_CriticalPath {
struct UI_CriticalPath_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapDroidscan {
#pragma pack(push, 1)
struct Struct_WorldMapDroidScan {
    private: char pad_0[0x18]; public:
    _Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C*& get_UI_13_3D44C803486960C8B20D6D832A98227F();
    void* get_Location_15_311F2A61463DCB7B855483A0B77D57EF();
    void* get_Planet_18_8917F13D415AC3BECF6C058D0C983C3D();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
