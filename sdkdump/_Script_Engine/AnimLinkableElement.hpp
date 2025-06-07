#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimLinkableElement {
    private: char pad_0[0x30]; public:
    _Script_Engine::AnimMontage*& get_LinkedMontage();
    int32_t& get_SlotIndex();
    int32_t& get_SegmentIndex();
    void* get_LinkMethod();
    void* get_CachedLinkMethod();
    float& get_SegmentBeginTime();
    float& get_SegmentLength();
    float& get_LinkValue();
    _Script_Engine::AnimationAsset*& get_LinkedSequence();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
