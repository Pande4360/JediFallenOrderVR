#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsHeroStateModifierInstance.hpp"
void* _Script_RsGameTechRT::RsHeroStateModifierInstance::get_Owner() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsHeroStateModifierInstance::get_Definition() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateModifierInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeroStateModifierInstance");
    return result;
}
