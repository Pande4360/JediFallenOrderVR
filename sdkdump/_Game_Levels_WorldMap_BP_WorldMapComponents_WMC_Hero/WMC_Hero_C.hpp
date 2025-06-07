#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero {
#pragma pack(push, 1)
struct WMC_Hero_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    static _Script_CoreUObject::Class* static_class();
    void ResetColors();
    void ReceiveBeginPlay0();
    void OnHeroTookDamage(float Health);
    void OnGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* Previous_State, void* New_State);
    void ExecuteUbergraph_WMC_Hero(int32_t EntryPoint);
}; // Size: 0x180
#pragma pack(pop)
}
