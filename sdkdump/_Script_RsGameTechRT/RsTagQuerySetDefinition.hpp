#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct ScriptStruct;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTagContainer;
}
namespace _Script_CoreUObject {
struct StructProperty;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsTagQuerySetDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x18]; public:
    _Script_CoreUObject::ScriptStruct*& get_ResultStructClass();
    void* get_Queries();
    static _Script_CoreUObject::Class* static_class();
    void CalculateResults(_Script_RsGameTechRT::RsTagQuerySetDefinition* QuerySet, _Script_GameplayTags::GameplayTagContainer& Tags, _Script_CoreUObject::StructProperty*& ReturnValue);
}; // Size: 0x48
#pragma pack(pop)
}
