#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsCollisionHandler.hpp"
#include "RsGamePhysicsCollisionHandler.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsGamePhysicsCollisionHandler::get_ImpactEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x40);
}
bool _Script_RsGameTechRT::RsGamePhysicsCollisionHandler::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsGamePhysicsCollisionHandler::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsGamePhysicsCollisionHandler::get_m_LastPlayedRagdollSounds() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGamePhysicsCollisionHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGamePhysicsCollisionHandler");
    return result;
}
