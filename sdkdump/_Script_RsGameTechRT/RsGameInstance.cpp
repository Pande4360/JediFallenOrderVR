#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\GameInstance.hpp"
#include "..\_Script_Engine\RsTelemetryLogger.hpp"
#include "RAPSystem.hpp"
#include "RsGameInstance.hpp"
#include "RsMissionObjectiveSystemBase.hpp"
#include "RsNarrativeSystem.hpp"
#include "RsWorldMap.hpp"
#include "RsWorldMapHologramBase.hpp"
#include "RsZiplineManager.hpp"
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsGameInstance::get_ImpactEffectsSurfaceTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0xb0);
}
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsGameInstance::get_ImpactEffectsCharacterTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0xb8);
}
_Script_RsGameTechRT::RsWorldMap*& _Script_RsGameTechRT::RsGameInstance::get_RsWorldMap() {
    return *(_Script_RsGameTechRT::RsWorldMap**)((uintptr_t)this + 0xc0);
}
_Script_RsGameTechRT::RAPSystem*& _Script_RsGameTechRT::RsGameInstance::get_RAPSystem() {
    return *(_Script_RsGameTechRT::RAPSystem**)((uintptr_t)this + 0xe8);
}
_Script_RsGameTechRT::RsWorldMapHologramBase*& _Script_RsGameTechRT::RsGameInstance::get_Holomap() {
    return *(_Script_RsGameTechRT::RsWorldMapHologramBase**)((uintptr_t)this + 0xc8);
}
_Script_RsGameTechRT::RsMissionObjectiveSystemBase*& _Script_RsGameTechRT::RsGameInstance::get_MissionObjectiveSystem() {
    return *(_Script_RsGameTechRT::RsMissionObjectiveSystemBase**)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RsGameInstance::get_NarrativeSystemClass() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_RsGameTechRT::RsZiplineManager*& _Script_RsGameTechRT::RsGameInstance::get_ZiplineManager() {
    return *(_Script_RsGameTechRT::RsZiplineManager**)((uintptr_t)this + 0xd8);
}
_Script_RsGameTechRT::RsNarrativeSystem*& _Script_RsGameTechRT::RsGameInstance::get_RsNarrativeSystem() {
    return *(_Script_RsGameTechRT::RsNarrativeSystem**)((uintptr_t)this + 0xf0);
}
_Script_Engine::RsTelemetryLogger*& _Script_RsGameTechRT::RsGameInstance::get_TelemetryLogger() {
    return *(_Script_Engine::RsTelemetryLogger**)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGameInstance");
    return result;
}
_Script_Engine::RsTelemetryLogger* _Script_RsGameTechRT::RsGameInstance::GetTelemetryLogger() {
    return;
}
_Script_RsGameTechRT::RsNarrativeSystem* _Script_RsGameTechRT::RsGameInstance::GetRsNarrativeSystem() {
    return;
}
_Script_RsGameTechRT::RAPSystem* _Script_RsGameTechRT::RsGameInstance::GetRAPSystem() {
    return;
}
