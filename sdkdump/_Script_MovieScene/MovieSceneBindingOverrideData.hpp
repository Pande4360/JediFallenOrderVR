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
struct MovieSceneBindingOverrideData {
    private: char pad_0[0x24]; public:
    void* get_ObjectBindingId();
    void* get_Object();
    bool get_bOverridesDefault();
    void set_bOverridesDefault(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
