#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BakedAnimationState {
    private: char pad_0[0x48]; public:
    void* get_StateName();
    void* get_Transitions();
    int32_t& get_StateRootNodeIndex();
    int32_t& get_StartNotify();
    int32_t& get_EndNotify();
    int32_t& get_FullyBlendedNotify();
    bool get_bIsAConduit();
    void set_bIsAConduit(bool value);
    int32_t& get_EntryRuleNodeIndex();
    void* get_PlayerNodeIndices();
    bool get_bAlwaysResetOnEntry();
    void set_bAlwaysResetOnEntry(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
