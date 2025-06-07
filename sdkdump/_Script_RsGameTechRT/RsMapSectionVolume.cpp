#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "RsMapSectionVolume.hpp"
void* _Script_RsGameTechRT::RsMapSectionVolume::get_MapSectionTag() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMapSectionVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsMapSectionVolume");
    return result;
}
void _Script_RsGameTechRT::RsMapSectionVolume::HandleHeroOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
