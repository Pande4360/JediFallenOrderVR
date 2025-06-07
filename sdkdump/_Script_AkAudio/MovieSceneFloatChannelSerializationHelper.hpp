#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct MovieSceneFloatChannelSerializationHelper {
    private: char pad_0[0x30]; public:
    void* get_PreInfinityExtrap();
    void* get_PostInfinityExtrap();
    void* get_Times();
    void* get_Values();
    float& get_DefaultValue();
    bool get_bHasDefaultValue();
    void set_bHasDefaultValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
