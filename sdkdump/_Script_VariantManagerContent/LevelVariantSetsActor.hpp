#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
struct LevelVariantSets;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct LevelVariantSetsActor : public _Script_Engine::Actor {
    private: char pad_360[0x18]; public:
    void* get_LevelVariantSets();
    static _Script_CoreUObject::Class* static_class();
    bool SwitchOnVariantByName(void* VariantSetName, void* VariantName);
    bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
    void SetLevelVariantSets(_Script_VariantManagerContent::LevelVariantSets* InVariantSets);
    _Script_VariantManagerContent::LevelVariantSets* GetLevelVariantSets(bool bLoad);
}; // Size: 0x378
#pragma pack(pop)
}
