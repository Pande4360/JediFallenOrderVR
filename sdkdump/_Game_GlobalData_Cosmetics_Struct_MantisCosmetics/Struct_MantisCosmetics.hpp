#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Cosmetics_Struct_MantisCosmetics {
#pragma pack(push, 1)
struct Struct_MantisCosmetics {
    private: char pad_0[0x168]; public:
    void* get_BackEngine_2_61B01F8D405E2710AB93D197E033812E();
    void* get_CockpitExterior_12_E3E4040547A0AE67FB2B4EAE031FEF56();
    void* get_Cylinder_24_5B61800C4AC3E95F7F2458AABDA3B4D1();
    void* get_Fuselage_A_22_7EF0A723435D0CDE923CC5A4AD062688();
    void* get_Fuselage_B_23_5E527FC045B1FEF9253C58A0E9D72B48();
    void* get_SmallEngine_15_9F66A158419DAF0B8EE8FC82427A9CB7();
    void* get_Top_A_19_FC8F1E9E4A22CDF1EE8E7F82D3E61B69();
    void* get_Top_B_20_F607BE9C42E4AA1282D986A698667B17();
    void* get_Wing_21_B09A023F436AF9A40C5BF7AA7A74B255();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
