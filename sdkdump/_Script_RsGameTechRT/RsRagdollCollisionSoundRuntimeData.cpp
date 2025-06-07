#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsRagdollCollisionSoundRuntimeData.hpp"
float& _Script_RsGameTechRT::RsRagdollCollisionSoundRuntimeData::get_LastTimeSoundWasPlayed() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsRagdollCollisionSoundRuntimeData::get_ImpactSize() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRagdollCollisionSoundRuntimeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsRagdollCollisionSoundRuntimeData");
    return result;
}
