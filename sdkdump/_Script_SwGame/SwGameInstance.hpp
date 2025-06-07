#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsGameInstance.hpp"
namespace _Script_SwGame {
struct RsAbilitySystem;
}
namespace _Script_SwGame {
struct SwProjectileDataManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameInstance : public _Script_RsGameTechRT::RsGameInstance {
    private: char pad_1d8[0x10]; public:
    _Script_SwGame::RsAbilitySystem*& get_AbilitySystem();
    _Script_SwGame::SwProjectileDataManager*& get_ProjectileDataManager();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}
