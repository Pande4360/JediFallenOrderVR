#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationGraphNodeComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x20]; public:
    void* get_Node();
    _Script_NavigationSystem::NavigationGraphNodeComponent*& get_NextNodeComponent();
    _Script_NavigationSystem::NavigationGraphNodeComponent*& get_PrevNodeComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
