#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIPOIInteractionData {
    private: char pad_0[0x170]; public:
    bool get_bUseCharacterTypeFilter();
    void set_bUseCharacterTypeFilter(bool value);
    void* get_CharacterType();
    void* get_CharacterTypeFilter();
    void* get_MotionParmName();
    void* get_BehaviorData();
    bool get_bUseCustomBehaviorTree();
    void set_bUseCustomBehaviorTree(bool value);
    void* get_CustomBehaviorTreeAsset();
    bool get_bInjectCustomBehaviorTreeAsRoot();
    void set_bInjectCustomBehaviorTreeAsRoot(bool value);
    void* get_CustomBehaviorData();
    bool get_bHasPropagatedCharacterTypeFilter();
    void set_bHasPropagatedCharacterTypeFilter(bool value);
    bool get_bHasPropagatedMotionParmName();
    void set_bHasPropagatedMotionParmName(bool value);
    bool get_bHasPropagatedCustomBehaviorData();
    void set_bHasPropagatedCustomBehaviorData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
