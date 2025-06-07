#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
struct VariantSet;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct LevelVariantSets : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_VariantSets();
    void* get_DisplayNodeExpansionStates();
    static _Script_CoreUObject::Class* static_class();
    _Script_VariantManagerContent::VariantSet* GetVariantSet(int32_t VariantSetIndex);
    int32_t GetNumVariantSets();
}; // Size: 0x88
#pragma pack(pop)
}
