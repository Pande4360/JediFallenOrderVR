#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsZiplinePointComponent : public _Script_Engine::MeshComponent {
    private: char pad_b60[0x50]; public:
    void* get_OnAttachToZipline();
    void* get_OnDetachFromZipline();
    _Script_Engine::Actor*& get_PreviousPointOwner();
    _Script_Engine::Actor*& get_NextPointOwner();
    float& get_TubeRadius();
    _Script_RsGameTechRT::RsZiplinePointComponent*& get_PreviousPoint();
    _Script_RsGameTechRT::RsZiplinePointComponent*& get_NextPoint();
    static _Script_CoreUObject::Class* static_class();
    void SetEnabled(bool Enabled);
}; // Size: 0xbb0
#pragma pack(pop)
}
