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
struct MovieSceneRootEvaluationTemplateInstance {
    private: char pad_0[0x300]; public:
    void* get_DirectorInstances();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x300
#pragma pack(pop)
}
