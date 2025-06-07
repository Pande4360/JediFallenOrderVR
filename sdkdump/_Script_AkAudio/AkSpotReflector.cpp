#include "..\FUObjectArray.hpp"
#include "AkAcousticTexture.hpp"
#include "AkAuxBus.hpp"
#include "AkSpotReflector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_AkAudio::AkAuxBus*& _Script_AkAudio::AkSpotReflector::get_AuxBus() {
    return *(_Script_AkAudio::AkAuxBus**)((uintptr_t)this + 0x360);
}
float& _Script_AkAudio::AkSpotReflector::get_Level() {
    return *(float*)((uintptr_t)this + 0x384);
}
void* _Script_AkAudio::AkSpotReflector::get_AuxBusName() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_AkAudio::AkAcousticTexture*& _Script_AkAudio::AkSpotReflector::get_AcousticTexture() {
    return *(_Script_AkAudio::AkAcousticTexture**)((uintptr_t)this + 0x378);
}
float& _Script_AkAudio::AkSpotReflector::get_DistanceScalingFactor() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSpotReflector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSpotReflector");
    return result;
}
