#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwRangedOffenseBaseComponent.hpp"
namespace _Script_SwGame {
struct SwMuzzleTransformComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGenericRangedOffenseComponent : public SwRangedOffenseBaseComponent {
    private: char pad_1a0[0x70]; public:
    void* get_PrimaryProjectile();
    void* get_AlternateProjectile();
    _Script_SwGame::SwMuzzleTransformComponent*& get_MuzzleTransform();
    static _Script_CoreUObject::Class* static_class();
    void OnMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
}; // Size: 0x210
#pragma pack(pop)
}
