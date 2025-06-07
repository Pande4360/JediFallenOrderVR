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
struct MovieScenePossessable {
    private: char pad_0[0x48]; public:
    void* get_Tags();
    void* get_Guid();
    void* get_Name();
    void* get_PossessedObjectClass();
    void* get_ParentGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
