#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsDirectionalAnimData.hpp"
#include "RsDefenseDefinitionData.hpp"
#include "SwDefenseState.hpp"
_Script_RsGameTechRT::RsDirectionalAnimData*& _Script_SwGame::RsDefenseDefinitionData::get_AnimType() {
    return *(_Script_RsGameTechRT::RsDirectionalAnimData**)((uintptr_t)this + 0x0);
}
_Script_SwGame::SwDefenseState*& _Script_SwGame::RsDefenseDefinitionData::get_DefenseTemplate() {
    return *(_Script_SwGame::SwDefenseState**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::RsDefenseDefinitionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsDefenseDefinitionData");
    return result;
}
