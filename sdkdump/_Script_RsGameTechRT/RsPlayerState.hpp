#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPlayerState : public _Script_Engine::PlayerState {
    private: char pad_428[0x28]; public:
    void* get_LoadoutFlags();
    void* get_UpgradeFlags();
    static _Script_CoreUObject::Class* static_class();
    bool HasReloaded();
    void BP_OnStateLoaded();
    void BP_OnPreSaveGame();
    void BP_OnCacheOffNewGamePlusInfo();
    bool AllowLoadoutOverride();
}; // Size: 0x450
#pragma pack(pop)
}
