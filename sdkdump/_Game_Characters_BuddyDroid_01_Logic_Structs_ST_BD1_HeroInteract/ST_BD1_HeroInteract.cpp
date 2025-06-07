#include "..\FUObjectArray.hpp"
#include "ST_BD1_HeroInteract.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
_Script_Engine::AnimSequenceBase*& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract::get_HeroAnimation_32_A18876A84B2D9B276D7A539C01F84934() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimSequenceBase*& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract::get_BD1Animation_33_56860E70419121CABA2847B02E12B0BC() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x8);
}
void* _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract::get_RelationshipStatus_28_6A17972747240BC0CA77A9B0F64FEA40() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract::get_Weight_29_70941F6D4835D10FD44ACC9EAF87D08F() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Characters/BuddyDroid_01/Logic/Structs/ST_BD1_HeroInteract.ST_BD1_HeroInteract");
    return result;
}
