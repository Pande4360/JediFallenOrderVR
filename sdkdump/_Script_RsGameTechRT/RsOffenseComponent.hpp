#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsFireProjectileParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsOffenseComponent : public _Script_Engine::ActorComponent {
    static _Script_CoreUObject::Class* static_class();
    void OnNotifiedToFireProjectile(_Script_Engine::AnimSequenceBase* Animation, _Script_RsGameTechRT::RsFireProjectileParameter FireParam);
}; // Size: 0x170
#pragma pack(pop)
}
