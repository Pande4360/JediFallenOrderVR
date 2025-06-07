#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEasingSettings {
    private: char pad_0[0x38]; public:
    int32_t& get_AutoEaseInDuration();
    int32_t& get_AutoEaseOutDuration();
    void* get_EaseIn();
    bool get_bManualEaseIn();
    void set_bManualEaseIn(bool value);
    int32_t& get_ManualEaseInDuration();
    void* get_EaseOut();
    bool get_bManualEaseOut();
    void set_bManualEaseOut(bool value);
    int32_t& get_ManualEaseOutDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
