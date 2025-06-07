#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RAPLineStartedEventData {
    private: char pad_0[0xa0]; public:
    void* get_Speaker();
    void* get_Actor();
    void* get_LineContent();
    int32_t& get_UID();
    void* get_Gesture();
    void* get_LookatTarget();
    _Script_Engine::AnimationAsset*& get_FacialAnim();
    bool get_bIsRadio();
    void set_bIsRadio(bool value);
    bool get_bNotSpatialized();
    void set_bNotSpatialized(bool value);
    int32_t& get_SubtitleAttenuationRange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
