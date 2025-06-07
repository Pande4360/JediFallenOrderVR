#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerCharacterDefinition.hpp"
#include "SwPlayerCharacterDefinition.hpp"
void* _Script_SwGame::SwPlayerCharacterDefinition::get_TargetingProfiles() {
    return (void*)((uintptr_t)this + 0x200);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerCharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerCharacterDefinition");
    return result;
}
