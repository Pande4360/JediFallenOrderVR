#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwWorldMapLocalPlanetSettings.hpp"
void* _Script_SwGame::SwWorldMapLocalPlanetSettings::get_WorldMapName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwWorldMapLocalPlanetSettings::get_InitialMapScale() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwWorldMapLocalPlanetSettings::get_MinZoomScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwWorldMapLocalPlanetSettings::get_MaxZoomScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwWorldMapLocalPlanetSettings::get_TranslationBoundsRadialMultiplier() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_SwGame::SwWorldMapLocalPlanetSettings::get_InteriorLevelZValues() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SwGame::SwWorldMapLocalPlanetSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwWorldMapLocalPlanetSettings");
    return result;
}
