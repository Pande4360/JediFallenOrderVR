#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ActorSequence {
#pragma pack(push, 1)
struct ActorSequenceObjectReference {
    private: char pad_0[0x28]; public:
    void* get_Type();
    void* get_ActorId();
    void* get_PathToComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
