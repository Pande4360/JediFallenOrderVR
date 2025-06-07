#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTutorial {
#pragma pack(push, 1)
struct Struct_WorldMapTutorial {
    private: char pad_0[0x40]; public:
    int32_t& get_StepNum_2_3D44C803486960C8B20D6D832A98227F();
    void* get_StepName_5_311F2A61463DCB7B855483A0B77D57EF();
    void* get_StepMessage_11_E319A2594789D3ED1A22018669B80812();
    void* get_StepMapSection_8_0044FB534E5BE4429E0C64A9251C44AD();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
