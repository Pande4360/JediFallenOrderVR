#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDeathDefinitionData.hpp"
#include "RsDirectionalAnimData.hpp"
_Script_RsGameTechRT::RsDirectionalAnimData*& _Script_RsGameTechRT::RsDeathDefinitionData::get_AnimType() {
    return *(_Script_RsGameTechRT::RsDirectionalAnimData**)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsDeathDefinitionData::get_bRotateCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsDeathDefinitionData::set_bRotateCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDeathDefinitionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDeathDefinitionData");
    return result;
}
