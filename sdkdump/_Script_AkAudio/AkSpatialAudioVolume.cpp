#include "..\FUObjectArray.hpp"
#include "AkLateReverbComponent.hpp"
#include "AkRoomComponent.hpp"
#include "AkSpatialAudioVolume.hpp"
#include "AkSurfaceReflectorSetComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
_Script_AkAudio::AkSurfaceReflectorSetComponent*& _Script_AkAudio::AkSpatialAudioVolume::get_SurfaceReflectorSet() {
    return *(_Script_AkAudio::AkSurfaceReflectorSetComponent**)((uintptr_t)this + 0x398);
}
_Script_AkAudio::AkLateReverbComponent*& _Script_AkAudio::AkSpatialAudioVolume::get_LateReverb() {
    return *(_Script_AkAudio::AkLateReverbComponent**)((uintptr_t)this + 0x3a0);
}
_Script_AkAudio::AkRoomComponent*& _Script_AkAudio::AkSpatialAudioVolume::get_Room() {
    return *(_Script_AkAudio::AkRoomComponent**)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSpatialAudioVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSpatialAudioVolume");
    return result;
}
