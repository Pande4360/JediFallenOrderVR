#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_PlanetMissionPlayer {
#pragma pack(push, 1)
struct UI_PlanetMissionPlayer_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_PlanetName();
    _Script_UMG::Image*& get_PlayerLocaiton();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    void* get_IconMats();
    void* get_StemMats();
    static _Script_CoreUObject::Class* static_class();
    void CreatePlanetIconWidget(void* IconType);
    void CreateKashyyykIconWidget();
    void CreateDathomirIconWidget();
    void CreateZeffoIconWidget();
    void CreateBoganoIconWidget();
    void CreateGalaxyIconWidget();
    void CreateIlumIconWidget();
    void CreateFightCluibIconWidget();
    void CreateFortressIconWidget();
    void CreateDoorLevelWidget();
    void ExecuteUbergraph_UI_PlanetMissionPlayer(int32_t EntryPoint);
}; // Size: 0x6c8
#pragma pack(pop)
}
