#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintEditorPromotionSettings.hpp"
void* _Script_Engine::BlueprintEditorPromotionSettings::get_FirstMeshPath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BlueprintEditorPromotionSettings::get_SecondMeshPath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BlueprintEditorPromotionSettings::get_DefaultParticleAsset() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintEditorPromotionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintEditorPromotionSettings");
    return result;
}
