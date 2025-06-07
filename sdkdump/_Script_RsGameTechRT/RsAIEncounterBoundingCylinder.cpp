#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIEncounterBoundingCylinder.hpp"
float& _Script_RsGameTechRT::RsAIEncounterBoundingCylinder::get_BaseRadius() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIEncounterBoundingCylinder::get_HalfHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_RsGameTechRT::RsAIEncounterBoundingCylinder::set_bEnteredCylinder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIEncounterBoundingCylinder::get_bEnteredCylinder() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIEncounterBoundingCylinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIEncounterBoundingCylinder");
    return result;
}
