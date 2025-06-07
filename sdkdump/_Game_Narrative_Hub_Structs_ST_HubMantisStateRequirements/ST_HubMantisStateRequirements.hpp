#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Structs_ST_HubMantisStateRequirements {
#pragma pack(push, 1)
struct ST_HubMantisStateRequirements {
    private: char pad_0[0x28]; public:
    void* get_MantisState_2_1DA6A2BF4F17D7D6DF80A0A9F1DF8E62();
    void* get_RequiredSetTags_6_59EB8F5C4EC2F4EE9900C0B64F17A2CE();
    void* get_RequiredUnsetTags_8_D99E77914A07D3105DC61B876F5CC57C();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
