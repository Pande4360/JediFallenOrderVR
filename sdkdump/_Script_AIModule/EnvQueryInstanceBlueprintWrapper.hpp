#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryInstanceBlueprintWrapper : public _Script_CoreUObject::Object {
    private: char pad_28[0x50]; public:
    int32_t& get_QueryID();
    void* get_ItemType();
    int32_t& get_OptionIndex();
    void* get_OnQueryFinishedEvent();
    static _Script_CoreUObject::Class* static_class();
    void SetNamedParam(void* ParamName, float Value);
    void* GetResultsAsLocations();
    void* GetResultsAsActors();
    float GetItemScore(int32_t ItemIndex);
}; // Size: 0x78
#pragma pack(pop)
}
