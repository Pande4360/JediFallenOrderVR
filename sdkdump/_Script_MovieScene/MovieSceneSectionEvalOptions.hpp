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
struct MovieSceneSectionEvalOptions {
    private: char pad_0[0x2]; public:
    bool get_bCanEditCompletionMode();
    void set_bCanEditCompletionMode(bool value);
    void* get_CompletionMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
