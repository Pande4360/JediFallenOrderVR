#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsDynamicDeformationSettings.hpp"
float& _Script_Engine::RsDynamicDeformationSettings::get_HeightDisplacementScale() {
    return *(float*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::RsDynamicDeformationSettings::get_RenderTargetSize() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::RsDynamicDeformationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsDynamicDeformationSettings");
    return result;
}
