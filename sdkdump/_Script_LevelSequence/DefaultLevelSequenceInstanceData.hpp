#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct DefaultLevelSequenceInstanceData : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    _Script_Engine::Actor*& get_TransformOriginActor();
    void* get_TransformOrigin();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
