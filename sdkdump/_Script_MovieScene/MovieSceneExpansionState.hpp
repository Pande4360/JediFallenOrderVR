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
struct MovieSceneExpansionState {
    private: char pad_0[0x1]; public:
    bool get_bExpanded();
    void set_bExpanded(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
