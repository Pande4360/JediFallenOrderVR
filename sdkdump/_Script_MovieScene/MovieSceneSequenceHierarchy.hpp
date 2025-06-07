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
struct MovieSceneSequenceHierarchy {
    private: char pad_0[0xa0]; public:
    void* get_SubSequences();
    void* get_Hierarchy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
