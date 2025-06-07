#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicalAnimationProfile.hpp"
void* _Script_Engine::PhysicalAnimationProfile::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PhysicalAnimationProfile::get_PhysicalAnimationData() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicalAnimationProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PhysicalAnimationProfile");
    return result;
}
