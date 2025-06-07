#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_PlanetIcon {
#pragma pack(push, 1)
struct UI_PlanetIcon_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_PlanetText();
    void* get_IconMats();
    static _Script_CoreUObject::Class* static_class();
    void CreatePlanetIconWidget(void* IconType);
    void CreateKashyyykIconWidget();
    void CreateDathomirIconWidget();
    void CreateZeffoIconWidget();
    void CreateBoganoIconWidget();
    void CreateGalaxyIconWidget();
    void CreateIlumIconWidget();
    void CreateFightClubIconWidget();
    void CreateFortressIconWidget();
    void CreateDoorLevelWidget();
    void ExecuteUbergraph_UI_PlanetIcon(int32_t EntryPoint);
}; // Size: 0x668
#pragma pack(pop)
}
