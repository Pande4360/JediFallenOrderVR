#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RepAttachment {
    private: char pad_0[0x40]; public:
    _Script_Engine::Actor*& get_AttachParent();
    void* get_LocationOffset();
    void* get_RelativeScale3D();
    void* get_RotationOffset();
    void* get_AttachSocket();
    _Script_Engine::SceneComponent*& get_AttachComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
