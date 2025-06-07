#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsImpactEffectSurface.hpp"
bool _Script_RsGameTechRT::RsImpactEffectSurface::get_LightSaberImpact() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsImpactEffectSurface::get_SurfaceEffectTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x18);
}
void _Script_RsGameTechRT::RsImpactEffectSurface::set_LightSaberImpact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsImpactEffectSurface::get_ForceFeedbackDuration() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsImpactEffectSurface::get_ImpactSound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsImpactEffectSurface::get_CameraShake() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsImpactEffectSurface::get_ForceFeedbackIntensity() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsImpactEffectSurface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsImpactEffectSurface");
    return result;
}
