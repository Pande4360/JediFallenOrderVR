#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithStaticMaterialTemplate {
    private: char pad_0[0x10]; public:
    void* get_MaterialSlotName();
    _Script_Engine::MaterialInterface*& get_MaterialInterface();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
