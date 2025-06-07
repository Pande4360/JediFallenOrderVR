#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceBindingReferences {
    private: char pad_0[0xa0]; public:
    void* get_BindingIdToReferences();
    void* get_AnimSequenceInstances();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
