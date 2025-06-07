#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Loadout {
#pragma pack(push, 1)
struct HC_Loadout_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x18]; public:
    void* get_UberGraphFrame();
    void* get_DefaultLoadoutFlags();
    static _Script_CoreUObject::Class* static_class();
    void OverrideLoadout();
    void OverrideIfEnabled(bool& ValueToOverride, bool Override);
    void InitializeLoadout();
    void Initialize_Droid();
    void Loadout_Changed(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void ReceiveBeginPlay0();
    void RespawnPlayer();
    void ExecuteUbergraph_HC_Loadout(int32_t EntryPoint);
}; // Size: 0x188
#pragma pack(pop)
}
