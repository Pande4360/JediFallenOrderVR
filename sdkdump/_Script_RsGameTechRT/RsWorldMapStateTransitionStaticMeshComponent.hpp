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
struct RsWorldMapStateTransitionStaticMeshComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x8]; public:
    void* get_ClassToSpawn();
    static _Script_CoreUObject::Class* static_class();
    void BroadcastSetState(int32_t State);
}; // Size: 0x178
#pragma pack(pop)
}
