#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_VoidTears_Struct_VoidTear {
#pragma pack(push, 1)
struct Struct_VoidTear {
    private: char pad_0[0x30]; public:
    void* get_LocationDescription_10_B4E8C0A6426E7C36D3CA7A91DC2FBBE7();
    void* get_DisplayName_11_8357909348ECAD8AF075B2986A47287D();
    _Script_Engine::RsStreamingDefinition*& get_LevelStreamingDefinition_6_13E2EDE84581DFD7D8425D9A3B320EF9();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
