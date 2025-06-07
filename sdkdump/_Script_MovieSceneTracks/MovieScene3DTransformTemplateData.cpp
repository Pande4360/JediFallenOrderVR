#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DTransformTemplateData.hpp"
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_TranslationCurve() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_bUseQuaternionInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0x648 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_RotationCurve() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::set_bUseQuaternionInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x648 + 0);
    *(uint8_t*)((uintptr_t)this + 0x648 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_ManualWeight() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_ScaleCurve() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_BlendType() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_Mask() {
    return (void*)((uintptr_t)this + 0x644);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_TeleportationTypes() {
    return (void*)((uintptr_t)this + 0x650);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DTransformTemplateData");
    return result;
}
