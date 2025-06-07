#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavRelevantComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x30]; public:
    bool get_bAttachToOwnersRoot();
    void set_bAttachToOwnersRoot(bool value);
    _Script_CoreUObject::Object*& get_CachedNavParent();
    static _Script_CoreUObject::Class* static_class();
    void SetNavigationRelevancy(bool bRelevant);
}; // Size: 0x1a0
#pragma pack(pop)
}
