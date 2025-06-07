#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_SubInstance : public AnimNode_Base {
    private: char pad_30[0x98]; public:
    void* get_InPose();
    void* get_InstanceClass();
    void* get_Tag();
    _Script_Engine::AnimInstance*& get_InstanceToRun();
    void* get_InstanceProperties();
    void* get_SubInstanceProperties();
    void* get_SourcePropertyNames();
    void* get_DestPropertyNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
