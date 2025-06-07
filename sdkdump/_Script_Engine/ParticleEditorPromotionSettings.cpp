#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleEditorPromotionSettings.hpp"
void* _Script_Engine::ParticleEditorPromotionSettings::get_DefaultParticleAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleEditorPromotionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleEditorPromotionSettings");
    return result;
}
