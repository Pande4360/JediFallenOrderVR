#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapCollectableComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x20]; public:
    void* get_CollectableType();
    static _Script_CoreUObject::Class* static_class();
    void BroadcastCollectableAcquired();
}; // Size: 0x190
#pragma pack(pop)
}
