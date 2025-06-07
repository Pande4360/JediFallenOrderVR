#include "..\FUObjectArray.hpp"
#include "UI_PlanetMissionPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
void* _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_StemMats() {
    return (void*)((uintptr_t)this + 0x678);
}
void* _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_IconMats() {
    return (void*)((uintptr_t)this + 0x628);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_PlanetName() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x610);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_PlanetMissionPlayer.UI_PlanetMissionPlayer_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_PlayerLocaiton() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
_Script_UMG::RetainerBox*& _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x620);
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreatePlanetIconWidget(void* IconType) {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateZeffoIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateKashyyykIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateDathomirIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateBoganoIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateGalaxyIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateIlumIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateFightCluibIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateFortressIconWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::CreateDoorLevelWidget() {
    return;
}
void _Game_UI_Holomap_UI_PlanetMissionPlayer::UI_PlanetMissionPlayer_C::ExecuteUbergraph_UI_PlanetMissionPlayer(int32_t EntryPoint) {
    return;
}
