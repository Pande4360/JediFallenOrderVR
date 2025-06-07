#include "..\FUObjectArray.hpp"
#include "BP_HackPanel_CordovaBridge_C.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire\BP_HackPanel_Empire_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_HackPanel_CordovaBridge::BP_HackPanel_CordovaBridge_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_HackPanel_CordovaBridge.BP_HackPanel_CordovaBridge_C");
    return result;
}
