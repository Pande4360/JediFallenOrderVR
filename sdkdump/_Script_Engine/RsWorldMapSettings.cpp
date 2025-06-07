#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsWorldMapSettings.hpp"
void* _Script_Engine::RsWorldMapSettings::get_WorldMapStreamingAreas() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RsWorldMapSettings::get_WhiteListSublevelSearchPatterns() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::RsWorldMapSettings::get_UserDefinedMapSectionMeshTypes() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::RsWorldMapSettings::get_LocationNameDefinesPtr() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::RsWorldMapSettings::get_WorldMapDefinitionAssetRefs() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::RsWorldMapSettings::get_UserDefinedGatewayTypes() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::RsWorldMapSettings::get_Exporter_SublevelStringSearchPatterns() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Engine::RsWorldMapSettings::get_BlackListSublevelSearchPatterns() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::RsWorldMapSettings::get_LevelsToForceLoad() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldMapSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsWorldMapSettings");
    return result;
}
