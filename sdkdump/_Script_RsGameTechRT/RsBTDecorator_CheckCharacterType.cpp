#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckCharacterType.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckCharacterType::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckCharacterType::get_TargetKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckCharacterType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckCharacterType");
    return result;
}
