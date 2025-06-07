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
struct BakedStateExitTransition {
    private: char pad_0[0x20]; public:
    int32_t& get_CanTakeDelegateIndex();
    int32_t& get_CustomResultNodeIndex();
    int32_t& get_TransitionIndex();
    bool get_bDesiredTransitionReturnValue();
    void set_bDesiredTransitionReturnValue(bool value);
    bool get_bAutomaticRemainingTimeRule();
    void set_bAutomaticRemainingTimeRule(bool value);
    void* get_PoseEvaluatorLinks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
